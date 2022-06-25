#include <iostream>
using namespace std;

//포인터 실습

struct StatInfo
{
	int hp; //+0
	int attack; //+4
	int defence; //+8
};

StatInfo CreatePlayer();
void CreateMonster(StatInfo* info);
void EnterLobby();
//플레이어 승리시 true, 패배시 false
bool StatStartBattle(StatInfo* player, StatInfo* monster);

int main() 
{
	EnterLobby();
}

void EnterLobby() {
	cout << "로비에 입장했습니다." << endl;

	StatInfo player;
	player.hp = 0xbbbbbbbb;
	player.attack = 0xbbbbbbbb;
	player.defence = 0xbbbbbbbb;

	player = CreatePlayer();

	StatInfo monster;
	monster.hp = 0xbbbbbbbb;
	monster.attack = 0xbbbbbbbb;
	monster.defence = 0xbbbbbbbb;

	CreateMonster(&monster);

	bool victory = StatStartBattle(&player, &monster);

	if (victory)
		cout << "승리" << endl;
	else
		cout << "패배" << endl;
}

//임시 변수를 선언하고 그 값을 복사해주는 과정에서
//많은 어셈블리 코드들이 생성이 되었다.
StatInfo CreatePlayer() 
{
	StatInfo ret;

	cout << "플레이어 생성" << endl;

	ret.hp = 100;
	ret.attack = 10;
	ret.defence = 2;

	return ret;
}

//임시 변수를 선언할 필요 없이, 포인터를 통해서 변수에 직접 접근하여 값을 조작하기 때문에
//어셈블리코드가 적었을 뿐더러, 임시변수를 생성할 필요가 없어서 메모리 사용량 또한 적었다.
//결론적으로 훨씬 효율적이다.
void CreateMonster(StatInfo* info) 
{
	cout << "몬스터 생성" << endl;

	info->hp = 40;
	info->attack = 8;
	info->defence = 1;
}

bool StatStartBattle(StatInfo* player, StatInfo* monster)
{
	while (true) {
		int damage = player->attack - monster->defence;
		if (damage < 0)
			damage = 0;

		monster->hp -= damage;
		if (monster->hp < 0)
			monster->hp = 0;

		cout << "몬스터 HP : " << monster->hp << endl;
		if (monster->hp == 0)
			return true;

		damage = monster->attack - player->defence;
		if (damage < 0)
			damage = 0;

		player->hp -= damage;
		if (player->hp < 0)
			player->hp = 0;

		cout << "플레이어 HP : " << player->hp << endl;
		if (player->hp == 0)
			return false;
	}
}