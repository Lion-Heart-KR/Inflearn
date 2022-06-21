#include <iostream>
//#define WORK

#ifdef WORK
using namespace std;

//가장 빈번하게 사용되는 정수에 대해서 아라보자

//0이 아닌 초기화 값이 있으면, .data영역에 저장됨
int hp = 100;

char a; //1byte
short b; //2byte
int c; //4byte
__int64 d; //8byte(== long long)

//이론적으로 양수만 존재할 수 있는 데이터 : unsigned로 해야할까?
//무조건 unsigned를 사용하는지 의견이 갈린다.
// - 레벨이 음수라는 것은 말이 안된다 -> 그럼 차라리 프로그램을 크래시내서 버그를 찾는게 낫다(음수를 가능하게 해서)
// - unsigned / signed 사이의 변환을 신경써야한다.
//개인의 취향이다.
//unsigned char a; //1byte
//unsigned short b; //2byte
//unsigned int c; //4byte
//unsigned __int64 d; //8byte(== long long)

//콘솔게임, 모바일게임의 경우 메모리가 부족한 경우가 많음.
//온라인게임 -> 체력을 4바이트로 설정 -> 1만명 동시접속 -> 4만 바이트를 매 초마다 전송

//초기값이 0이거나, 초기값이 없는 변수라면, .bss영역에 저장됨

int main()
{
	//b가 만약 hp라면 -32768이 되어버리고, 캐릭터가 사망해버리는 버그가 발생한다.
	//정수 오버플로우
	b = 32767;
	b++;
	cout << b << endl;
	cout << "체력이" << hp << "남았습니다" << endl;

}

#endif
