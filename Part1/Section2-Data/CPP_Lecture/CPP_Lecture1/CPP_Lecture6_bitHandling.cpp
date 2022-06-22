#include <iostream>
#include <bitset>

#ifdef WORK

using namespace std;

//부호를 없애야 right shift를 하더라도, 부호비트가 딸려오지 않는다.
unsigned char flag;

int main() 
{
#pragma region 비트연산
	//언제 필요한가?
	//비트단위의 조작이 필요할 때
	// - 대표적으로는 bit flag

	// ~ bitwise not(bit flip)
	//단일 숫자의 모든 비트를 대상으로, 0은1, 1은 0으로 바꿔버린당
	
	//& bitwise and 
	//두 숫자의 개별 비트를 대상으로 and연산을 수행함

	// | bitwise or
	//두 숫자의 개별 비트를 대상으로 or연산을 수행함

	// ^ bitwise xor
	//두 숫자의 개별 비트를 대상으로 xor연산을 수행함
	//두 번 연속해서 사용하면 원상복귀됨

	/*int a = 12;
	int b = 123;

	a = a ^ b;
	cout << a << endl;
	a = a ^ b;
	cout << a << endl;*/

	// << shiftleft bit
	//비트열을 N만큼 왼쪽으로 이동시킨다.
	//왼쪽의 N개의 비트는 버려진다.
	// 오른쪽의 N개의 비트는 0으로 채워진다.
	// *2를 할 때 컴파일러가 shift연산을 사용하는 경우가 많다.
	// 비트를 최상위 비트로 옮기기 위해서 사용하는 경우도 있다.

	// >> shiftright
	// 비트열을 N만큼 오른쪽으로 이동시킨다.
	// 오른쪽의 N개의 비트는 버려진다.
	// 왼쪽에 생성되는 N개의 비트
	// - 부호비트가 존재하는 경우에는 부호비트를 따라간다(부호있는 정수라면 이 부분을 유의) : 모두 1로 채워진다.
	// - 그게 아니라면 0이다 : 모두 0으로 채워진다.

	int num = 10;
	cout << bitset<8>(num) << endl;
	num = num >> 1;
	cout << bitset<8>(num) << endl;
	num = num << 1;
	cout << bitset<8>(num) << endl;

	num = -40;
	cout << bitset<8>(num) << ":" << num << endl;
	num = num >> 2;
	cout << bitset<8>(num) << ":" << num << endl;

	//bit flag 실습
	//0b0000[무적][변이][스턴][공중에 뜸]

	//무적상태로 만들기
	flag = (1 << 3);

	//변이상태를 추가(무적 + 변이)
	flag |= (1 << 2);

	//무적인지 확인하고 싶다 : bitmask
	//(1<<3)bit가 1이면 결과는 true이고, 아니라면, false이다.
	bool isInvincible = ((flag & (1 << 3)) != 0);
	cout << isInvincible << endl;

	//무적이거나 스턴인지 확인하고 싶다면?
	bool isinvincibleORstun = ((flag & (1 << 3)) != 0 || (flag & (1 << 2)) != 0);
	int mask = ((1 << 3) | (1 << 1));
	isinvincibleORstun = (flag & mask) != 0;
	isinvincibleORstun = ((flag & 0b1010) != 0);
	cout << isinvincibleORstun << endl;




#pragma endregion

}

#endif