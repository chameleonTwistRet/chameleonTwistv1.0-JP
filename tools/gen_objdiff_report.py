#!/usr/bin/env python3
"""Generate objdiff.json for decomp.dev progress reporting.

Enumerates every object linked into the ROM (from the generated .ld), then for
each C translation unit that still carries #pragma GLOBAL_ASM builds a second
"base" object with the pragmas stripped, so undecompiled functions are absent
and objdiff counts them as unmatched. Fully-decompiled C units use their normal
build object as both target and base; asm-only units are target-only.

Run after a full successful `ninja` build:
    python3 tools/gen_objdiff_report.py
Then:
    objdiff-cli report generate -o build/report.json
"""

import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LD_SCRIPT = ROOT / "chameleontwist.jp.ld"
PROGRESS_DIR = ROOT / "build" / "progress"
OBJDIFF_JSON = ROOT / "objdiff.json"
PRAGMA_RE = re.compile(r"^#pragma GLOBAL_ASM", re.M)


def linked_objects():
    text = LD_SCRIPT.read_text()
    objs = []
    seen = set()
    for m in re.finditer(r"(build/\S+\.o)\(", text):
        path = m.group(1)
        if path not in seen:
            seen.add(path)
            objs.append(path)
    return objs


def source_for(obj_path):
    # build/src/foo/bar.c.o -> src/foo/bar.c ; build/asm/x.s.o -> asm/x.s
    assert obj_path.startswith("build/") and obj_path.endswith(".o")
    return obj_path[len("build/"):-len(".o")]


def compile_command(obj_path):
    out = subprocess.check_output(
        ["ninja", "-t", "commands", obj_path], cwd=ROOT, text=True
    )
    cmd = out.strip().splitlines()[-1]
    # Drop the trailing dependency-generation cpp invocation.
    return cmd.split(" && cpp ")[0]


def build_base_object(src, obj_path):
    """Compile src with GLOBAL_ASM pragmas stripped into build/progress/."""
    src_path = ROOT / src
    tmp = src_path.with_suffix(".progress_tmp.c")
    base_obj = PROGRESS_DIR / (Path(src).name + ".o")
    stripped = PRAGMA_RE.sub("// (GLOBAL_ASM stripped for progress)", src_path.read_text())
    tmp.write_text(stripped)
    try:
        cmd = compile_command(obj_path)
        cmd = cmd.replace(f"-o {obj_path}", f"-o {base_obj.relative_to(ROOT)}")
        # Input path is the final argument; replace only there.
        if not cmd.endswith(f" {src}"):
            raise RuntimeError(f"unexpected command shape for {obj_path}: {cmd[-120:]}")
        cmd = cmd[: -len(src)] + str(tmp.relative_to(ROOT))
        subprocess.check_call(cmd, shell=True, cwd=ROOT)
    finally:
        tmp.unlink(missing_ok=True)
    return str(base_obj.relative_to(ROOT))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--skip-build", action="store_true",
                        help="only regenerate objdiff.json; do not compile base objects")
    args = parser.parse_args()

    PROGRESS_DIR.mkdir(parents=True, exist_ok=True)
    units = []
    for obj in linked_objects():
        src = source_for(obj)
        unit = {"name": src, "target_path": obj}
        if src.endswith(".c"):
            if PRAGMA_RE.search((ROOT / src).read_text()):
                if args.skip_build:
                    unit["base_path"] = str((PROGRESS_DIR / (Path(src).name + ".o")).relative_to(ROOT))
                else:
                    unit["base_path"] = build_base_object(src, obj)
            else:
                unit["base_path"] = obj
        # asm-only units: no base_path (nothing decompiled)
        units.append(unit)

    config = {
        "$schema": "https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json",
        "build_target": False,
        "build_base": False,
        "units": units,
    }
    OBJDIFF_JSON.write_text(json.dumps(config, indent=2) + "\n")
    n_base = sum(1 for u in units if u.get("base_path"))
    print(f"objdiff.json: {len(units)} units ({n_base} with base objects)")


if __name__ == "__main__":
    sys.exit(main())
