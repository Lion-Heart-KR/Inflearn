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

		//플레이어->몬스터 공격
		_monster->OnAttacked(player);
		if (_monster->IsDead())
		{
			_monster->PrintInfo();
			delete _monster;
			_monster = nullptr;
			break;
		}
		// 몬스터->플레이어 공격
		player->OnAttacked(_monster);
		if(player->IsDead())
		{
			//monster는 field가 관리하는 객체이므로, field에서 delete해주지만,
			//player는 field가 관리하는 객체가 아니므로, field에서 delete해주지 않는다.
			player->PrintInfo();
			break;
		}
	}
}