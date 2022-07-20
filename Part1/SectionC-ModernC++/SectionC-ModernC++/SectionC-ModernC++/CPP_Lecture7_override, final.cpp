//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// ※override, final
///// Override
///// [1] 가독성. 오버라이딩된 함수라는것을 확실히 알 수 있다... 안전장치의 느낌. "나 오버라이딩 해요!!"
///// [2] 그냥 오버라이딩 할꺼면 붙여주면 됨.
///// 
///// final
///// [1] 내 밑으로는 오버라이딩 못해! 내가 마지막이야!
///// </summary>
///// <returns></returns>
//
//class Creature
//{
//public:
//	virtual void Attack()
//	{
//		cout << "Creature Attack" << endl;
//	}
//};
//
//class Player : public Creature
//{
//public:
//	//부모 클래스의 함수에 virtual이 없으면 에러가 발생한다.
//	virtual void Attack() override final
//	{
//		cout << "Player Attack" << endl;
//	}
//};
//
//class Knight : public Player
//{
//public:
//	//재정의(override)
//	
//	//virtual을 사용할 경우
//	//Knight클래스의 Attack함수만 보고는 얘가 virtual을 최초로 사용한것인지, 부모함수에서 최초로 사용한 것인지 알 수 없게 된다.
//	//부모 클래스의 Attack()함수에 final이 붙어있어서 여기서 Attack을 오버라이딩 할 수 없다.
//	virtual void Attack() override
//	{
//		cout << "Knight Attack" << endl;
//	}
//
//	//1. 이 함수는 부모 class의 Attack함수와 시그니처가 다르다. 따라서, 오버라이딩 되는게 아니다.
//	//2. const는 이 함수 안에서 멤버변수를 수정할 수 없음을 의미한다.
//	virtual void Attack() const //얘는 override를 붙여주면, 동일한 시그니처를 가진 함수가 부모클래스에 없기 때문에 에러가 발생한다.
//	{
//		cout << "Knight Attack" << endl;
//		//_stamina = 100; // 불가
//	}
//
//	//오버로딩(overloading) : 함수 이름의 재사용
//	/*
//	void Attack(int damage)
//	{
//		cout << "Knight Attack(damage)" << endl;
//	}
//	*/
//private:
//	int _stamina;
//};
//
//int main()
//{
//	//이 때는 virtual함수가 아닌 경우, 부모 자료형의 함수를 호출한다.
//	//하지만,,, Creature->Player->Knight의 상속관계에서 Player의 Attack부터 virtual이 지정되어있다면, 
//	//Creature class를 그 자손들을 담기위한 변수의 자료형으로 사용하는데에는 문제가 있다.
//	//실제로 아래의 경우에는, Knight Attack이 호출되지 않고, Creature Attack이 호출된다.
//	Creature* p1 = new Knight;
//	p1->Attack();
//
//	//virtual을 붙였지만, Attack함수의 시그니처가 달라서, 오버라이딩 되지 않고, Player의 attack이 호출되는 것을 볼 수 있다.
//	Player* p2 = new Knight;
//	p2->Attack();
//
//	return 0;
//}