SECTION .text
global memcpy

memcpy:
	push rbp
	mov rbp, rsp
	xor rcx, rcx

.loop:
	cmp rdx, rcx
	je .end
	je .fill_str

.fill_str:
	mov r8b, [rsi + rcx]
	mov [rdi + rcx], r8b
	inc rcx
	jmp .loop

.end:
	mov rax, rdi
	pop rbp
	ret