#include <stdio.h>

section .data
	hello_format db "Hello, Holberton",10,0  ; Define the format string with a new line character

section .text
	global _start

_start:
	; Prepare arguments for the printf function
	mov     rdi, hello_format      ; Format string
	xor     rax, rax              ; Clear RAX register (no SIMD support)
    
	; Call the printf function
	call    printf

	; Exit the program
	mov     rax, 60               ; syscall: exit
	xor     rdi, rdi              ; status: 0
	syscall

section .bss
	resb    1                       ; Reserve 1 byte for NULL terminator
