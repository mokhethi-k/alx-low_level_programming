	section .data
	hello db 'Hello, Holberton', 0Ah ;
	format db '%s'			  ;

	section .text
	global main
	extern printf

main:
	push rbp		;
	mov rbp, rsp		;

	mov rdi, format		;
	mov rsi, hello		;
	xor eax, eax		;
	call printf		;
	mov rsp, rbp		;
	pop rbp			;
	mov eax, 0		;
	ret			;
