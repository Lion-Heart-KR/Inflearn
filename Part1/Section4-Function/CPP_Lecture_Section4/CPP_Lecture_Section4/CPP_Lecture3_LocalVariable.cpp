#include <iostream>
using namespace std;
#define WORK
#ifdef WORK

int globalValue = 321;

void IncreaseHP(int hp)
{
	hp++;
}

int main() 
{
	int hp = 0x1234;

	cout << "increase 호출 전 HP : " << hp << endl;
	IncreaseHP(hp);
	cout << "increase 호출 후 HP : " << hp << endl;

	/*
	스택의 구조는 [매개변수][RET][지역변수][매개변수][RET][지역변수]... 이런 형태로 이루어져있다.
	main에서 선언한 hp는 메인함수 영역의 지역변수에 하나의 공간을 할당받아서 1이라는 값이 들어가 있는데,
	IncreaseHP를 호출하며 hp를 넘겨주면, IncreaseHP의 매개변수 영역에 1이라는 값을 복사한 변수가 하나의 또다른 메모리영역을 차지하게 된다.
	결론은, main의 hp가 저장된 곳의 메모리 주소와, IncreaseHP함수에서 증가시키는 hp가 저장된 곳의 메모리 주소는 다르다는 것이다.
	*/
}

#endif WORK