extern printf
section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

section .text
	global main
main:
	push rbp
	move rdi,fmt
	move rsi,msg
	move rax,0
	call printf

	pop rbp
	mov rax,0
	ret
