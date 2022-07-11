//#include <iostream>
//using namespace std;
//
///// <summary>
///// ※얕은복사 vs 깊은복사
///// </summary>
///// <returns></returns>
//
//class Pet
//{
//public:
//	Pet() : _age(10)
//	{
//		cout << "Pet()" << endl;
//	}
//	Pet(const Pet& pet) : _age(pet._age)
//	{
//		cout << "Pet(const Pet& pet)" << endl;
//	}
//	~Pet()
//	{
//		cout << "~Pet()" << endl;
//	}
//public:
//	int _age;
//};
//
//class Knight
//{
//public:
//	Knight()
//	{
//		cout << "Knight()" << endl;
//	}
//
//	//깊은 복사를 구현하는 복사 생성자
//	Knight(const Knight& k) : _pet(new Pet)
//	{
//		cout << "Knight(const Knight& k)" << endl;
//	}
//
//	//깊은 복사를 구현하는 복사 대입 연산자
//	Knight& operator=(const Knight& k)
//	{
//		_hp = k._hp;
//		_pet = new Pet(*k._pet);
//		return *this;
//	}
//
//	~Knight()
//	{
//		cout << "~Knight()" << endl;
//		delete _pet;
//	}
//
//public:
//	int _hp = 100;
//	Pet* _pet=nullptr;
//	//다른 클래스를 멤버 변수로 들고있기 위해서는 포인터나 참조값을 사용하는 것이 좋다.
//	// 복사값으로 들고있었을 때의 문제점
//	// [1] Pet객체가 Knight에 종속된다. 생성과 소멸을 함께하게 된다.
//	// [2] Pet객체의 데이터가 크다면, Knight객체가 함께 비대해진다.
//	// [3] Pet을 상속받은 클래스의 객체가 있다면, Pet타입을 사용할 수 없게된다.(있을것같은데)
//};
//
//int main()
//{
//	//얕은 복사
//	{
//		Pet* p1 = new Pet;
//		Knight k1;
//		k1._hp = 200;
//		//k1._pet = p1;
//
//		//얕은복사를 통해서 k1과 동일한 객체 만들기 1 : 복사생성자 이용하기
//		Knight k2 = k1;
//		//Knight k2(k1);
//
//		//얕은복사를 통해서 k1과 동일한 객체 만들기 2 : 기본생성자로 생성 후, 복사 대입 연산자 사용하기
//		Knight k3;
//		k3 = k1;
//
//		//복사 생성자와, 복사 대입 연산자는 명시적으로 만들어주지 않으면, 컴파일러가 암시적으로 만들어준다.
//
//		//★★★★★★★★★★★얕은 복사의 문제점★★★★★★★★★★★
//		// [1] 멤버 데이터를 비트열 단위로 '똑같이' 복사한다.
//		// [2] 만약, Knight객체가 3개있고, Knight멤버변수로 포인터 변수가 있다면, 모두 동일한 메모리를 참조하게 된다.
//		// [3] 위의 경우에서 k1, k2, k3모두 Pet 객체로 p1을 참조하게 된다.
//		// [4] k1을 더 이상 사용할 필요가 없게되어서, k1이 소멸된다면, k2와 k3는 더이상 Pet을 갖지 못하는 것이다.
//
//		// ※깊은복사
//		// - 깊은복사로 구현한다면, 각각의 Knight객체마다 Pet 객체를 갖게되는데, 그 객체는 서로 다른 것이다.
//		// stack : k1 [hp 0x1000]  -> Heap 0x1000 : Pet[      ]
//		// stack : k2 [hp 0x2000]  -> Heap 0x2000 : Pet[      ]
//		// stack : k3 [hp 0x3000]  -> Heap 0x3000 : Pet[      ]
//		//
//	}
//}
