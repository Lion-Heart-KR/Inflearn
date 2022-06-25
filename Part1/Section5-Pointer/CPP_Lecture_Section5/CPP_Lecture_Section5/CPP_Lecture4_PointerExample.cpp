#include <iostream>
using namespace std;

//������ �ǽ�

struct StatInfo
{
	int hp; //+0
	int attack; //+4
	int defence; //+8
};

StatInfo CreatePlayer();
void CreateMonster(StatInfo* info);
void EnterLobby();
//�÷��̾� �¸��� true, �й�� false
bool StatStartBattle(StatInfo* player, StatInfo* monster);

int main() 
{
	EnterLobby();
}

void EnterLobby() {
	cout << "�κ� �����߽��ϴ�." << endl;

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
		cout << "�¸�" << endl;
	else
		cout << "�й�" << endl;
}

//�ӽ� ������ �����ϰ� �� ���� �������ִ� ��������
//���� ����� �ڵ���� ������ �Ǿ���.
StatInfo CreatePlayer() 
{
	StatInfo ret;

	cout << "�÷��̾� ����" << endl;

	ret.hp = 100;
	ret.attack = 10;
	ret.defence = 2;

	return ret;
}

//�ӽ� ������ ������ �ʿ� ����, �����͸� ���ؼ� ������ ���� �����Ͽ� ���� �����ϱ� ������
//������ڵ尡 ������ �Ӵ���, �ӽú����� ������ �ʿ䰡 ��� �޸� ��뷮 ���� ������.
//��������� �ξ� ȿ�����̴�.
void CreateMonster(StatInfo* info) 
{
	cout << "���� ����" << endl;

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

		cout << "���� HP : " << monster->hp << endl;
		if (monster->hp == 0)
			return true;

		damage = monster->attack - player->defence;
		if (damage < 0)
			damage = 0;

		player->hp -= damage;
		if (player->hp < 0)
			player->hp = 0;

		cout << "�÷��̾� HP : " << player->hp << endl;
		if (player->hp == 0)
			return false;
	}
}