//#include <iostream>
//using namespace std;
//
//// 생성자와 소멸자
//// *생성자
//// -- 객체 생성시 항상 실행되어야 하는 동작을 정의할 수 있는 함수
//// -- 생성자는 여러개 존재할 수 있다.
//// 
//// *암시적(Implicit) 생성자
//// -- 생성자를 만들어주지 않으면, 컴파일러가 자동으로 [기본 생성자]를 만들어준다.
//// -- 컴파일러가 만들어준 [기본 생성자]는 아무런 동작을 하지 않는다.
//// -- 따라서 기본생성자로 클래스 생성후 값을 확인해보면 쓰레기값이 나온다.
//// 
//// *명시적(Explicit) 생성자
//// -- 프로그래머가 생성자를 하나라도 만들면, 컴파일러는 기본 생성자를 생성하지 않는다.
//// -- 프로그래머에 의해서 만들어진 생성자를 [명시적 생성자]라고 한다.
//// 
//// *생성자의 종류
//// -- [1] : 기본 생성자 : 매개변수가 없다.
//// -- [2] : 복사 생성자 : 
//// ---- 자기 자신의 클래스 참조타입을 인자로 받는다. 
//// ---- 인자로 받은 객체와 동일한 객체를 생성한다.
//// ---- 복사생성자도 암시적(Implicit)으로 생성된다.
//// -- [3] : 기타 생성자
//// ---- 매개변수를 1개이상 받아서 객체를 생성하는 생성자 함수
//// ---- 이 중 매개변수를 1개'만' 받는 [기타 생성자]를 [타입변환 생성자]라고 부르기도 한다.
//// ---- [타입 변환 생성자]는 Knight k1 = 2; 처럼 class 변수에 다른 자료형의 값을 넣을 수 있다.
//// ---- 이렇게 생성된 객체 k1은 매개변수로 2라는 값을 사용해서 생성자를 호출한 것과 같은 효과를 보인다.
//// ---- 매개변수가 1개인 생성자가 위와 같은 방식으로 사용되길 원치 않으면, 생성자 앞에 [explicit]을 붙여주면 된다.
//// ---- 그러면, 강제 형변환을 하지 않는다면, 다른 자료형을 클래스의 변수에 할당할 수 없다.
//// 
//// *소멸자
//// -- 소멸자는 객체가 소멸할 때 반드시 호출되는 함수
//// -- 소멸자는 하나만 존재할 수 있다.
//// -- 소멸자에는 매개변수를 사용할 수 없다.
//// -- 생성자와 소멸자의 관계는 스택이다.
//// -- 가장 나중에 생성된 객체가 가장 먼저 소멸된다.
//// 
////
//
//int cnt = 0;
//
//class Knight
//{
//public:
//	//[기본 생성자]
//	Knight()
//	{
//		_id = ++cnt;
//		cout << _id << " : Knight 기본 생성자 호출" << endl;
//	}
//
//	//[기타 생성자]
//	//[타입 변환 생성자]
//	explicit Knight(int hp)
//	{
//		_id = ++cnt;
//		_hp = hp;
//		cout << _id << " : Knight 기타 생성자 호출" << endl;
//	}
//
//	//[기타 생성자]
//	Knight(int hp, int attack)
//	{
//		_id = ++cnt;
//		_hp = hp;
//		_attack = attack;
//
//		cout << _id << " : Knight 기타 생성자 호출" << endl;
//	}
//
//	//[기타 생성자]
//	Knight(int hp, int attack, int x, int y)
//	{
//		_id = ++cnt;
//		_hp = hp;
//		_attack = attack;
//		_posX = x;
//		_posY = y;
//		cout << _id << " : Knight 기타 생성자 호출" << endl;
//	}
//
//	//[복제 생성자]
//	// 프로그래머가 직접 생성자를 작성하지 않아도, 컴파일러가 알아서 만들어준다.
//	// 복제 생성자를 직접 만들어버리면, 매개변수가 1개일때 [복제 생성자]와 [기타 생성자] 중
//	// 어떤 생성자를 사용해야할지 컴파일러가 판단할 수 없어서 오류가 발생한다.
//	/*Knight(Knight& k)
//	{
//		_id = ++cnt;
//		_hp = k._hp;
//		_attack = k._attack;
//		_posX = k._posX;
//		_posY = k._posY;
//		cout << _id << " : Knight 복제 생성자 호출" << endl;
//	}*/
//
//	//소멸자
//	~Knight()
//	{
//		cout << _id << " : Knight 기본 소멸자 호출" << endl;
//	}
//
//	void Move(int x, int y);
//	void Attack();
//	void Die()
//	{
//		_hp = 0;
//		cout << "Die" << endl;
//	}
//	void getInfo();
//
//public:
//	int _id;
//	int _hp;
//	int _attack;
//	int _posX;
//	int _posY;
//};
//
//void Knight::Move(int x, int y)
//{
//	_posX = x;
//	_posY = y;
//	cout << "move to (" << x << "," << y << ")" << endl;
//}
//
//void Knight::Attack()
//{
//	cout << "Attack : " << _attack << endl;
//}
//
//void Knight::getInfo()
//{
//	cout << "********************************" << endl;
//	cout << "Object ID : " << _id << endl;
//	cout << "HP : " << _hp << endl;
//	cout << "Attack : " << _attack << endl;
//	cout << "position : (" << _posX << "," << _posY << ")" << endl;
//	cout << "********************************" << endl;
//}
//
//
//void HelloKnight(Knight k)
//{
//	k.getInfo();
//}
//
//int main()
//{
//	Knight k1;
//
//	Knight k2(100, 20);
//
//	k2.getInfo();
//
//
//	// 매개변수가 1개인 생성자에 Explicit이라는 명시되어있지 않으면,
//	// 아래와 같이 함수를 호출할 수도 있음.
//	// 매개변수로 Kngiht의 객체가 전달되어야 하지만, 정수 2가 전달되고,
//	// 매개변수가 1개인 생성자로 객체를 생성하여, 객체를 함수에 전달해준다.
//	//HelloKnight(2); -- explicit이 없는 경우
//	//HelloKnight((Knight)2); -- explicit이 있는 경우 이렇게 사용하면 된다.
//
//	//이렇게 객체를 생성하면, hp가 3인 객체가 매개변수가 1개인 기타생성자로 생성된다.
//	Knight k6 = (Knight)3;
//
//
//	//[복제 생성자]를 사용해서 객체를 생성하는 방법
//	Knight k3(120, 15, 3, 3);
//	Knight k4(k3);
//
//	//k3과 k4의 정보가 동일하다.
//	k3.getInfo();
//	k4.getInfo();
//
//	// 이 방법은 k5객체를 [기본 생성자]를 이용해서 생성하고
//	// k5에 k4를 복사하는 방법이다.
//	Knight k5;
//	k5 = k4;
//	k5.getInfo();
//}