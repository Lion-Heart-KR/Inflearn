#include "Archer.h"
#include "Pet.h"

Archer::Archer(Pet* pet) : _pet(pet)
{
	
}

Archer::Archer(int hp) : Player(hp)
{
}

Archer::~Archer()
{
	// ��ſ��� �� �� :(
	if (_pet != nullptr)
		delete _pet;
}

void Archer::AddHp(int value)
{
	Player::AddHp(value);

	// �׾����� �굵 ������
	//�̰� ����, Archer�Ҹ��ڿ��� pet�� delete���� �ʿ䰡 ���� �ȴ�.
	//�ƴϸ�, _pet�� �����ϰ� nullptr�� ä���ش�.
	//����,,, Archer�� �����ʰ�, �׳� ���� �����ؼ� �Ҹ��ڸ� ȣ���ϰ� �ȴٸ�,
	//Archer�� �Ҹ��ڿ��� Pet�� �Ҹ� ������� �ϱ� ������, Archer���� Pet�� �Ҹ��ڸ� �״�� ȣ���ϵ��� �Ѵ�.
	if (IsDead())
	{
		delete _pet;
		_pet = nullptr;
	}
}
