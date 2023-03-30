clean:
	@echo "If you meant to build, use ./configure && ninja"
	rm -rf build

distclean: clean
	rm -rf asm
	rm -rf assets
	rm -rf expected
	rm -f *auto.txt
	rm -f chameleontwist.jp.ld

.DEFAULT_GOAL: all
.PHONY: all clean distclean
