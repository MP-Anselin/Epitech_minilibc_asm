section .text
global strstr

strstr:
	push rbp
	mov rbp, rsp
	mov rcx, rcx

.loop_find_match:
	mov r8b, byte [rdi]
	mov r9b, byte [rsi]
	cmp r9b, 0
       	je .stop
	cmp r8b, 0
       	je .notfound
	cmp r8b, r9b
       	je .match
	inc rdi
	jmp .loop_find_match

.match:
	mov rcx, rcx

.check_full_match:
	mov r8b, byte [rdi + rcx]
	mov r9b, byte [rsi + rcx]
	cmp r9b, 0
       	je .full_match
	cmp r8b, r9b
	jne .loop_again
	inc rcx
	jmp .check_full_match

.loop_again:
	inc rdi
	jmp .loop_find_match

.notfound:
	mov rax, 0
	jmp .end

.full_match:
	mov rax, rdi
	jmp .end

.stop:
	mov rax, rdi
	jmp .end

.end:
	mov rsp, rbp
	pop rbp
	ret