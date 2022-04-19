SECTIONS
{
    __romPos = 0x0;
    . = __romPos;
    header_ROM_START = __romPos;
    header_VRAM = ADDR(.header);
    .header : AT(header_ROM_START) SUBALIGN(16)
    {
        header_TEXT_END = .;
        header_DATA_START = .;
        header_s = .;
        build/asm/header.s.o(.data);
        header_DATA_END = .;
    }
    header_ROM_END = 0x40;
    __romPos = 0x40;

    __romPos = 0x40;
    . = __romPos;
    boot_ROM_START = __romPos;
    boot_VRAM = ADDR(.boot);
    .boot : AT(boot_ROM_START) SUBALIGN(16)
    {
        boot_TEXT_END = .;
        boot_DATA_START = .;
        boot_bin = .;
        build/assets/boot.bin.o(.data);
        boot_DATA_END = .;
    }
    boot_ROM_END = 0x1000;
    __romPos = 0x1000;

    __romPos = 0x1000;
    . = __romPos;
    main_ROM_START = __romPos;
    main_VRAM = ADDR(.main);
    .main 0x80025C00 : AT(main_ROM_START) SUBALIGN(16)
    {
        main_TEXT_START = .;
        build/src/code/1000.c.o(.text);
        build/src/code/1050.c.o(.text);
        build/src/code/84E0.c.o(.text);
        build/src/code/298D0.c.o(.text);
        build/src/code/29DF0.c.o(.text);
        build/src/code/2C3B0.c.o(.text);
        build/src/code/30FB0.c.o(.text);
        build/src/code/5FEB0.c.o(.text);
        build/src/code/5FF30.c.o(.text);
        build/src/code/A3D00.c.o(.text);
        build/src/code/A4300.c.o(.text);
        build/src/code/B2860.c.o(.text);
        build/src/code/B39A0.c.o(.text);
        build/src/code/B4600.c.o(.text);
        build/src/code/B4B30.c.o(.text);
        build/src/os/createthread.c.o(.text);
        build/src/os/startthread.c.o(.text);
        build/src/io/vimgr.c.o(.text);
        build/src/io/visetmode.c.o(.text);
        build/src/io/viblack.c.o(.text);
        build/src/io/visetspecial.c.o(.text);
        build/src/io/pimgr.c.o(.text);
        build/src/os/setthreadpri.c.o(.text);
        build/src/os/createmesgqueue.c.o(.text);
        build/src/io/pidma.c.o(.text);
        build/src/os/recvmesg.c.o(.text);
        build/src/io/pirawread.c.o(.text);
        build/src/gu/mtxutil.c.o(.text);
        build/src/gu/rotateRPY.c.o(.text);
        build/src/gu/mtxcatl.c.o(.text);
        build/src/gu/align.c.o(.text);
        build/src/gu/sinf.c.o(.text);
        build/src/gu/translate.c.o(.text);
        build/src/os/writebackdcache.c.o(.text);
        build/src/io/viswapbuf.c.o(.text);
        build/src/gu/sqrtf.c.o(.text);
        build/src/gu/cosf.c.o(.text);
        build/src/os/seteventmesg.c.o(.text);
        build/src/io/controller.c.o(.text);
        build/src/code/B6A60.c.o(.text);
        build/src/code/B6E80.c.o(.text);
        build/src/code/B6EE0.c.o(.text);
        build/src/gu/perspective.c.o(.text);
        build/src/io/visetevent.c.o(.text);
        build/src/os/settimer.c.o(.text);
        build/src/os/sendmesg.c.o(.text);
        build/src/os/writebackdcacheall.c.o(.text);
        build/src/io/sptask.c.o(.text);
        build/src/io/visetyscale.c.o(.text);
        build/src/os/virtualtophysical.c.o(.text);
        build/src/audio/sl.c.o(.text);
        build/src/audio/cents2ratio.c.o(.text);
        build/src/os/invalicache.c.o(.text);
        build/src/os/invaldcache.c.o(.text);
        build/src/audio/heapinit.c.o(.text);
        build/src/audio/bnkf.c.o(.text);
        build/src/io/aisetfreq.c.o(.text);
        build/src/audio/csplayer.c.o(.text);
        build/src/audio/seqpsetbank.c.o(.text);
        build/src/audio/sndpplayer.c.o(.text);
        build/src/audio/seqpsetpan.c.o(.text);
        build/src/audio/synthesizer.c.o(.text);
        build/src/io/sptaskyield.c.o(.text);
        build/src/io/sptaskyielded.c.o(.text);
        build/src/io/aisetnextbuf.c.o(.text);
        build/src/audio/sndpallocate.c.o(.text);
        build/src/audio/sndpsetsound.c.o(.text);
        build/src/audio/sndpsetpitch.c.o(.text);
        build/src/audio/sndpsetfxmix.c.o(.text);
        build/src/audio/sndpsetpriority.c.o(.text);
        build/src/audio/sndpsetvol.c.o(.text);
        build/src/audio/sndpsetpan.c.o(.text);
        build/src/audio/sndpplay.c.o(.text);
        build/src/audio/sndpgetstate.c.o(.text);
        build/src/audio/sndpstop.c.o(.text);
        build/src/audio/sndpdeallocate.c.o(.text);
        build/src/audio/seqpgetstate.c.o(.text);
        build/src/audio/seqpsetvol.c.o(.text);
        build/src/audio/seqpstop.c.o(.text);
        build/src/audio/seqpplay.c.o(.text);
        build/src/audio/seqpsettempo.c.o(.text);
        build/src/audio/cspgettempo.c.o(.text);
        build/src/os/gettime.c.o(.text);
        build/src/os/getcount.c.o(.text);
        build/src/gu/getfrustum.c.o(.text);
        build/src/libc/bzero.c.o(.text);
        build/src/code/BB8C0.c.o(.text);
        build/src/io/conteepprobe.c.o(.text);
        build/src/io/conteeplongwrite.c.o(.text);
        build/src/code/BBD30.c.o(.text);
        build/src/code/BBE70.c.o(.text);
        build/src/code/BBEA0.c.o(.text);
        build/src/code/BC210.c.o(.text);
        build/src/code/BC380.c.o(.text);
        build/src/code/BC8B0.c.o(.text);
        build/src/code/BCC60.c.o(.text);
        build/src/code/BCC80.c.o(.text);
        build/src/code/BCD30.c.o(.text);
        build/src/code/BD6D0.c.o(.text);
        build/src/code/BDFE0.c.o(.text);
        build/src/code/BE020.c.o(.text);
        build/src/code/BE480.c.o(.text);
        build/src/io/vigetcurrcontext.c.o(.text);
        build/src/code/BE5E0.c.o(.text);
        build/src/code/BE940.c.o(.text);
        build/src/code/BF0F0.c.o(.text);
        build/src/code/BF300.c.o(.text);
        build/src/code/BF390.c.o(.text);
        build/src/code/C00F0.c.o(.text);
        build/src/code/C1810.c.o(.text);
        build/src/code/C1B30.c.o(.text);
        build/src/code/C1B70.c.o(.text);
        build/src/code/C1C00.c.o(.text);
        build/src/code/C1C30.c.o(.text);
        build/src/code/C1CF0.c.o(.text);
        build/src/code/C1D00.c.o(.text);
        build/src/code/C3640.c.o(.text);
        build/src/code/C3A50.c.o(.text);
        build/src/code/C3BA0.c.o(.text);
        build/src/code/C3C30.c.o(.text);
        build/src/code/C3E60.c.o(.text);
        build/src/code/C3F50.c.o(.text);
        build/src/code/C3FE0.c.o(.text);
        build/src/code/C4080.c.o(.text);
        build/src/code/C41B0.c.o(.text);
        build/src/code/C4950.c.o(.text);
        build/src/code/C49F0.c.o(.text);
        build/src/code/C5690.c.o(.text);
        build/src/code/C5990.c.o(.text);
        build/src/code/C65F0.c.o(.text);
        build/src/code/C6700.c.o(.text);
        build/src/code/C67D0.c.o(.text);
        build/src/code/C6FE0.c.o(.text);
        build/src/code/C7010.c.o(.text);
        build/src/code/C7110.c.o(.text);
        build/src/code/C7200.c.o(.text);
        build/src/code/C7210.c.o(.text);
        build/src/code/C7270.c.o(.text);
        build/src/code/C72C0.c.o(.text);
        build/src/code/C7310.c.o(.text);
        build/src/code/C73B0.c.o(.text);
        build/src/code/C7650.c.o(.text);
        build/src/code/C8110.c.o(.text);
        build/src/code/C87C0.c.o(.text);
        build/src/code/C87E0.c.o(.text);
        build/src/code/C9430.c.o(.text);
        main_TEXT_END = .;
        main_DATA_START = .;
        C95C0_bin = .;
        build/assets/C95C0.bin.o(.data);
        C9F50_bin = .;
        build/assets/C9F50.bin.o(.data);
        build/src/code/84E0.c.o(.rodata);
        main_DATA_END = .;
    }
    main_ROM_END = 0xE6680;
    __romPos = 0xE6680;

    __romPos = 0xE6680;
    . = __romPos;
    E6680_ROM_START = __romPos;
    E6680_VRAM = ADDR(.E6680);
    .E6680 : AT(E6680_ROM_START) SUBALIGN(16)
    {
        E6680_TEXT_END = .;
        E6680_DATA_START = .;
        E6680_bin = .;
        build/assets/E6680.bin.o(.data);
        E6680_DATA_END = .;
    }
    E6680_ROM_END = 0xC00000;
    __romPos = 0xC00000;

    /DISCARD/ :
    {
        *(*);
    }
}
