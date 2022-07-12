#include "Game.h"
#include "Field.h"
#include "Player.h"
#include <iostream>
using namespace std;

Game::Game() :_player(nullptr), _field(nullptr)
{

}

Game::~Game()
{
	if (_player != nullptr)
		delete _player;
	if (_field != nullptr)
		delete _field;
}

void Game::Init()
{
	_field = new Field;
}

void Game::Update()
{
	if (_player == nullptr)
		CreatePlayer();

	if (_player->IsDead())
	{
		_player->PrintInfo();
		delete _player;
		CreatePlayer();
	}
	_field->Update(_player);
}

void Game::CreatePlayer()
{
	while (true)
	{
		cout << "---------------------------------------------------" << endl;
		cout << "ĳ���͸� �������ּ���." << endl;
		cout << "1)���, 2)�ü�, 3)����" << endl;
		cout << ">";

		int input;
		cin >> input;

		if (input == PT_KNIGHT) {
			_player = new Knight;
			break;
		}
		else if (input == PT_ARCHER) {
			_player = new Archer;
			break;
		}
		else if (input == PT_MAGE) {
			_player = new Mage;
			break;
		}
	}
}