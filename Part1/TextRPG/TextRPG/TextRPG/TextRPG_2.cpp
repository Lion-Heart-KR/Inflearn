//#include <iostream>
//using namespace std;
//
//// main
//// - EnterLobby
//// --CreatePlayer
//// --EnterGame
//// ---CreateMonsters
//// ---EnterBattle
////
//
//enum PlayerType {
//	PT_Knight=1,
//	PT_Archer,
//	PT_Mage
//};
//
//enum MonsterType {
//	MT_Slime=1,
//	MT_Orc,
//	MT_Skeleton
//};
//
//struct StatInfo {
//	int hp = 0;
//	int attack = 0;
//	int defence = 0;
//};
//
//void EnterLobby();
//void PrintMSG(const char* msg);
//void CreatePlayer(StatInfo* info);
//void PrintStatInfo(const char* name, const StatInfo& info);
//void EnterGame(StatInfo* info);
//void CreateMonsters(StatInfo monstersInfo[], int MONSTER_COUNT);
//bool EnterBattle(StatInfo* player, StatInfo* monster);
//
//int main() 
//{
//	srand(unsigned(time(0)));
//	EnterLobby();
//	return 0;
//}
//
//void EnterLobby()
//{
//	while (true) {
//		PrintMSG("로비에 입장했습니다.");
//
//		//Create Player
//		//특정함수에서 만든 변수를 포인터로 다른 함수에 넘겨주는 것은 좋지 않은데
//		//이 경우에는 이 함수가 끝나면, 다른 어떤 곳에서도 이 값을 필요로 하지 않으므로, 문제의 여지가 없다.
//		StatInfo playerInfo;
//		CreatePlayer(&playerInfo);
//		PrintStatInfo("Player", playerInfo);
//		EnterGame(&playerInfo);
//	}
//}
//
//void PrintMSG(const char* msg) {
//	cout << "------------------------" << endl;
//	cout << msg << endl;
//	cout << "------------------------" << endl;
//}
//
//void CreatePlayer(StatInfo* info) {
//	bool flag = true;
//	while (flag) {
//		PrintMSG("캐릭터 생성창");
//		PrintMSG("[1]기사 [2]궁수 [3]마법사");
//		cout << ">";
//
//		int input;
//		cin >> input;
//
//		switch (input)
//		{
//		case PT_Knight:
//			info->hp = 100;
//			info->attack = 15;
//			info->defence = 10;
//			flag = false;
//			break;
//		case PT_Archer:
//			info->hp = 80;
//			info->attack = 20;
//			info->defence = 5;
//			flag = false;
//			break;
//		case PT_Mage:
//			info->hp = 50;
//			info->attack = 25;
//			info->defence = 0;
//			flag = false;
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//void PrintStatInfo(const char* name, const StatInfo& info)
//{
//	cout << "--------------------------------" << endl;
//	cout << name << " : HP = " << info.hp << " Attack = " << info.attack << " Defence = " << info.defence << endl;
//	cout << "--------------------------------" << endl;
//}
//
//void EnterGame(StatInfo* info)
//{
//	const int MONSTER_COUNT = 2;
//	PrintMSG("게임에 입장했습니다.");
//
//	while (true) {
//		StatInfo monstersInfo[MONSTER_COUNT];
//		CreateMonsters(monstersInfo, MONSTER_COUNT);
//
//		for (int i = 0; i < MONSTER_COUNT; i++) {
//			cout << i + 1 << ": " << endl;
//			PrintStatInfo("Monster", monstersInfo[i]);
//		}
//
//		PrintStatInfo("Player", *info);
//		PrintMSG("[1]전투 [2]전투 [3]도망");
//		int input;
//		cin >> input;
//		if (input == 1 || input == 2) {
//			bool victory = EnterBattle(info, &monstersInfo[input-1]);
//			if (victory == false)
//				break;
//		}
//		else {
//
//		}
//	}
//}
//
//void CreateMonsters(StatInfo monstersInfo[], int MONSTER_COUNT) 
//{
//	for (int i = 0; i < MONSTER_COUNT; i++){
//		int randomValue = rand() % 3 + 1;
//
//		switch (randomValue)
//		{
//		case MT_Slime:
//			monstersInfo[i].hp = 30;
//			monstersInfo[i].attack = 5;
//			monstersInfo[i].defence = 1;
//			break;
//		case MT_Orc:
//			monstersInfo[i].hp = 40;
//			monstersInfo[i].attack = 8;
//			monstersInfo[i].defence = 3;
//			break;
//		case MT_Skeleton:
//			monstersInfo[i].hp = 60;
//			monstersInfo[i].attack = 10;
//			monstersInfo[i].defence = 5;
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//bool EnterBattle(StatInfo* player, StatInfo* monster)
//{
//	while (true) {
//		int damage = player->attack - monster->defence;
//		if (damage < 0)
//			damage = 0;
//
//		monster->hp -= damage;
//		if (monster->hp < 0)
//			monster->hp = 0;
//
//		PrintStatInfo("Monster", *monster);
//
//		if (monster->hp == 0) {
//			PrintMSG("몬스터를 처치했습니다.");
//			return true;
//		}
//
//		damage = monster->attack - player->defence;
//		if (damage < 0)
//			damage = 0;
//
//		player->hp -= damage;
//		if (player->hp < 0)
//			player->hp = 0;
//
//		PrintStatInfo("Player", *player);
//
//		if (player->hp == 0)
//		{
//			PrintMSG("Game Over");
//			return false;
//		}
//	}
//}