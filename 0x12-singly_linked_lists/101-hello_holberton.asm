;*********
; This is a program that prints Hello, Holberton using C function __printf__
; 64-bit , compiled using nasm and gcc:
; nasm -f elf64 101-hello_holberton.asm && gcc -no-pie
; -std=gnu89 101-hello_holberton.o -o hello
;*********
section .text
	default rel
	extern printf
	global main
main:
	push rbp
	mov rdi, fmt
	mov rsi, message
	mov rax, 0

	call printf

	pop rbp

	mov rax, 0
	ret

section .data
	message: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0
