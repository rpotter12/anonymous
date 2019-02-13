# set magic number to 0x1BADB002 to identified by bootloader   
.set MAGIC,    0x1BADB002  
  
# set flags to 0  
.set FLAGS,    0

# set checksum
.set CHECKSUM, -(MAGIC + FLAGS)

# set multiboot section
.section .multiboot

# set types for MAGIC, FLAGS etc
.long MAGIC
.long FLAGS
.long CHECKSUM

# stack for our kernel functions
stackBottom:
# say we need 512 stack size
.skip 512

stackTop:
# set sections
.section .text
.global _start
.type _start, @function

# starting point
_start:
        mov $stackTop, %esp
        call KERNEL_MAIN

        #clear interrupts
        cli

# putting system in infinite loop
hltLoop:
        hlt
        jmp hltLoop

.size _start, . - _start
