        .file   "test1.c"
        .text
        .globl  compute_square
        .type   compute_square, @function
compute_square:
.LFB0:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movl    %edi, -4(%rbp)
        movl    -4(%rbp), %eax
        imull   -4(%rbp), %eax
        cvtsi2sd        %eax, %xmm0
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   compute_square, .-compute_square
        .globl  compute_circle_area
        .type   compute_circle_area, @function
compute_circle_area:
.LFB1:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        subq    $8, %rsp
        movl    %edi, -4(%rbp)
        movl    -4(%rbp), %eax
        movl    %eax, %edi
        call    compute_square
        movapd  %xmm0, %xmm1
        movsd   .LC0(%rip), %xmm0
        mulsd   %xmm1, %xmm0
        leave
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE1:
        .size   compute_circle_area, .-compute_circle_area
        .globl  main
        .type   main, @function
main:
.LFB2:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        subq    $32, %rsp
        movl    %edi, -20(%rbp)
        movq    %rsi, -32(%rbp)
        movl    $10, -4(%rbp)
        movl    -4(%rbp), %eax
        movl    %eax, %edi
        call    compute_circle_area
        movl    $100, %edi
        call    compute_circle_area
        movl    $0, %eax
        leave
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE2:
        .size   main, .-main
        .section        .rodata
        .align 8
.LC0:
        .long   1374389535
        .long   1074339512
        .ident  "GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
        .section        .note.GNU-stack,"",@progbits
