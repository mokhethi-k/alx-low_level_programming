	section .data
	hello db 'Hello, Holberton', 0 ;
	format db '%s', 0Ah, 0	       ;

	section .text
	global main
	extern printf

main:
	push rbp		;
	mov rbp, rsp		;

	mov rdi, format		;
	mov rsi, hello		;
	xor eax, 0		;
	call printf		;
	mov rsp, rbp		;
	pop rbp			;
	mov eax, 0		;
	ret			;
