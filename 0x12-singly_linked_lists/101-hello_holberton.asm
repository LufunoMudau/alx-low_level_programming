section .data
	hello_fmt db "Hello, Holberton\n",10,0   ; Format string for printf

section .text
	global main
	extern printf

main:
	mov rdi, hello_fmt      ; Load the format string address into rdi
	call printf            ; Call the printf function
	mov rax, 60            ; syscall: exit
	xor rdi, rdi           ; status: 0
	syscall
