//#include <iostream>
//
//using namespace std;
//
////객체지향 프로그래밍
//// 객체 : 플레이어, 몬스터, 맵 등
////절차지향 프로그래밍
//// - 함수가 정해진 순서를 따라서 실행됨
//// - 확장성이 없음.
//
////Knight 객체 설계하기
//// - 속성(데이터) : hp, attack, positionX, positionY
//// - 기능(동작) : Move, Attack, Die, 
////
//
////class는 일종의 설계도
//class Knight 
//{
//public:
//	//동작
//	void Move(int x, int y);
//	void Attack();
//
//	void Die()
//	{
//		//멤버변수에 접근 가능함.
//		hp = 0;
//		cout << "Die" << endl;
//	}
//
//public:
//	//멤버변수
//	int hp;
//	int attack;
//	int posX;
//	int posY;
//};
//
//void Knight::Move(int x, int y) 
//{
//	posX = x;
//	posY = y;
//	cout << "Move" << endl;
//}
//
//void Knight::Attack()
//{
//	cout << "Attack : " << attack << endl;
//}
//
//int main()
//{
//	Knight k1;
//	k1.hp = 100;
//	k1.attack = 10;
//	k1.posX = 0;
//	k1.posY = 0;
//
//	Knight k2;
//	k2.hp = 80;
//	k2.attack = 5;
//	k2.posX = 1;
//	k2.posY = 1;
//
//	k1.Move(1, 1);
//	k1.Attack();
//	k1.Die();
//
//
//
//	return 0;
//}