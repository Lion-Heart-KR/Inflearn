#include <iostream>
using namespace std;

/// <summary>
/// ������ ���� : ĳ����(Ÿ�� ��ȯ)
/// 1) static_cast
/// 2) dynamic_cast
/// 3) const_cast
/// 4) reinterpret_cast
/// (int*)�̷��Ŵ� C������� ���. ���� 4������ C++������ ����̴�.
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
	//***************static_cast : Ÿ�� ��Ģ�� ���纼 �� ������� ĳ���ø� ������ش�.***************
	{
		//1) int <-> float
		//2) Player* -> Knight* (�ٿ�ĳ����)
		int hp = 100;
		int maxHP = 200;
		float ratio = static_cast<float>(hp) / maxHP;
		//float ratio = (float)hp / maxHP;

		//�������� ���� ��Ȳ : �θ�->�ڽ�, �ǵ������� ĳ������ ������Ѵ�.
		Player* p = new Knight;
		//Knight* k1 = (Knight*)p;
		Knight* k1 = static_cast<Knight*>(p); //�� ������ �������� �������ִ� ���� �ƴϴ�. Knight�� �ƴ� ��ü�� ĳ�����ؼ� �־��شٸ�, ������ ������ �۾��̴�.

		//������ ��Ȳ : �ڽ�->�θ�, ���� ĳ������ ���� �ʿ�� ����
		Knight* k2 = new Knight;
		Player* p2 = k2;
	}

	//***************dynamic_cast : ��Ӱ��迡���� ������ ����ȯ�� ����***************
	// RTTI(RunTime Type Information)
	// �������� Ȱ���Ѵ�.
	// - virtual�Լ��� �ϳ��� �����, ��ü�� �޸𸮿� ���� �Լ� ���̺� �ּҰ� ���Եȴ�.
	// - �׷��� �ϸ�, ������ ĳ������ �ϴ°��� �ƴ϶�, ������ �´� Ÿ�������� Ȯ���ϰ� ĳ�������ش�.
	// - �ڡڡڸ��� �߸��� Ÿ������ ĳ������ ������, nullptr�� ��ȯ�Ѵ�.�ڡڡ�

	//�Ʒ��� ��� ĳ������ �� p�� Knight*�� �´��� Ȯ���ϰ�, �ƴ϶�� nullptr�� ��ȯ�Ѵ�.
	//static_cast�� ��� Ȯ������ �ʰ�, ĳ������ ���ش�. 
	//�´� Ÿ������ ĳ������ �ߴ��� Ȯ���� �� �����ϴ�. ��ſ� �� ������.
	// ĳ���� �� nullptr���� Ȯ��!
	{		
		Player* p = new Archer;
		Knight* k1 = static_cast<Knight*>(p);
		Knight* k2 = dynamic_cast<Knight*>(p);
	}

	//***************const_cast : ��Ӱ��迡���� ������ ����ȯ�� ����***************
	//const�� ���̰ų� ���ų� �� �� Ȱ���Ѵ�.
	{
		//"Lihon"�� const char*�̹Ƿ�, �Ű������� char*�� �޴� �Լ��� �������� �� ����.
		//const�� ���� �Ѱ�����ϴµ� �� �� const_cast�� ����Ѵ�.
		PrintName(const_cast<char*>("Lihon"));
	}

	//***************reinterpret_cast : ��Ӱ��迡���� ������ ����ȯ�� ����***************
	//���� �����ϰ� ������ ������ ĳ���� : re-interpret = �ٽ� �����ϴ�?
	//- �����Ͷ� ���� ������� �ٸ� Ÿ�� ��ȯ
	{
		//����ݾ��� ��ȯ�� ���� ����Ѵ�.
		Knight* k = new Knight();
		__int64 address = reinterpret_cast<__int64>(k);
		Dog* dog = reinterpret_cast<Dog*>(k);

		//���� �ʿ��� ���� �ִ�.
		//void*
		void* p = malloc(1000);
		Dog* dog2 = reinterpret_cast<Dog *>(p);
	}

	return 0;
}