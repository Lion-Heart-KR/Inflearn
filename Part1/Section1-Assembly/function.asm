%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    ;함수 = 프로시저 = 서브루틴
    
    ;call PRINT_MSG
    mov eax, 10
    mov ebx, 50
    call MAX
    PRINT_DEC 1, ecx
    NEWLINE
    
    xor rax, rax
    ret
    
;함수임
PRINT_MSG:
    PRINT_STRING msg
    NEWLINE
    ret
    
;ex)두 값 중 더 큰 값을 반환하는 max라는 함수를 만들어보쟝
;2값을 어떻게 넘겨받지? 반환은 어떻게 하징?
;eax와 ebx에 입력값을 넣고, ecx에 반환값을 넣어보자
MAX:
    call PRINT_MSG
    
    cmp eax, ebx
    jg L1
    mov ecx, ebx
    jmp L2
L1:
    mov ecx, eax

L2:
    ret
    
    ;만약에 입력값이 여러개면 오또카징?
    ;인자 개수가 몇 개인지는 어떻게 알지?
    ;eax, ebx를 다른 중요한 값을 저장하는 용도로 사용하고 있으면 어떻게 하지?
    ;[idea1] .data, .bss를 사용하면 오똘까?
    ;-인자의 개수를 알 수 없다는 문제가 여전히 남아있다.
    
    ;다른 메모리 구조가 필요함
    ;- 함수가 유효한 동안에는 그 함수와 관련된 메모리를 유지시켜야 한다.
    ;- 함수가 끝나면 실행한 함수가 사용한 메모리를 신경쓰지 않아도 된다.
    
    ;[idea2] stack memory를 사용하자.
    ;- 매개변수 전달
    ;- 돌아갈 주소 관리하는 용도로 사용함
    
section .data
    msg db  'Hello world!', 0x00