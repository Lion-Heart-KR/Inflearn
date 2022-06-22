#include <iostream>
#include <bitset>
using namespace std;

//유의사항, Tips

// 1)변수의 유효범위
// 전역변수 : 언제 어디서든 사용가능
// 지역변수 : 변수가 선언된 함수 안에서만 사용 가능
// 스택 : { } 중괄호의 범위가 변수의 생존범위, 중복선언(재정의) 불가

// 2)연산자 우선순위

// 3)타입 변환

// 4)사칙연산

int main() 
{
#pragma region 변수의유효범위
	int hp = 100;
	cout << hp << endl;
#pragma endregion

#pragma region 연산자 우선순위
	//짝수계산
	//%와 == 중 뭐가 먼저인지 모른다 -> 괄호를 사용하자.
	bool isEven(hp % 2 == 0);
#pragma endregion

#pragma region 타입변환
	int num = -77777;
	cout << num << endl;

	//short는 2byte라서, 77777을 담지 못한다. 따라서 하위 2byte만 저장된다.
	short num2 = (short)num;
	cout << num2 << endl;

	float num3 = (float)num;
	cout << num3 << endl;

	//비트가 바뀌지는 않는다. 32bit에서 최상위 비트를 부호비트로 사용하지 않을 뿐이다. 분석하는 방법이 달라져서 값이 달라지는거다.
	unsigned int num4 = (unsigned int)num;
	cout << bitset<32>(num4) << endl;
#pragma endregion

#pragma region 사칙연산
	//곱셈시 오버플로우 주의
	//나눗셈시 
	// - divide by zero주의
	// - 정수 / 정수 => 정수. 따라서 소수점이 버려진다.
	// 둘 중 하나를 실수로 만들어주면, 결과도 실수가 반환된다.

#pragma endregion
}