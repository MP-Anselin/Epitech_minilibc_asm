section .text
global rindex

rindex:
	push rbp
	mov rbp, rsp
	xor rcx, rcx

.go_to_the_end:
	cmp byte [rdi + rcx], 0
	jz .search
	inc rcx
	jmp .go_to_the_end

.search:
	cmp BYTE [rdi + rcx], sil
	je .match
	cmp rcx, 0
	je .stop
	dec rcx
	jmp .search

.stop:
	 mov rax, 0
	jmp .end

.match:
	mov rbx, rdi
	add rbx, rcx
	mov rax, rbx

.end:
	mov rsp, rbp
	pop rbp
	ret
