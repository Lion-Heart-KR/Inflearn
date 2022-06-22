#include <iostream>

#ifdef WORK
using namespace std;

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;
bool test;
int hp = 100;
bool isInvincible = true;

int main() 
{
#pragma region 비교연산
	//언제 필요한가?
	//ex)체력이 0이 되'면' 사망
	//ex)체력이 30% 이하이'면', 궁극기 발동
	//ex)경험치가 100%이'면' 레벨업

	// a == b : a와 b가 같은가? 같으면 true, 다르면 false
	int a = 1;
	int b = 2;
	isSame = (a == b);
	cout << isSame << endl;

	// a != b : a와 b는 다른가? : 다르면 true, 같으면 false
	isDifferent = (a != b);
	cout << isDifferent << endl;

	// a > b
	// a >= b
	isGreater = (a > b);
	cout << isGreater << endl;

	//a<b
	//a<=b
	isSmaller = (a < b);
	cout << isSmaller << endl;
#pragma endregion

#pragma region 논리연산
	//언제 필요할까?
	//조건에 대한 논리적 사고가 필요할 때
	//ex)로그인 : 아이디와 비밀번호가 모두 같아야 한다 : AND
	//ex)길드 마스터이거나 운영자계정이면 길드 해산이 가능하다 : OR
	// ! : not기호 true -> false, false -> true
	test = !isSame;

	// && : AND
	//a&&b : 둘 다 true 면 true, 하나라도 false면 false
	test = (hp <= 0 && isInvincible == false);//죽음

	// || : OR
	// a || b -> 둘 중 하나라도 1이면 1, 둘 다 0이면 0
	test = (hp > 0 || isInvincible == true); //살아따!

#pragma endregion
}
#endif