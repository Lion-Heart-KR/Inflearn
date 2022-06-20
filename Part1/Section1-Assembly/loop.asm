%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    ; 반복문 : for, while
    ; 특정 조건을 만족할 때까지 반복해서 실행
    
    ; ex)Hello world를 10번 출력하고 싶엉!
    mov rax, 0
    
loop:
    cmp rax, 10
    je exit
    PRINT_DEC 1, rax
    PRINT_STRING msg
    NEWLINE
    add rax, 1
    jmp loop
exit:

    mov ecx, 10

LABEL_LOOP:
    PRINT_STRING msg
    NEWLINE
    dec ecx ;sub ecx, 1과 같은 의미. ecx를 1씩 감소시킴
    cmp ecx, 0
    jne LABEL_LOOP
   
    
    ;ex)1에서 100까지의 합을 구하는 프로그램 
    mov rcx, 100
    xor rbx, rbx
    ;mov rbx, 0
    
while:
    add rbx, rcx
    dec rcx
    cmp rcx, 0
    jne while
    
    PRINT_DEC 2, rbx
    NEWLINE
    
    ;loop[라벨]
    ;-ecx에 반복 횟수
    ;-loop할 때마다 ecx 1감소, 0이면 빠져나감. 아니면 라벨로 이동
    

    mov ecx, 100    
    xor ebx, ebx;
LABEL_LOOP_SUM:
    add ebx, ecx
    loop LABEL_LOOP_SUM
    
    PRINT_DEC 4, ebx

    
    xor rax, rax
    ret
    
section .data:
    ;0x00은 문자의 끝을 알리는 표시
    msg db " Hello World!", 0x00