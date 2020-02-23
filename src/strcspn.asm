section .text
global strcspn

strcspn:
	push rbp
	mov rbp, rsp
	xor rcx, rcx
	cmp rsi, 0
	jz .end

.loop_first_str:
	mov r8b, byte [rdi + rcx]
	cmp r8b, 0
	je .end
	xor rbx, rbx
	jmp .loop_second_str

.again:
	inc rcx
	jmp .loop_first_str

.loop_second_str:
	mov r9b, byte [rsi + rbx]
	cmp r9b, r8b
	je .end
	cmp r9b, 0
       	je .again
	inc rbx
	jmp .loop_second_str

.end:
	mov rax, rcx
	mov rsp, rbp
	pop rbp
	ret