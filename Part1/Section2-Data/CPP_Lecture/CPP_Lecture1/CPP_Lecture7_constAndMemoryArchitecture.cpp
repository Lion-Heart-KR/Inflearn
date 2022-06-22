#include <iostream>
using namespace std;
#ifdef WORK

//한 번 정해지면 절대 바뀌지 않을 값들
//constant의 약자인 const를 붙인다. (상수를 선언함)
//const로 선언시 초기값을 반드시 지정해줘야 한다.
// const로 선언시 값을 변경할 수 없다.
//상수는 대문자로 더러 쓴다


//전역변수 : 데이터 영역
// .data(초기값 있는 경우)
int a = 2;
// .bss(초기값이 없는 경우)
int b;

// .rodata(읽기전용 데이터)
const char* msg = "Hello World!";

unsigned char flag;

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3;
const int FEAR = 4;

int main() 
{
	//[stack region]
	int c = 3;

	flag = (1 << STUN);
	flag = (1 << POLYMORPH);
}

#endif