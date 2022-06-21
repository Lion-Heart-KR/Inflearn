#include <iostream>

#ifdef WORK
using namespace std;

//데이터 연산

//데이터를 가공하는 방법에 대해서 아라보자

//a라는 변수에 1을 넣는다.
int a = 1;
int b = 2; 

int main() 
{
#pragma region 산술 연산
	//산술 연산자 : 사칙연산, 대입연산
	
	//*******************대입 연산*******************

	//a에 b를 대입하고, b를 반환하라.
	a = b;

	//ex)
	a = (b = 3);
	//1. b에 3을 대입한다.
	//2. 3을 반환한다.
	//3. a에 반환값 3을 대입한다.
	//4. 3을 반환한다.

	//*******************사칙 연산*******************
	//왜 필요한가?
	// - 데미지 계산
	// - 플레이어 체력계산
	// - 루프문에서 카운터의 증감

	a = b + 3; // 덧셈 add
	a = b - 3; //뺄셈 sub
	a = b * 3; //곱셈 mul
	a = b / 3; //나눗셈 div
	a = b % 3; //나머지 mod

	//축약식 : the two expressions below are equivalent
	a = a + 3;
	a += 3;

	//증감 연산자
	a = a + 1;
	a++;
	++a;

	b = a++;
	//1. b = a;
	//2. a++;

	b = ++a;
	//1. a++;
	//2. b=a;

	//연산식의 우선순위
	b = (a + 1) * 3;

#pragma endregion
}
#endif