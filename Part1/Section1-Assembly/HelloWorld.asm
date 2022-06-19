%include "io64.inc"

section .text
global CMAIN
CMAIN:
    ;write your code here
    
    ; 10진수(진법 : decimal 0, 1, 2, 3, 4..., 9)
    ; 10, 11, 12,,, 19
    ; 20, 21, 22,,, 29
    
    ; 2진수(0, 1) : 접두사로 0b를 붙인다.
    ; 0, 1, 00, 01, 10, 11, 000, 001, 010
    
    ;0b10 = 2, 0b100 = 4
    
    ; 16진수(0 1 2 3 4 5 6 7 8 9 A B C D E F)
    ; 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 12 13 14 15
    ; 0x10 = 16, 0xAB = 171
    ; 0b10010101 = 0x95 = 149
    
    PRINT_STRING msg
    
    xor rax, rax
    ret
    
section.data
    msg db 'Hello World', 0x00