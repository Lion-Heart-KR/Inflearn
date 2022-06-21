#include <iostream>
//#define WORK

#ifdef WORK

using namespace std;

//주제 : 불리언과 실수

//boolean : True/False
bool isHighLevel = false;
bool isMale = true;
bool isPlayer = true;

//[note]
//사실 bool은 1바이트 정수에 불과함
//왜 정수 시간에 안 다뤘을까?
// -> 가독성 : bool만 봐도 참/거짓을 알 수 있다.
//어셈블리어에서는 1/0으로 나타낼 수 있다.

//실수(부동소수점)
//float double
//3.14
//쩜 앞/뒤를 기준으로 16/16씩 끊으면, 나타낼 수 있는 수의 범위가 제한적
//부동(뜰 부浮, 움직일 동)소수점 : 쩜이 유동적으로 움직인다는 의미임
//3.1415926 = 0.31415926*10 = 314.15926*10^-2
//1) 정규화 = 0.31415926*10
//2) 31415926(유효숫자) 1(지수 : 10의 몇 승?)

//float : 부호(1bit), 지수(8bit), 유효숫자(23bit) = 32bit = 4byte
//double : sign(1bit), exp(11bit), significant number(52bit) = 64bit = 8byte

//ex)-3.375라는 값을 저장
//1) 2진수 변환 = 0b11.011
//2) 정규화 0b1.1011 * 2^1 (맨 앞에 1이 오게 한다)
//1(부호) 1(지수) 1011(유효숫자)
//단 지수는 unsigned byte라고 생각하고, +127 만들어준다 : 1을저장하려면, 128을 저장하라는 의미임.
//예상 결과 : 0b 1 10000000 10110000...

//[note]
//부동소수점은 항상 '근사값'이라는 것을 기억해야함
//정확한 값이 아니라 이진수로 표현할 수 있는 가장 근접한 값이다.
//실수 2개를 == 으로 비교하는 것은 지양

float attackSpeed1 = -3.375f; //4byte
double attackSpeed2 = 1.325; //8byte

int main()
{
	cout << isHighLevel << endl;
	return 0;
}

#endif // WORK