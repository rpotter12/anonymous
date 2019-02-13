#ifndef KERNEL_H
#define KERNEL_H

//lets define a VGA address
#define VGA_ADDRESS 0xB8000

//default colour to display char
#define WHITE_COLOR 15


//lets define an 16 bit unsigned type
typedef unsigned short UINT16;

//buffer that points to a VGA
UINT16 *TERMINAL_BUFFER;

#endif
