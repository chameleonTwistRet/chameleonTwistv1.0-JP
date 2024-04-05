clean:
	@echo "If you meant to build, use ./configure && ninja"
	@echo "If ninja errors, run ./install.sh"
	rm -rf build

distclean: clean
	rm -rf asm
	rm -rf assets
	rm -f *auto.txt
	rm -f build/chameleontwist.jp.ld

expectedclean:
	rm -rf expected

.DEFAULT_GOAL: all
.PHONY: all clean distclean
