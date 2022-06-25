#include <iostream>
using namespace std;

//����ü
struct ObjectInfo {
	short type; //2
	int attack; //1
	int hp; //4
	int defence; //4
};

ObjectInfo playerInfo;
ObjectInfo monsterInfo;

enum playerTypes {Knight=1, Archer, Mage};
enum monsterTypes {Slime=1, Orc, Skeleton};


void EnterLobby();
void SelectPlayer();
void EnterField();
void createRandomMonster();
void EnterBattle();

int main() {
	srand(time(0));
	EnterLobby();
	return 0;
}

void EnterLobby() 
{
	while (true) 
	{
		cout << "--------------------" << endl;
		cout << "�κ� �����߽��ϴ�!" << endl;
		cout << "--------------------" << endl;

		//�÷��̾� ���� ����
		SelectPlayer();

		cout << "-------------------------" << endl;
		cout << "(1)�ʵ� ���� (2)���� ����" << endl;
		cout << "-------------------------" << endl;

		int input;
		cin >> input;

		if (input == 1) {
			EnterField();
		}
		else {
			return;
		}
	}
}

void SelectPlayer() 
{
	while (true) {
		cout << "--------------------" << endl;
		cout << "������ ����ּ���!" << endl;
		cout << "(1)��� (2)�ü� (3)����" << endl;
		cout << ">";

		cin >> playerInfo.type;

		if (playerInfo.type == Knight) {
			cout << "��������... !" << endl;
			playerInfo.hp = 150;
			playerInfo.attack = 10;
			playerInfo.defence = 5;
			break;
		}
		else if (playerInfo.type == Archer) {
			cout << "�ü�������... !" << endl;
			playerInfo.hp = 100;
			playerInfo.attack = 15;
			playerInfo.defence = 3;
			break;
		}
		else if (playerInfo.type == Mage) {
			cout << "���������... !" << endl;
			playerInfo.hp = 80;
			playerInfo.attack = 25;
			playerInfo.defence = 0;
			break;
		}
	}
}

void EnterField() 
{
	while (true)
	{
		cout << "--------------------" << endl;
		cout << "�ʵ忡 �����߽��ϴ�!" << endl;
		cout << "--------------------" << endl;

		cout << "[Player] HP : " << playerInfo.hp << " / ATT : " << playerInfo.attack << " / DEF : " << playerInfo.defence << endl;

		createRandomMonster();

		cout << "--------------------" << endl;
		cout << "(1)���� (2)����" << endl;
		cout << ">";

		int input;
		cin >> input;

		if (input == 1) {
			EnterBattle();
			if (playerInfo.hp == 0)
				return;
		}
		else {
			return;
		}
	}
}

void createRandomMonster() 
{
	//1���� 3������ ���ڸ� �����ϰ� ����

	//���� �õ� ����
	monsterInfo.type = rand() % 3 + 1;

	switch (monsterInfo.type)
	{
	case Slime:
		cout << "������ ������...!(HP : 15 / ATT : 5 / DEF : 0)" << endl;
		monsterInfo.hp = 15;
		monsterInfo.attack = 5;
		monsterInfo.defence = 0;
		break;
	case Orc:
		cout << "��ũ ������...!(HP : 40 / ATT : 10 / DEF : 3)" << endl;
		monsterInfo.hp = 40;
		monsterInfo.attack = 10;
		monsterInfo.defence = 3;
		break;
	case Skeleton:
		cout << "���̷��� ������...!(HP : 80 / ATT : 15 / DEF : 5)" << endl;
		monsterInfo.hp = 80;
		monsterInfo.attack = 15;
		monsterInfo.defence = 5;
		break;
	default:
		break;
	}
}

void EnterBattle() 
{
	while (true) {
		int damage = playerInfo.attack - monsterInfo.defence;
		if (damage < 0)
			damage = 0;

		monsterInfo.hp -= damage;
		if (monsterInfo.hp < 0)
			monsterInfo.hp = 0;

		cout << "���� ���� ü�� : " << monsterInfo.hp << endl;
		if (monsterInfo.hp == 0) {
			cout << "���͸� óġ�߽��ϴ�!" << endl;
			return;
		}

		damage = monsterInfo.attack - playerInfo.defence;
		if (damage < 0)
			damage = 0;

		playerInfo.hp -= damage;
		if (playerInfo.hp < 0)
			playerInfo.hp = 0;

		cout << "�÷��̾� ���� ü�� : " << playerInfo.hp << endl;
		if (playerInfo.hp == 0) {
			cout << "Game over" << endl;
			return;
		}
	}
}