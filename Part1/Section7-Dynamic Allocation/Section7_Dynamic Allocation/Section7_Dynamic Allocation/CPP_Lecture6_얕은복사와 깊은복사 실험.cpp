#include <iostream>

#define TEST4

using namespace std;

/// <summary>
/// ����)
/// - �Ͻ��� ���� ������ Steps : ���α׷��Ӱ� ���� �����ڸ� ��������� ���� ���
/// 1) �θ� Ŭ������ ���� ������ ȣ��
/// 2) ��� Ŭ������ ���� ������ ȣ��(���������°� �ƴ� ���)
/// 3) ����� �⺻ Ÿ���� ��� �޸� ����(���� ���� Shallow Copy)
/// - ����� ���� ������ Steps : ���α׷��Ӱ� ���� �����ڸ� ������� ���
/// 1) �θ� Ŭ������ �⺻ ������ ȣ��
/// 2) ��� Ŭ������ �⺻ ������ ȣ��
/// 
/// - �Ͻ��� ���� ���� ������ Steps
/// 1) �θ� Ŭ������ ���� ���� ������ ȣ��
/// 2) ��� Ŭ������ ���� ���� ������ ȣ��(���������°� �ƴ� ���)
/// 3) ����� �⺻ Ÿ���� ��� �޸� ����(���� ���� Shallow Copy)
/// - ����� ���� ���� ������ Steps
/// 1) ������ �˾Ƽ� ����� �Ѵ�.
/// 
/// ���̷��� ȥ���������?
/// - ��ü�� '����' �Ѵٴ� ���� �� ��ü�� ������ ��ġ��Ű���� ��.
/// - ���� �⺻������ ���� ����(Shallow Copy)������� ����
/// 
/// ����� ����
/// - ��� å���� ���α׷��ӿ��� �����ϰڴ�!
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
