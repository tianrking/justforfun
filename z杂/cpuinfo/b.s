	.file	"b.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZSt4setwi,"axG",@progbits,_ZSt4setwi,comdat
	.weak	_ZSt4setwi
	.type	_ZSt4setwi, @function
_ZSt4setwi:
.LFB1041:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1041:
	.size	_ZSt4setwi, .-_ZSt4setwi
	.section	.rodata
.LC0:
	.string	"/proc/meminfo"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1108:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1108
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$568, %rsp
	.cfi_offset 3, -24
	movl	%edi, -564(%rbp)
	movq	%rsi, -576(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-576(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi
	movl	%eax, -556(%rbp)
	leaq	-544(%rbp), %rax
	movl	$8, %edx
	movl	$.LC0, %esi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
.LEHE0:
	movl	-556(%rbp), %eax
	movslq	%eax, %rdx
	movabsq	$182395784908505088, %rax
	cmpq	%rax, %rdx
	ja	.L4
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	jmp	.L5
.L4:
	movq	$-1, %rax
.L5:
	movq	%rax, %rdi
.LEHB1:
	call	_Znam
	movq	%rax, -552(%rbp)
	movl	$0, -560(%rbp)
.L7:
	movl	-560(%rbp), %eax
	cmpl	-556(%rbp), %eax
	jge	.L6
	movl	-560(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movq	-552(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	leaq	-544(%rbp), %rax
	movl	$50, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZNSi7getlineEPcl
	addl	$1, -560(%rbp)
	jmp	.L7
.L6:
	movl	$0, -560(%rbp)
.L9:
	movl	-560(%rbp), %eax
	cmpl	-556(%rbp), %eax
	jge	.L8
	movl	-560(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movq	-552(%rbp), %rax
	leaq	(%rdx,%rax), %rbx
	movl	$60, %edi
	call	_ZSt4setwi
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE1:
	addl	$1, -560(%rbp)
	jmp	.L9
.L8:
	cmpq	$0, -552(%rbp)
	je	.L10
	movq	-552(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdaPv
.L10:
	movl	$0, %ebx
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
.LEHE2:
	movl	%ebx, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L13
	jmp	.L15
.L14:
	movq	%rax, %rbx
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume
.LEHE3:
.L15:
	call	__stack_chk_fail
.L13:
	addq	$568, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1108:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1108:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1108-.LLSDACSB1108
.LLSDACSB1108:
	.uleb128 .LEHB0-.LFB1108
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1108
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L14-.LFB1108
	.uleb128 0
	.uleb128 .LEHB2-.LFB1108
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB1108
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE1108:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1149:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L18
	cmpl	$65535, -8(%rbp)
	jne	.L18
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L18:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1149:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1150:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1150:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
