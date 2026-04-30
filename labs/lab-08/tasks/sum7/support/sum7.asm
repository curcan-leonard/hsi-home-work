section .text

global sum7

sum7:
    push rbp
    mov rbp, rsp

    xor rax, rax
    
    add rax, rdi
    add rax, rdx
    add rax, rcx
    add rax, r8
    add rax, r9
    add rax, rsi
    add rax, [rbp+16]
    ; TODO: save the used registers and align the stack, if needed

    ; TODO: implement the sum7 function

    ; TODO: restore the used registers and the stack pointer, if altered

    leave
    ret
