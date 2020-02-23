section .text
global strlen

strlen:
	push rbp
	mov rbp, rsp
	xor eax, eax

.loop:
	cmp BYTE [rdi], 0
	je .end
	inc eax
	inc rdi
	jmp .loop

.end:
	pop rbp
	ret
