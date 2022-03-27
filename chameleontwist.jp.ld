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
    .main 0x80025C90 : AT(main_ROM_START) SUBALIGN(16)
    {
        main_TEXT_START = .;
        build/asm/1000.s.o(.text);
        build/asm/84E0.s.o(.text);
        build/asm/298D0.s.o(.text);
        build/asm/29DF0.s.o(.text);
        build/asm/2C3B0.s.o(.text);
        build/asm/30FB0.s.o(.text);
        build/asm/5FEB0.s.o(.text);
        build/asm/A3D00.s.o(.text);
        build/asm/A4300.s.o(.text);
        build/asm/B2860.s.o(.text);
        build/asm/B39A0.s.o(.text);
        build/asm/B4600.s.o(.text);
        build/asm/B4B30.s.o(.text);
        build/asm/B4F20.s.o(.text);
        build/asm/B53D0.s.o(.text);
        build/asm/B5440.s.o(.text);
        build/asm/B5670.s.o(.text);
        build/asm/B5800.s.o(.text);
        build/asm/B5910.s.o(.text);
        build/asm/B5A20.s.o(.text);
        build/asm/B5B60.s.o(.text);
        build/asm/B5BC0.s.o(.text);
        build/asm/B5E30.s.o(.text);
        build/asm/B5ED0.s.o(.text);
        build/asm/B5F90.s.o(.text);
        build/asm/B6180.s.o(.text);
        build/asm/B63E0.s.o(.text);
        build/asm/B6460.s.o(.text);
        build/asm/B64C0.s.o(.text);
        build/asm/B6630.s.o(.text);
        build/asm/B66A0.s.o(.text);
        build/asm/B6A60.s.o(.text);
        build/asm/B6E80.s.o(.text);
        build/asm/B6EE0.s.o(.text);
        build/asm/B76B0.s.o(.text);
        build/asm/B7720.s.o(.text);
        build/asm/B7800.s.o(.text);
        build/asm/B7950.s.o(.text);
        build/asm/B7980.s.o(.text);
        build/asm/B7C40.s.o(.text);
        build/asm/B7CA0.s.o(.text);
        build/asm/B7D20.s.o(.text);
        build/asm/B7E40.s.o(.text);
        build/asm/B7F10.s.o(.text);
        build/asm/B7FC0.s.o(.text);
        build/asm/B8000.s.o(.text);
        build/asm/B8250.s.o(.text);
        build/asm/B95E0.s.o(.text);
        build/asm/B9620.s.o(.text);
        build/asm/B9D30.s.o(.text);
        build/asm/B9D90.s.o(.text);
        build/asm/BA5C0.s.o(.text);
        build/asm/BA660.s.o(.text);
        build/asm/BA680.s.o(.text);
        build/asm/BA6E0.s.o(.text);
        build/asm/BA740.s.o(.text);
        build/asm/BA7D0.s.o(.text);
        build/asm/BA830.s.o(.text);
        build/asm/BA8A0.s.o(.text);
        build/asm/BA910.s.o(.text);
        build/asm/BA970.s.o(.text);
        build/asm/BA9B0.s.o(.text);
        build/asm/BAA80.s.o(.text);
        build/asm/BB580.s.o(.text);
        build/asm/BB5C0.s.o(.text);
        build/asm/BB650.s.o(.text);
        build/asm/BB660.s.o(.text);
        build/asm/BB820.s.o(.text);
        build/asm/BB8C0.s.o(.text);
        build/asm/BBBF0.s.o(.text);
        build/asm/BBD30.s.o(.text);
        build/asm/BBE70.s.o(.text);
        build/asm/BBEA0.s.o(.text);
        build/asm/BC210.s.o(.text);
        build/asm/BC380.s.o(.text);
        build/asm/BC8B0.s.o(.text);
        build/asm/BCC60.s.o(.text);
        build/asm/BCC80.s.o(.text);
        build/asm/BCD30.s.o(.text);
        build/asm/BD6D0.s.o(.text);
        build/asm/BDFE0.s.o(.text);
        build/asm/BE020.s.o(.text);
        build/asm/BE480.s.o(.text);
        build/asm/BE5D0.s.o(.text);
        build/asm/BE5E0.s.o(.text);
        build/asm/BE940.s.o(.text);
        build/asm/BF0F0.s.o(.text);
        build/asm/BF300.s.o(.text);
        build/asm/BF390.s.o(.text);
        build/asm/C00F0.s.o(.text);
        build/asm/C1810.s.o(.text);
        build/asm/C1B30.s.o(.text);
        build/asm/C1B70.s.o(.text);
        build/asm/C1C00.s.o(.text);
        build/asm/C1C30.s.o(.text);
        build/asm/C1CF0.s.o(.text);
        build/asm/C1D00.s.o(.text);
        build/asm/C3640.s.o(.text);
        build/asm/C3A50.s.o(.text);
        build/asm/C3BA0.s.o(.text);
        build/asm/C3C30.s.o(.text);
        build/asm/C3E60.s.o(.text);
        build/asm/C3F50.s.o(.text);
        build/asm/C3FE0.s.o(.text);
        build/asm/C4080.s.o(.text);
        build/asm/C41B0.s.o(.text);
        build/asm/C4950.s.o(.text);
        build/asm/C49F0.s.o(.text);
        build/asm/C5690.s.o(.text);
        build/asm/C5990.s.o(.text);
        build/asm/C65F0.s.o(.text);
        build/asm/C6700.s.o(.text);
        build/asm/C67D0.s.o(.text);
        build/asm/C6FE0.s.o(.text);
        build/asm/C7010.s.o(.text);
        build/asm/C7110.s.o(.text);
        build/asm/C7200.s.o(.text);
        build/asm/C7210.s.o(.text);
        build/asm/C7270.s.o(.text);
        build/asm/C72C0.s.o(.text);
        build/asm/C7310.s.o(.text);
        build/asm/C73B0.s.o(.text);
        build/asm/C7650.s.o(.text);
        build/asm/C8110.s.o(.text);
        build/asm/C87C0.s.o(.text);
        build/asm/C87E0.s.o(.text);
        main_TEXT_END = .;
    }
    main_ROM_END = 0xC9430;
    __romPos = 0xC9430;

    __romPos = 0xC9430;
    . = __romPos;
    C9430_ROM_START = __romPos;
    C9430_VRAM = ADDR(.C9430);
    .C9430 : AT(C9430_ROM_START) SUBALIGN(16)
    {
        C9430_TEXT_END = .;
        C9430_DATA_START = .;
        C9430_bin = .;
        build/assets/C9430.bin.o(.data);
        C9430_DATA_END = .;
    }
    C9430_ROM_END = 0xC00000;
    __romPos = 0xC00000;

    /DISCARD/ :
    {
        *(*);
    }
}
