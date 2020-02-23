SECTION .text
global strchr

strchr:
	push rbp
	mov rbp, rsp

.loop:
	cmp byte [rdi], sil
	jz .found
	cmp byte [rdi], 0
	jz .notfound
	inc rdi
	jmp .loop

.notfound:
	mov rax, 0
	jmp .end

.found:
	mov rax, rdi

.end:
	mov rsp, rbp
	pop rbp
	ret
