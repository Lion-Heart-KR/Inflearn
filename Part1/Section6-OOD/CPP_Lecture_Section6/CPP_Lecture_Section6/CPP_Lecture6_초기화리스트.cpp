//#include <iostream>
//using namespace std;
//
///// <summary>
///// [초기화 리스트]
///// - 개념 : 멤버변수를 초기화하는 방법 중 하나
///// - [1] 생성자 내에서 초기화 하는 방법
///// --- 일단 객체를 생성하고, 그 다음에 초기화를 한다.
///// - [2] 초기화 리스트를 이용하는 방법
///// --- 객체를 생성함과 동시에 초기화를 한다.
///// - [3] 모던C++11문법 이용 : 멤버변수를 선언하며 동시에 초기화하는 방법이다.
///// 
///// [초기화를 해야하는 이유]
///// - 초기화 하지 않으면, 멤버변수에 쓰레기값이 저장된다.
///// - 쓰레기값은 컴파일시 에러가 발생하지 않고 실행되지만, 실행 도중에 논리적으로 에러를 발생시킬 수 있다.
///// - 버그 예방을 위해서 초기화가 필요하다.
///// 
///// [생성자에서 초기화하는 방법 vs 초기화리스트 이용하는 방법]
///// - 기본 자료형 변수의 경우 차이가 없다.
///// - 멤버변수의 타입이 클래스인 경우에 차이가 발생한다.
///// - 정의하는 것과 동시에 초기화가 필요한 const, reference 타입의 경우 차이가 발생한다.
///// 
///// [class간의 관계]
///// - [1] Is-A관계 : 상속관계 => Knight is a Player
///// - [2] Has-A 관계 : 포함관계 => Knight has a Inventory
///// 
///// </summary>
///// <returns></returns>
//
//class Inventory
//{
//public:
//	Inventory() { cout << "Inventory()" << endl; }
//	Inventory(int size) { cout << "Inventory(int size)" << endl; _size = size; }
//	~Inventory() { cout << "~Inventory()" << endl; }
//
//public:
//	int _size;
//	//int _size = 100; //morden C++11 의 방법
//};
//
//class Player
//{
//public:
//	Player () { }
//	Player (int id) { }
//
//public:
//};
//
//class Knight : public Player
//{
//public:
//	//생성자에서 초기화하는 방법
//	//이 방법으로 초기화할 경우, 선처리 영역에서 [기본 생성자]로 inventory가 하나 만들어진다.
//	//그리고, size가 20인 인벤토리 객체를 생성할 때 한 번 더 객체가 생성되어서 비효율적이다.
//	//따라서 클래스 타입의 멤버변수가 있다면, 생성자에서 초기화하기보다는, 초기화 리스트를 사용하는 것이 더 효율적이다.
//	Knight()
//	{
//		//선처리 영역 : _inventory = Inventory()
//		cout << "생성자에서 초기화" << endl;
//		_hp = 100;
//		_stamina = 20;
//		_inventory = Inventory(24);
//	}
//
//	//초기화 리스트를 이용하는 방법
//	Knight(int hp) : Player(1), _hp(100), _stamina(20), _inventory(24)
//	{
//		cout << "초기화 리스트" << endl;
//	}
//
//public:
//	int _hp;
//	int _stamina;
//	Inventory _inventory;
//};
//
//int main()
//{
//	Knight k;
//	cout << k._inventory._size << endl;
//}