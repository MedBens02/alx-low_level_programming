section		.data
	msg db 'Hello, Holberton', 10

section		.text
	global main
	extern printf

main:
	mov		rdi, msg
	call	printf
