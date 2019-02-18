# anonymous
os

## Requirements
- GNU/Linux
- Assembler - I am using GNU Assembler(gas) to instruct the bootloader for loading the starting point of our kernel.
- GCC - GNU Compiler Collection a cross compiler. A newer version of GCC. I am using 7.2.0 version of GCC. The most important thing.
If you use old version you may face multiboot header not found error.
- Xorriso - A package that creates, loads, manipulates ISO 9660 filesystem images.(man xorriso)
- grub-mkrescue - Make a GRUB rescue image, this package internally calls the xorriso functionality to build an iso image.
- QEMU - Quick EMUlator to boot our kernel in virtual machine without rebooting the main system.