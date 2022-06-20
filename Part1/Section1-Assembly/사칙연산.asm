%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    
    ;input으로 10진수를 입력받기
    GET_DEC 1, al
    GET_DEC 1, num
    
    ;PRINT_DEC 1, al
;    NEWLINE
;    PRINT_DEC 1, num
    
    ;plus
    ;add a, b (a=a+b)
    ;a는 레지스터 or memory
    ;b는 레지스터 or memory or 상수
    ;a, b 모두 메모리는 X
    
    ;subtract
    ;sub a, b(a=a-b)
    
    ;레지스터+상수
    add al,1
    PRINT_DEC 1, al
    NEWLINE
    
    ;num의 주소가 rax에 저장된다. add때도 마찬가지다.
    ;mov rax, num
    
    ;레지스터+메모리
    add al, [num]
    PRINT_DEC 1, al
    NEWLINE
    
    ;레지스터+레지스터
    mov bl, 3
    add al, bl
    PRINT_DEC 1, al
    NEWLINE
    
    ;메모리+상수 : 상수의 바이트 크기를 지정해줘야한다.
    add [num], byte 1
    PRINT_DEC 1, [num]
    NEWLINE
    
    ;메모리+레지스터
    add [num], al
    PRINT_DEC 1, [num]
    NEWLINE
    
    
    ;곱하기 연산
    ;mul reg
    ;-mul bl => al*bl
    ;--연산결과를 ax에 저장함.
    ;--약속된 레지스터를 사용하게 됨.
    ;-mul bx => ax*bx
    ;--연산 결과는 dx(상위 16bit), ax(하위 16bit)에 저장
    ;-mul ebx => eax*ebx
    
    ;ex)5*8=?
    mov ax, 0
    mov al, 5
    mov bl, 8
    mul bl
    PRINT_DEC 2, ax
    NEWLINE
    
    ;나누기 연산
    ;div reg
    ;-div bl => ax/bl
    ;--연산결과는 al(몫), ah(나머지)
    
    ;ex)100/3=?
    mov eax, 100
    mov bl, 3
    div bl
    PRINT_DEC 1, al
    NEWLINE
    ;ah는 print_dec로 출력할 수 없어서 이렇게 처리해주는거임.
    mov al, ah
    PRINT_DEC 1, al
    NEWLINE
    
       
    xor rax, rax
    ret
    
section .bss
    num resb 1
    