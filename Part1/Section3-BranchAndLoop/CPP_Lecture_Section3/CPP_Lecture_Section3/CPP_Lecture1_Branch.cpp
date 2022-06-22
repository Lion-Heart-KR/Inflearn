#include <iostream>
using namespace std;
#ifdef WORK

/*
오늘의 주제 : 분기문
가공한 데이터를 이용해서 무언가를 하고싶다면?
*/

int main()
{
	//int hp = 100;
	//int damage = 70;

	//hp -= damage; //피격판정
	//bool isDead = (hp <= 0); //처치판정

	////몬스터가 죽었으면 플레이어에게 경험치 추가

	////한 줄은 block없이 가능
	////여러줄은 { } 중괄호로 묶어줘야 한다능
	//if (isDead) {
	//	cout << "몬스터를 처치했습니다." << endl;
	//}
	//else if (hp <= 20)	{
	//	cout << "몬스터가 도망가고 있습니다." << endl;
	//}
	//else {
	//	cout << "몬스터가 반격했습니다." << endl;
	//}

	const int ROCK = 0;
	const int PAPER = 1;
	const int SCISSIORS = 2;

	int input = ROCK;

	if (input == ROCK)
		cout << "바위를 냈습니다." << endl;
	else if (input == PAPER)
		cout << "보를 냈습니다." << endl;
	else if (input == SCISSIORS)
		cout << "가위를 냈습니다." << endl;
	else
		cout << "뭘 낸거야 ㅅㅂ" << endl;
	
	//switch-case
	//break가 없으면, 아래의 case로 또 간다.
	//정수계열만 넣을 수 있다.3333
	switch (input)
	{
	case ROCK:
		cout << "바위를 냈습니다." << endl;
		break;
	case PAPER:
		cout << "보를 냈습니다." << endl;
		break;
	case SCISSIORS:
		cout << "가위를 냈습니다." << endl;
		break;
	default:
		cout << "뭘 낸거야 병*아" << endl;
		break;
	}
}

#endif