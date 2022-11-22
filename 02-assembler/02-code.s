	.text
	.file	"02-code.c"
	.globl	main                    # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main

# %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	xorl	%eax, %eax
	movl	$0, -4(%rbp)
	movl	$10, -8(%rbp)
	movl	$15, -12(%rbp)
	movl	-8(%rbp), %ecx
	addl	-12(%rbp), %ecx
	movl	%ecx, -16(%rbp)
	popq	%rbp
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.ident	"clang version 10.0.0-4ubuntu1 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
