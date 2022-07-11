#include <iostream>

#define TEST4

using namespace std;

/// <summary>
/// 실험)
/// - 암시적 복사 생성자 Steps : 프로그래머가 복사 생성자를 만들어주지 않은 경우
/// 1) 부모 클래스의 복사 생성자 호출
/// 2) 멤버 클래스의 복사 생성자 호출(포인터형태가 아닌 경우)
/// 3) 멤버가 기본 타입일 경우 메모리 복사(얕은 복사 Shallow Copy)
/// - 명시적 복사 생성자 Steps : 프로그래머가 복사 생성자를 만들어준 경우
/// 1) 부모 클래스의 기본 생성자 호출
/// 2) 멤버 클래스의 기본 생성자 호출
/// 
/// - 암시적 복사 대입 연산자 Steps
/// 1) 부모 클래스의 복사 대입 연산자 호출
/// 2) 멤버 클래스의 복사 대입 연산자 호출(포인터형태가 아닌 경우)
/// 3) 멤버가 기본 타입일 경우 메모리 복사(얕은 복사 Shallow Copy)
/// - 명시적 복사 대입 연산자 Steps
/// 1) 모든것을 알아서 해줘야 한다.
/// 
/// 왜이렇게 혼란스러울까?
/// - 객체를 '복사' 한다는 것은 두 객체의 값들을 일치시키려는 것.
/// - 따라서 기본적으로 얕은 복사(Shallow Copy)방식으로 동작
/// 
/// 명시적 복사
/// - 모든 책임은 프로그래머에게 위임하겠다!
/// </summary>
/// <returns></returns>

#ifdef TEST1
class Pet
{
public:
	Pet()
	{
		cout << "Pet()" << endl;
	}
	Pet(const Pet& p)
	{
		cout << "Pet(const Pet& p)" << endl;
	}
public:
	int _petLevel;
};

class Player
{
public:
	Player()
	{
		cout << "Player()" << endl;
	}
	Player(const Player& p)
	{
		cout << "Player(const Player& p)" << endl;
	}
public:
	int _level;
	int _hp;
};

class Knight : public Player
{
public:
	Knight()
	{
		cout << "Knight()" << endl;
	}
public:
	int _stamina;
	Pet _pet;
};

int main()
{
	Knight k1;
	Knight k2(k1);
}
#endif

#ifdef TEST2
class Pet
{
public:
	Pet()
	{
		cout << "Pet()" << endl;
	}
	Pet(const Pet& p)
	{
		cout << "Pet(const Pet& p)" << endl;
	}
public:
	int _petLevel;
};

class Player
{
public:
	Player()
	{
		cout << "Player()" << endl;
	}
	Player(const Player& p)
	{
		cout << "Player(const Player& p)" << endl;
	}
public:
	int _level;
	int _hp;
};

class Knight : public Player
{
public:
	Knight()
	{
		cout << "Knight()" << endl;
	}
	Knight(const Knight& k) : Player(k), _pet(k._pet)
	{
		cout << "Knight(const Knight& k)" << endl;
	}
public:
	int _stamina;
	Pet _pet;
};

int main()
{
	Knight k1;
	Knight k2(k1);
}
#endif

#ifdef TEST3
class Pet
{
public:
	Pet()
	{
		cout << "Pet()" << endl;
	}
	Pet(const Pet& p)
	{
		cout << "Pet(const Pet& p)" << endl;
	}
	Pet& operator=(const Pet& p)
	{
		cout << "Pet& operator=(const Pet& p)" << endl;
		_petLevel = p._petLevel;
		return *this;
	}
public:
	int _petLevel;
};


class Player
{
public:
	Player()
	{
		cout << "Player()" << endl;
	}
	Player(const Player& p)
	{
		cout << "Player(const Player& p)" << endl;
	}
	Player& operator=(const Player& p)
	{
		cout << "Player& operator=(const Player& p)" << endl;
		_level = p._level;
		_hp = p._hp;
		return *this;
	}
public:
	int _level;
	int _hp;
};

class Knight : public Player
{
public:
	Knight()
	{
		cout << "Knight()" << endl;
	}	
	Knight(const Knight& k) : Player(k), _pet(k._pet)
	{
		cout << "Knight(const Knight& k)" << endl;
	}
public:
	int _stamina;
	Pet _pet;
};

int main()
{
	Knight k1;
	Knight k2;
	k2 = k1;
}
#endif

#ifdef TEST4
class Pet
{
public:
	Pet()
	{
		cout << "Pet()" << endl;
	}
	Pet(const Pet& p)
	{
		cout << "Pet(const Pet& p)" << endl;
	}
	Pet& operator=(const Pet& p)
	{
		cout << "Pet& operator=(const Pet& p)" << endl;
		_petLevel = p._petLevel;
		return *this;
	}
public:
	int _petLevel;
};


class Player
{
public:
	Player()
	{
		cout << "Player()" << endl;
	}
	Player(const Player& p)
	{
		cout << "Player(const Player& p)" << endl;
	}
	Player& operator=(const Player& p)
	{
		cout << "Player& operator=(const Player& p)" << endl;
		_level = p._level;
		_hp = p._hp;
		return *this;
	}
public:
	int _level;
	int _hp;
};

class Knight : public Player
{
public:
	Knight()
	{
		cout << "Knight()" << endl;
	}
	Knight(const Knight& k) : Player(k), _pet(k._pet)
	{
		cout << "Knight(const Knight& k)" << endl;
	}
	Knight& operator=(const Knight& k)
	{
		cout << "Knight& operator=(const Knight& k)" << endl;
		_stamina = k._stamina;
		_pet = k._pet;
		Player::operator=(k);
		return *this;
	}
public:
	int _stamina;
	Pet _pet;
};

int main()
{
	Knight k1;
	Knight k2;
	k2 = k1;
}
#endif
