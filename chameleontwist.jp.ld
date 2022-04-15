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
        build/src/1000.c.o(.text);
        build/src/1050.c.o(.text);
        build/src/84E0.c.o(.text);
        build/src/298D0.c.o(.text);
        build/src/29DF0.c.o(.text);
        build/src/2C3B0.c.o(.text);
        build/src/30FB0.c.o(.text);
        build/src/5FEB0.c.o(.text);
        build/src/5FF30.c.o(.text);
        build/src/A3D00.c.o(.text);
        build/src/A4300.c.o(.text);
        build/src/B2860.c.o(.text);
        build/src/B39A0.c.o(.text);
        build/src/B4600.c.o(.text);
        build/src/B4B30.c.o(.text);
        build/src/B4F20.c.o(.text);
        build/src/B53D0.c.o(.text);
        build/src/B5440.c.o(.text);
        build/src/B5670.c.o(.text);
        build/src/B5800.c.o(.text);
        build/src/B5910.c.o(.text);
        build/src/B5A20.c.o(.text);
        build/src/B5B60.c.o(.text);
        build/src/B5BC0.c.o(.text);
        build/src/B5E30.c.o(.text);
        build/src/B5ED0.c.o(.text);
        build/src/B5F90.c.o(.text);
        build/src/B6180.c.o(.text);
        build/src/B63E0.c.o(.text);
        build/src/B6460.c.o(.text);
        build/src/B64C0.c.o(.text);
        build/src/B6630.c.o(.text);
        build/src/B66A0.c.o(.text);
        build/src/B6A60.c.o(.text);
        build/src/B6E80.c.o(.text);
        build/src/B6EE0.c.o(.text);
        build/src/B76B0.c.o(.text);
        build/src/B7720.c.o(.text);
        build/src/B7800.c.o(.text);
        build/src/B7950.c.o(.text);
        build/src/B7980.c.o(.text);
        build/src/B7C40.c.o(.text);
        build/src/B7CA0.c.o(.text);
        build/src/B7D20.c.o(.text);
        build/src/B7E40.c.o(.text);
        build/src/B7F10.c.o(.text);
        build/src/B7FC0.c.o(.text);
        build/src/B8000.c.o(.text);
        build/src/B8250.c.o(.text);
        build/src/B95E0.c.o(.text);
        build/src/B9620.c.o(.text);
        build/src/B9D30.c.o(.text);
        build/src/B9D90.c.o(.text);
        build/src/BA5C0.c.o(.text);
        build/src/BA660.c.o(.text);
        build/src/BA680.c.o(.text);
        build/src/BA6E0.c.o(.text);
        build/src/BA740.c.o(.text);
        build/src/BA7D0.c.o(.text);
        build/src/BA830.c.o(.text);
        build/src/BA8A0.c.o(.text);
        build/src/BA910.c.o(.text);
        build/src/BA970.c.o(.text);
        build/src/BA9B0.c.o(.text);
        build/src/BAA80.c.o(.text);
        build/src/BB580.c.o(.text);
        build/src/BB5C0.c.o(.text);
        build/src/BB650.c.o(.text);
        build/src/BB660.c.o(.text);
        build/src/BB820.c.o(.text);
        build/src/BB8C0.c.o(.text);
        build/src/BBBF0.c.o(.text);
        build/src/BBD30.c.o(.text);
        build/src/BBE70.c.o(.text);
        build/src/BBEA0.c.o(.text);
        build/src/BC210.c.o(.text);
        build/src/BC380.c.o(.text);
        build/src/BC8B0.c.o(.text);
        build/src/BCC60.c.o(.text);
        build/src/BCC80.c.o(.text);
        build/src/BCD30.c.o(.text);
        build/src/BD6D0.c.o(.text);
        build/src/BDFE0.c.o(.text);
        build/src/BE020.c.o(.text);
        build/src/BE480.c.o(.text);
        build/src/BE5D0.c.o(.text);
        build/src/BE5E0.c.o(.text);
        build/src/BE940.c.o(.text);
        build/src/BF0F0.c.o(.text);
        build/src/BF300.c.o(.text);
        build/src/BF390.c.o(.text);
        build/src/C00F0.c.o(.text);
        build/src/C1810.c.o(.text);
        build/src/C1B30.c.o(.text);
        build/src/C1B70.c.o(.text);
        build/src/C1C00.c.o(.text);
        build/src/C1C30.c.o(.text);
        build/src/C1CF0.c.o(.text);
        build/src/C1D00.c.o(.text);
        build/src/C3640.c.o(.text);
        build/src/C3A50.c.o(.text);
        build/src/C3BA0.c.o(.text);
        build/src/C3C30.c.o(.text);
        build/src/C3E60.c.o(.text);
        build/src/C3F50.c.o(.text);
        build/src/C3FE0.c.o(.text);
        build/src/C4080.c.o(.text);
        build/src/C41B0.c.o(.text);
        build/src/C4950.c.o(.text);
        build/src/C49F0.c.o(.text);
        build/src/C5690.c.o(.text);
        build/src/C5990.c.o(.text);
        build/src/C65F0.c.o(.text);
        build/src/C6700.c.o(.text);
        build/src/C67D0.c.o(.text);
        build/src/C6FE0.c.o(.text);
        build/src/C7010.c.o(.text);
        build/src/C7110.c.o(.text);
        build/src/C7200.c.o(.text);
        build/src/C7210.c.o(.text);
        build/src/C7270.c.o(.text);
        build/src/C72C0.c.o(.text);
        build/src/C7310.c.o(.text);
        build/src/C73B0.c.o(.text);
        build/src/C7650.c.o(.text);
        build/src/C8110.c.o(.text);
        build/src/C87C0.c.o(.text);
        build/src/C87E0.c.o(.text);
        build/src/C9430.c.o(.text);
        main_TEXT_END = .;
        main_DATA_START = .;
        C95C0_bin = .;
        build/assets/C95C0.bin.o(.data);
        C9F50_bin = .;
        build/assets/C9F50.bin.o(.data);
        build/src/84E0.c.o(.rodata);
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
