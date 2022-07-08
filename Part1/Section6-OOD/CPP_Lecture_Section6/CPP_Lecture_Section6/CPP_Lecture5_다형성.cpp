//#include <iostream>
//using namespace std;
//
///// <summary>
///// ▶※
///// 주제 : 다형성(polymorphism) => 겉은 똑같은데, 기능이 다르게 동작한다.
///// ▶▶ 오버로딩(overloading) : 같은 이름의 함수를 중복정의
///// ▶▶ 오버라이딩(overriding) : 부모클래스의 함수를 자식 클래스에서 재정의
///// 
///// ※바인딩
///// ▶ 정적 바인딩(static binding) : 컴파일 시점에 바인딩
///// ▶▶ 일반 함수는 정적 바인딩된다.
///// 
///// ▶ 동적 바인딩(dynamic binding) : 실행 시점에 바인딩
///// ▶▶ 동적 바인딩을 원하는 경우 가상함수(virtual function)를 사용해야한다.
///// ▶▶ 가상함수는 부모클래스에서 가상함수로 선언했다면, 자식클래스에서 따로 virtual을 표기해주지 않아도
///// ▶▶ 오버라이딩 시 가상함수로 인식을 한다.
///// ▶▶ 동적바인딩을 하는 경우에는, 부모 클래스타입 객체를 매개변수로 넘겨받아서 특정 함수를 실행할 때
///// ▶▶ 매개변수로 넘겨받은 객체의 타입에 맞는 함수를 실행해준다.
///// ▶▶ 정적바인딩의 경우 항상 부모클래스타입의 함수만 실행한다.
///// 
///// ※가상함수 테이블(vftable)
///// ▶ 부모클래스 타입으로 매개변수를 넘겨주는데, 실제 객체가 어떤 타입인지 어떻게 알고
///// ▶ 실제 객체에 맞는 가상함수를 호출할 수 있을까?
///// 
///// ▶가상함수 테이블을 사용한다
///// ▶▶각 객체는 객체의 시작주소에 자신의 가상함수 테이블의 주소를 가지고 있다.
///// ▶▶가상함수 테이블의 주소를 따라가보면, 각 객체의 타입에 맞는 가상함수의 주소가 나온다.
///// ▶▶그래서 넘겨준 객체의 종류에 따라서 적절한 가상함수를 호출할 수 있게 되는것이다.
///// 
///// ※추상 클래스
///// ▶▶ 가상함수의 시그니처만 건내주는 경우, 그 가상함수를 갖고있는 클래스는 추상클래스가 된다.
///// ▶▶ 시그니처만 건내주는 것은 virtual이 붙은 가상함수만 가능하다.
///// ▶▶ 추상클래스를 상속하는 클래스는 반드시 가상함수를 재정의해줘야한다.
///// ▶▶ 추상클래스는 인스턴스를 생성할 수 없다.
/////
///// 
///// </summary>
///// <returns></returns>
///// 
//
//
//class Player
//{
//public:
//	Player()
//	{
//		cout << "Player() 호출" << endl;
//		_hp = 0x123;
//	}
//
//	void Move() { cout << "Move Player" << endl; }
//	virtual void VMove() { cout << "VMove Player" << endl; }
//
//public:
//	int _hp;
//};
//
//class Knight : public Player
//{
//public:
//	Knight()
//	{
//		cout << "Knight() 호출" << endl;
//		_stamina = 100;
//	}
//	void Move() { cout << "Move Knight" << endl; }
//	virtual void VMove() { cout << "VMove Knight" << endl; }
//
//public:
//	int _stamina;
//};
//
//class Mage : public Player
//{
//public:
//	Mage()
//	{
//		cout << "Mage() 호출" << endl;
//		_mp = 100;
//	}
//	void Move() { cout << "Move Mage" << endl; }
//	virtual void VMove() { cout << "VMove Mage" << endl; }
//
//public:
//	int _mp;
//};
//
//void MovePlayer(Player* p)
//{
//	p->Move();
//}
//
//void MoveKnight(Knight* k)
//{
//	k->Move();
//}
//
//void VMovePlayer(Player* p)
//{
//	p->VMove();
//}
//
//class Parent
//{
//public:
//	virtual void Test() = 0;
//	virtual void NotVirtualTest() = 0;
//};
//
//class Child : public Parent
//{
//public:
//	void Test()
//	{
//		cout << "Hello Virtual Test" << endl;
//	}
//	void TestChild()
//	{
//		cout << "Hello Child" << endl;
//	}
//};
//
//
//int main()
//{
//	Player p;
//	Knight k;
//	Mage m;
//
//	//[1]일반적인 경우
//	MovePlayer(&p);
//	MoveKnight(&k);
//
//	//[2]다형성을 적용하는 경우
//	//Knight는 Player의 한 종류이므로, player클래스 객체 자리에, Knight객체가 들어갈 수 있다.
//	MovePlayer(&k);
//
//	//[3]다형성을 잘못 적용한 경우
//	//Player는 Knight의 한 종류가 아니므로, 자식클래스의 객체 자리에, 부모클래스 객체가 들어갈 수 없다.
//	//MoveKnight(&p);
//
//	//*******************************************************
//	// 위와 같은 경우 다형성이 절반만 적용되었다고 할 수 있다.
//	// MovePlayer에 자식클래스 객체를 넘겨줬을 때
//	// 자식 클래스 객체에 알맞은 동작을 하기 위해서는 어떻게 해야할까?
//	// => 가상함수를 사용한다.
//	//
//	
//	VMovePlayer(&p);
//	VMovePlayer(&k);
//	VMovePlayer(&m);
//
//	//위의 경우는 각 객체에 맞는 VMove가 호출되는 것을 볼 수 있다.
//	
//
//	//추상클래스는 인스턴스를 생성할 수 없다.
//	//Parent p; (X)
//
//	//추상클래스를 상속한 자식 클래스는 순수가상함수를 반드시 재정의해줘야한다.
//	Child c;
//	c.NotVirtualTest();
//
//
//
//}