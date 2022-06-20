%include "io64.inc"

section .text
global CMAIN
CMAIN:
    mov rbp, rsp; for correct debugging
    ;stack memory, stack frame
    
    ;register는 다양한 용도로 사용
    ;- a, b, c, d 범용 레지스터
    ;- 포인터 레지스터(포인터 = 위치를 가리키는 값)
    ;-- ip(instruction pointer) : 다음 수행 명령어의 위치(=program counter)
    ;-- sp(stack pointer) : 현재 스택 top의 위치(일종의 cursor)
    ;-- bp(Base pointer) : 스택 상대주소 계산용
    
    push 1
    push 2
    call MAX
    
    PRINT_DEC 8, rax
    NEWLINE
    ;이렇게까지만 하면, 스택에 1, 2라는 값이 들어있음.
    ; 자연스러운 흐름을 끊어버리는 값이 있다는 뜻임
    ; 그래서 스택을 조작을 했으면, 원상복귀 시켜놓던가, 조작한 이후의 스택 포인터로 이동시켜줘야함.
    ;아래의 코드가 조작한 스택 이후의 위치로 이동시키는 코드임
    add rsp, 16
    
MAX:
    push rbp ;return주소를 기억하는 것
    mov rbp, rsp
    
    ;push한 값을 꺼내온다.
    mov rax, [rbp+16]
    mov rbx, [rbp+24]
    cmp rax, rbx
    jg L1
    mov rax, rbx

L1:
    pop rbp
    ret
    
    xor rax, rax
    ret