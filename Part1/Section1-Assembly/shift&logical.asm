%include "io64.inc"

section .text
global CMAIN
CMAIN:
    ;write your code here
    
    ;shift, logical calculate
    mov eax, 0x12345678
    PRINT_HEX 4, eax
    NEWLINE
    shl eax, 8
    PRINT_HEX 4, eax
    NEWLINE
    shr eax, 8
    PRINT_HEX 4, eax
    NEWLINE
    
    ;not and or xor
    ;ex)결혼정보업체
    ;condition A : 잘생겼나?
    ;condition B : 돈이 많나?
    
    mov al, 0b10010101
    mov bl, 0b01111100
    ;al and bl = 00010100 = 0x14
    ;not bl = 10000011 = 0x83
    and al, bl ;al = al and bl
    PRINT_HEX 1, al
    NEWLINE
    
    not bl
    PRINT_HEX 1, bl
    NEWLINE

    ;2번 XOR하면 값이 원상복귀됨 
    ;암호학에서 유용하다(value xor key = encrypted, encrypted xor key = value)
    NEWLINE    
    PRINT_HEX 1, al
    NEWLINE        
    
    xor al, bl
    PRINT_HEX 1, al
    NEWLINE
    
    xor al, bl
    PRINT_HEX 1, al
    NEWLINE
    
    ;mov al, 0 == xor al, al
    xor al, al
    PRINT_HEX 1, al
    NEWLINE
    
        
    ;rax에 0을 넣어주는건 프로그램이 문제없이 잘 끝났다는 의미임.
    xor rax, rax
    ret