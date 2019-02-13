#include"kernel.h"

//function that will return a value of each 16bit pixel of the character that we want to display
static UINT16 VGA_DefaultEntry(unsigned char ch_to_print)
{
	return (UINT16) ch_to_print | (UINT16)WHITE_COLOR << 8;
}

//main function which has been called in boot.s file
void KERNEL_MAIN()
{
	TERMINAL_BUFFER = (UINT16*) VGA_ADDRESS;
	TERMINAL_BUFFER[0] = VGA_DefaultEntry('h');
	TERMINAL_BUFFER[1] = VGA_DefaultEntry('m');
	TERMINAL_BUFFER[2] = VGA_DefaultEntry('m');
}
