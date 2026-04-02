; SPDX-License-Identifier: BSD-3-Clause

%include "printf64.asm"

section .data
    myString: db "Hello, World!", 0
    goodbyeString: db "Goodbye, World!", 0
    N: dq 99                         ; N = 6

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rcx, QWORD [N]              ; rcx will store the value of N
    PRINTF64 `%d\n\x0`, rcx         ; DO NOT REMOVE/MODIFY THIS LINE

    mov rax, 2
    mov r8, 1
    cmp rax, r8
    jg print                        ; TODO1: rax > r8?
    xor rax, rax

    leave
    ret

print:
                                    ; TODO2.2: print "Hello, World!" N times
                                    ; TODO2.1: print "Goodbye, World!"
    xor rax, rax

start:
    PRINTF64 `%s\n\x0`, myString 
    add rax, 1
    cmp rax, rcx 
    jl start
    PRINTF64 `%s\n\x0`, goodbyeString
    leave
    ret
