%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    
    
    ;8bit = 1byte
    ;16bit = 2byte = 1word
    ;32bit = 4byte = 2word = 1dword(double word)
    ;64bit = 8byte = 4word = 2dword = 1qword(quad-word)
    
    ;mov reg1, cst : cst라는 값을 reg1에 써라!
    ;mov reg1, reg2 : reg2의 값을 reg1로 이동
    
    mov eax, 0x1234
    mov rbx, 0x12345678
    ;cl은 1byte크기인데, 더 큰 사이즈의 값을 넣어보면 에러가 발생함
    mov cl, 0xff

    ;ax는 0x1234인 상태인데, 아래의 코드 실행결과 0x1200이 됨.
    ;상위 비트에는 영향을 주지 않음.
    mov al, 0x00
    ;mov rax, rdx;     
    
    ;******메모리 <-> 레지스터*******

    ;a의 주소값을 가져오는 것이다. a안에있는 값을 가져오는 것이 아니다.
    ;mov rax, a
    
    ;a의 변수 안에 있는 값을 넣어주는 방법
    ;mov rax, [a] 
    ;mov al, [a]
    
    ;0x55를 1byte만큼 a라는 변수에 넣어주겠다.
    mov [a], byte 0x55

    ;a는 1byte크기이긴 하지만, 초과한다고 해서 다른 문제가 발생하진 않네
    ;그냥 다음 메모리영역에 작성해버린다.
    mov [a], word 0x6666
    mov [a], cl
        
        
    xor rax, rax
 
    ret 
    
    ;변수의 선언 및 사용
    ;변수는 데이터를 저장하는 바구니당
    ;바구니 사용을 선언하고 사용해야함. (이름과 크기 지정)
    
    ; 메모리에는 구분할 수 있도록 주소(번지수)가 있다.
    ; 

    ;초기화된 데이터
    ;format : 변수이름 크기 초기값
    ;[크기] : db(1byte), dw(2byte), dd(4byte), dq(8byte)
section .data
    
    a db 0x11 ;a에 0x11을 저장
    b dw 0x2222
    c dd 0x33333333
    d dq 0x4444444444444444
    

    ;초기화 되지 않은 데이터
    ;format : 변수이름 크기 개수
    ;크기 resb(1byte), resw(2byte) resd(4byte) resq(8byte)
section .bss
    e resb 10




