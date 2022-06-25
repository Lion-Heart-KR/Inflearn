#include <iostream>
using namespace std;

//구조체
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
		cout << "로비에 입장했습니다!" << endl;
		cout << "--------------------" << endl;

		//플레이어 직업 선택
		SelectPlayer();

		cout << "-------------------------" << endl;
		cout << "(1)필드 입장 (2)게임 종료" << endl;
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
		cout << "직업을 골라주세요!" << endl;
		cout << "(1)기사 (2)궁수 (3)법사" << endl;
		cout << ">";

		cin >> playerInfo.type;

		if (playerInfo.type == Knight) {
			cout << "기사생성중... !" << endl;
			playerInfo.hp = 150;
			playerInfo.attack = 10;
			playerInfo.defence = 5;
			break;
		}
		else if (playerInfo.type == Archer) {
			cout << "궁수생성중... !" << endl;
			playerInfo.hp = 100;
			playerInfo.attack = 15;
			playerInfo.defence = 3;
			break;
		}
		else if (playerInfo.type == Mage) {
			cout << "법사생성중... !" << endl;
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
		cout << "필드에 입장했습니다!" << endl;
		cout << "--------------------" << endl;

		cout << "[Player] HP : " << playerInfo.hp << " / ATT : " << playerInfo.attack << " / DEF : " << playerInfo.defence << endl;

		createRandomMonster();

		cout << "--------------------" << endl;
		cout << "(1)전투 (2)도주" << endl;
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
	//1에서 3사이의 숫자를 랜덤하게 고르자

	//랜덤 시드 결정
	monsterInfo.type = rand() % 3 + 1;

	switch (monsterInfo.type)
	{
	case Slime:
		cout << "슬라임 생성중...!(HP : 15 / ATT : 5 / DEF : 0)" << endl;
		monsterInfo.hp = 15;
		monsterInfo.attack = 5;
		monsterInfo.defence = 0;
		break;
	case Orc:
		cout << "오크 생성중...!(HP : 40 / ATT : 10 / DEF : 3)" << endl;
		monsterInfo.hp = 40;
		monsterInfo.attack = 10;
		monsterInfo.defence = 3;
		break;
	case Skeleton:
		cout << "스켈레톤 생성중...!(HP : 80 / ATT : 15 / DEF : 5)" << endl;
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

		cout << "몬스터 남은 체력 : " << monsterInfo.hp << endl;
		if (monsterInfo.hp == 0) {
			cout << "몬스터를 처치했습니다!" << endl;
			return;
		}

		damage = monsterInfo.attack - playerInfo.defence;
		if (damage < 0)
			damage = 0;

		playerInfo.hp -= damage;
		if (playerInfo.hp < 0)
			playerInfo.hp = 0;

		cout << "플레이어 남은 체력 : " << playerInfo.hp << endl;
		if (playerInfo.hp == 0) {
			cout << "Game over" << endl;
			return;
		}
	}
}