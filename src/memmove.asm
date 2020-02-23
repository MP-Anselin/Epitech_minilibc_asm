global memmove
section .text

memmove:
	push rbp
	mov rbp, rsp
	xor rcx, rcx

.loop:
	mov al, [rsi + rcx]
	mov [rdi + rcx], al
	inc rcx
	cmp rdx, rcx
	je .end
	jmp .loop

.end:
	mov rax, rdi
	mov rsp, rbp
	pop rbp
	ret
