%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    ;write your code here
    PRINT_STRING msg
    
    xor rax, rax
    ret
    
section .data
    ;ASCII CODE값이 msg에 저장된다.
    msg db 0x48,0x65,0x6c,0x6c,0x6f,0x20,0x57,0x6f,0x72,0x6c,0x64,0x0
    
    a db 0x11,0x11, 0x11, 0x12
    
    b dd 0x12345678