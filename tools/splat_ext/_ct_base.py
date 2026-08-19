"""
Shared base class and helpers for Chameleon Twist splat extensions.

Subclasses override:
  - SUFFIX: filename suffix used in out_path (e.g. "mtx", "animH")
  - disassemble_data(self, rom_bytes): return the .inc.c text

If a segment needs a dynamic suffix (e.g. collision: colV/colT/colS/colH),
override out_path directly.
"""

from functools import lru_cache
from pathlib import Path

from splat.segtypes.common.codesubsegment import CommonSegCodeSubsegment
from splat.util import options


class CTSegBase(CommonSegCodeSubsegment):
    SUFFIX = None  # override in subclass

    def __init__(self, rom_start, rom_end, type, name, vram_start, args, yaml):
        super().__init__(
            rom_start, rom_end, type, name, vram_start, args=args, yaml=yaml
        )
        self.file_text = None
        self.data_only = isinstance(yaml, dict) and yaml.get("data_only", False)

    def get_linker_section(self):
        return []

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.{self.SUFFIX}.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def split(self, rom_bytes: bytes):
        if self.file_text and self.out_path():
            self.out_path().parent.mkdir(parents=True, exist_ok=True)
            with open(self.out_path(), "w", newline="\n") as f:
                f.write(self.file_text)


@lru_cache(maxsize=1)
def _enums_lines():
    with open("include/enums.h", "r", encoding="UTF-8") as f:
        return f.readlines()


@lru_cache(maxsize=128)
def lookup_enum(group_name: str, value: int):
    """Find the identifier in an enum block named `group_name` whose value
    equals `value`. Returns the identifier string, or None if not found.

    Mirrors the ad-hoc parser previously open-coded in collectable.py /
    roomActor.py — same matching rules, but the enums file is read once
    and the result is memoised.
    """
    lines = _enums_lines()
    reading = False
    cursor = 0
    for line in lines:
        if not reading:
            if line.find(group_name) != -1:
                reading = True
            continue
        if line.find("=") != -1:
            try:
                cursor = int(
                    line.split("=")[-1].split("//")[0].replace(",", "").strip()
                )
            except ValueError:
                pass
        if not line.startswith("\t"):
            continue
        if cursor == value:
            ident = line.split(",")[0].split("\t")[-1].split("//")[0].strip()
            if ident.find("=") != -1:
                ident = ident.split("=")[0].split("//")[0].strip()
            return ident
        cursor += 1
    return None
