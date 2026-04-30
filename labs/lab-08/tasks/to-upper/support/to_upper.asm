section .text

global to_upper

to_upper:
    push rbp
    mov rbp, rsp

    sub rsp, 8              
    push rbx                

    mov rax, rdi
check_one_byte:
    mov bl, [rax]
    test bl, bl
    je out
    
    xor bl, 32
    mov [rax], bl
    
    inc rax
    jmp check_one_byte

out:
    pop rbx
    add rsp, 8

    leave
    ret
