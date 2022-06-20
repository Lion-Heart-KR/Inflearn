%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    ;branch(if)
    ;특정 조건에 따라 코드 흐름을 제어함.
    ;ex)스킬사용버튼을 눌렀는가? yes -> 스킬 사용
    ;ex)제한 시간 내에(조건1) 던전 입장 수락 버튼을 눌렀는가(조건2)?yes -> 입장, no->던전 취소
    ;조건 -> 흐름
    ;format : CMP dst, src (dst가 기준이 됨)
    ;비교를 한 결과물은 Flag Register에 저장됨.(상태저장 레지스터)
    
    ;JMP [label] 시리즈
    ;jmp : 무조건 점프
    ;je : jump equals
    ;jne : jump not equals
    ;jg : jump greater
    ;jge : jump greater equals
    ;jl : jump less
    ;jle : jump less equals
    
    ;두 숫자가 같으면 1, 아니면 0 출력
    mov rax, 10
    mov rbx, 10
    
    cmp rax, rbx
    
    je LABEL_EQUAL
    ;je에 의해 점프하지 않으면 같지 않다.
    mov rcx, 0
    jmp EXIT
    
LABEL_EQUAL:
    mov rcx, 1
    
EXIT:     
    ;PRINT_HEX 1, rcx
    NEWLINE
    
    ;ex)1~100사이의 정수를 입력받아 짝수면 1, 홀수면 0을 출력하는 프로그램
    GET_DEC 1, ax
    mov bl, 2
    div bl
    
    cmp ah, 0
    je EVEN
    
    mov rcx, 0
    jmp ODD
    
EVEN:
    mov rcx, 1
ODD:
    PRINT_HEX 1, rcx
    NEWLINE
    
    
    xor rax, rax
    ret