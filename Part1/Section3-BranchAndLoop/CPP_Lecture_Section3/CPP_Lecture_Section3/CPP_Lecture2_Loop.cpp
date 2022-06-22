#include <iostream>
using namespace std;

//오늘의 주제 : 반복문

int main() 
{
	//while문 : ~하는 동안
	//ex) 유저가 게임을 끌 때까지 게임을 실행해라
	//ex) 목적지에 도달할 때까지 계속 이동하라

	//int cnt = 0;

	////한 번도 실행되지 않을 수 있음
	//while (cnt < 5) {
	//	cout << cnt++ << endl;
	//}

	////적어도 한 번은 무조건 실행함
	//do {
	//	cout << cnt++ << endl;
	//} while (cnt < 10);

	////for(초기식;조건식;증감식)
	////1. 초기화 : int i = 0;
	////2. 조건식 판별 : i<10
	////3. 내부 실행문 수행 : cout
	////4. 증감식 실행 : i++
	////5. 2번으로 돌아가서 반복
	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}

	//break, continue
	//break : 반복문을 중단하고 빠져나감
	//continue : 아래의 실행문을 실행하지 않고, 다음 반복으로 넘어감
	//int round = 1;
	//int hp = 100;
	//int damage = 21;

	////무한 루프 : 전투의 시작
	//while (true) {
	//	hp -= damage;

	//	//체력이 0미만으로 떨어지지 않도록함.
	//	if (hp < 0)
	//		hp = 0;

	//	//system message
	//	cout << "Round" << round << " monster HP : " << hp << endl;

	//	if (hp == 0)
	//	{
	//		cout << "monster has died" << endl;
	//		break;
	//	}

	//	if (round == 5) {
	//		cout << "round ends" << endl;
	//		break;
	//	}

	//	round++;
	//}


	//1~10사이의 홀수만 출력하기
	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0)
			continue;
		cout << i << endl;
	}
}