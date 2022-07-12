#include <iostream>
using namespace std;

/// <summary>
/// 오늘의 주제 : 캐스팅(타입 변환)
/// 1) static_cast
/// 2) dynamic_cast
/// 3) const_cast
/// 4) reinterpret_cast
/// (int*)이런거는 C언어적인 방식. 위의 4가지가 C++스러운 방식이다.
/// </summary>
/// <returns></returns>

class Player
{
public:
	virtual ~Player() { }
};

class Knight : public Player
{
public:
};

class Archer : public Player
{
public:
};

class Dog
{
public:

};

void PrintName(char* str)
{
	cout << str << endl;
}

int main()
{
	//***************static_cast : 타입 원칙에 비춰볼 때 상식적인 캐스팅만 허용해준다.***************
	{
		//1) int <-> float
		//2) Player* -> Knight* (다운캐스팅)
		int hp = 100;
		int maxHP = 200;
		float ratio = static_cast<float>(hp) / maxHP;
		//float ratio = (float)hp / maxHP;

		//안전하지 않은 상황 : 부모->자식, 의도적으로 캐스팅을 해줘야한다.
		Player* p = new Knight;
		//Knight* k1 = (Knight*)p;
		Knight* k1 = static_cast<Knight*>(p); //이 문법이 안정성을 보장해주는 것은 아니다. Knight가 아닌 객체를 캐스팅해서 넣어준다면, 여전히 위험한 작업이다.

		//안전한 상황 : 자식->부모, 굳이 캐스팅을 해줄 필요는 없음
		Knight* k2 = new Knight;
		Player* p2 = k2;
	}

	//***************dynamic_cast : 상속관계에서의 안전한 형변환을 지원***************
	// RTTI(RunTime Type Information)
	// 다형성을 활용한다.
	// - virtual함수를 하나라도 만들면, 객체의 메모리에 가상 함수 테이블 주소가 기입된다.
	// - 그렇게 하면, 무조건 캐스팅을 하는것이 아니라, 실제로 맞는 타입인지를 확인하고 캐스팅해준다.
	// - ★★★만약 잘못된 타입으로 캐스팅을 했으면, nullptr을 반환한다.★★★

	//아래의 경우 캐스팅할 때 p가 Knight*가 맞는지 확인하고, 아니라면 nullptr을 반환한다.
	//static_cast의 경우 확인하지 않고, 캐스팅을 해준다. 
	//맞는 타입으로 캐스팅을 했는지 확인할 때 유용하다. 대신에 좀 느리다.
	// 캐스팅 후 nullptr여부 확인!
	{		
		Player* p = new Archer;
		Knight* k1 = static_cast<Knight*>(p);
		Knight* k2 = dynamic_cast<Knight*>(p);
	}

	//***************const_cast : 상속관계에서의 안전한 형변환을 지원***************
	//const를 붙이거나 떼거나 할 때 활용한다.
	{
		//"Lihon"은 const char*이므로, 매개변수를 char*로 받는 함수에 전달해줄 수 없다.
		//const를 빼고 넘겨줘야하는데 그 때 const_cast를 사용한다.
		PrintName(const_cast<char*>("Lihon"));
	}

	//***************reinterpret_cast : 상속관계에서의 안전한 형변환을 지원***************
	//가장 위험하고 강력한 형태의 캐스팅 : re-interpret = 다시 간주하다?
	//- 포인터랑 전혀 관계없는 다른 타입 변환
	{
		//개뜬금없는 변환을 위해 사용한다.
		Knight* k = new Knight();
		__int64 address = reinterpret_cast<__int64>(k);
		Dog* dog = reinterpret_cast<Dog*>(k);

		//가끔 필요할 때가 있다.
		//void*
		void* p = malloc(1000);
		Dog* dog2 = reinterpret_cast<Dog *>(p);
	}

	return 0;
}