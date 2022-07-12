#include "Field.h"
#include "Monster.h"
#include "Player.h"
#include <stdlib.h>

Field::Field() : _monster(nullptr)
{

}

Field::~Field()
{
	if (_monster != nullptr)
		delete _monster;
}

void Field::Update(Player* player)
{
	if (_monster == nullptr)
		CreateMonster();

	StartBattle(player);
}

void Field::CreateMonster()
{
	int randomValue = 1 + rand() % 3;
	switch (randomValue)
	{
	case MT_SLIME:
		_monster = new Slime;
		break;
	case MT_ORC:
		_monster = new Orc;
		break;
	case MT_SKELETON:
		_monster = new Skeleton;
		break;
	default:
		break;
	}
}

void Field::StartBattle(Player* player)
{
	while (true)
	{
		player->PrintInfo();
		_monster->PrintInfo();

		//�÷��̾�->���� ����
		_monster->OnAttacked(player);
		if (_monster->IsDead())
		{
			_monster->PrintInfo();
			delete _monster;
			_monster = nullptr;
			break;
		}
		// ����->�÷��̾� ����
		player->OnAttacked(_monster);
		if(player->IsDead())
		{
			//monster�� field�� �����ϴ� ��ü�̹Ƿ�, field���� delete��������,
			//player�� field�� �����ϴ� ��ü�� �ƴϹǷ�, field���� delete������ �ʴ´�.
			player->PrintInfo();
			break;
		}
	}
}