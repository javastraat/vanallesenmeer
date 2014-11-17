avrdude -p m2560 -c usbasp  -Ulock:w:0x3F:m -Uefuse:w:0xFD:m -Uhfuse:w:0xD8:m -Ulfuse:w:0xFF:m -e -v
avrdude -p m2560 -c usbasp  -Uflash:w:hex/stk500boot_v2_mega2560.hex:i 


