%include "printf64.asm"

%define ARRAY_LEN 7

section .data

input dq 122, 184, 199, 242, 263, 845, 911
output times ARRAY_LEN dq 0

section .text

extern printf
global main
main:
    push rbp
    mov rbp, rsp

    push ARRAY_LEN
    pop rcx

push_element:
    push qword [input + 8 * (rcx - 1)]
    loop push_element

    xor rcx, rcx
    push ARRAY_LEN
    pop rcx

pop_element:
    pop qword [output + 8 * (rcx - 1)]
    loop pop_element   

    
    xor rcx, rcx
    PRINTF64 `Reversed array: \n\x0`

print_array:
    mov rdx, [output + 8 * rcx]
    PRINTF64 `%ld\n\x0`, rdx
    inc rcx
    cmp rcx, ARRAY_LEN
    jb print_array

    xor rax, rax

    mov rsp, rbp
    pop rbp
    ret
