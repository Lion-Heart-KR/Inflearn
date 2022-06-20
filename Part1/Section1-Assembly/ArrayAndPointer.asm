%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging;        mov rbp, rsp; for correct debugging
    ;write your code here
    
    ;배열과 주소
    
    ;배열 : 동일한 자료형의 데이터들의 묶음
    ;-배열을 구성하는 각 값을 배열의 요소(element)
    ;-배열의 위치를 가리키는 숫자 : index
    
    mov rax, a
    mov ecx, 6
    ;연습문제 : a배열의 모든 데이터 출력해보기
LABEL_LOOP:
    ;PRINT_HEX 1, [rax]
    ;NEWLINE
    add rax, 1
    dec ecx
    cmp ecx, 0
    jne LABEL_LOOP
    
    ;연습문제 : b배열의 모든 데이터 출력해보기
    xor ecx, ecx
LABEL_LOOP_B
    PRINT_HEX 2, [b+ecx*2]
    NEWLINE
    inc ecx
    cmp ecx, 5
    jne LABEL_LOOP_B
    
    
    xor rax, rax
    ret
    
;db : 1byte, dw : 2byte, dd : 4byte, dq : 8byte
section .data
    ;이런것도 배열이다. db사이즈의 데이터를 6개 쭉 나열함.
    a db 1,2,3,4,5,6 ;6*1 = 6byt
    
    
    ;초기값을 1로 갖는 2byte(word)크기의 원소를 5개 갖는 배열 b를 만들었다.
    ;little endian 방식으로 표현해서 각 원소는 0x0001인데, 0x01, 0x00으로 표현된다.
    b times 5 dw 1 ; 5*2=10bytes
    
;초기화 되지 않은 데이터
;[변수이름] [크기] [개수]
;[크기] resb(1), resw(2), resd(4), resq(8)
section .bss
    num resb 10