SECTION .text
global  strcmp

strcmp:
	push rbp
	mov rbp, rsp
	xor rcx, rcx

.loop:
	mov r8b, byte [rdi + rcx]
	mov r9b, byte [rsi + rcx]
	cmp r8b, r9b
	je .if
	jne .end

.if:
	cmp r8b, 0
	je .end
	inc rcx
	jmp .loop

.end:
	sub r8b, r9b
	movsx eax, r8b
	mov rsp, rbp
	pop rbp
	ret
