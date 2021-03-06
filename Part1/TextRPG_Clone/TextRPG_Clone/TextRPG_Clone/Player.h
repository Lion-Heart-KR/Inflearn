#pragma once
#include "Creature.h"

enum PlayerType
{
	PT_KNIGHT = 1,
	PT_ARCHER = 2,
	PT_MAGE = 3
};

class Player : public Creature
{
public:
	Player(int playerType) : Creature(CT_PLAYER), _playerType(playerType)
	{

	}
	virtual ~Player(){}

	virtual void PrintInfo();

protected:
	int _playerType;
};

class Knight : public Player
{
public:
	Knight() : Player(PT_KNIGHT)
	{
		_hp = 150;
		_attack = 10;
		_defence = 5;
	}
	~Knight(){}
public:

};

class Archer : public Player
{
public:
	Archer() : Player(PT_ARCHER)
	{
		_hp = 100;
		_attack = 15;
		_defence = 3;
	}
public:

};

class Mage : public Player
{
public:
	Mage() : Player(PT_MAGE)
	{
		_hp = 80;
		_attack = 20;
		_defence = 2;
	}
public:

};