
min:
	mov 8(%rsi), %rax
	mov $0, %r12

.min.loop:
	cmp $16, %r12
	jge .min.loop.end


	cmp %rax, (%rsi, %r12, 8)
	jl .min.new
.min.new.return:

	inc %r12
	jmp .min.loop

.min.new:
	mov (%rsi, %r12, 8), %rax
	jmp .min.new.return

.min.loop.end:
	ret








max:
	mov 8(%rsi), %rax
	mov $0, %r12

.max.loop:
	cmp $16, %r12
	jge .max.loop.end


	cmp %rax, (%rsi, %r12, 8)
	jg .max.new
.max.new.return:

	inc %r12
	jmp .max.loop

.max.new:
	mov (%rsi, %r12, 8), %rax
	jmp .max.new.return

.max.loop.end:
	ret

