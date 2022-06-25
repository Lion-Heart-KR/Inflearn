//#include <iostream>
//#include <string>
//using namespace std;
//
//int PlayerHP = 80;
//int PlayerAtt = 25;
//int PlayerDef = 0;
//
//int monsterHP;
//int monsterAtt;
//int monsterDef;
//string monsterName;
//
//void startGame() {
//	cout << "--------------------" << endl;
//	cout << "로비에 입장했습니다!" << endl;
//	cout << "--------------------" << endl;
//}
//
//int choiceCharacter() {
//	cout << "--------------------" << endl;
//	enum characters { KNIGHT = 1, ARCHOR, MAGICIAN };
//
//	int character;
//	bool flag = true;
//
//	while (flag) {
//		cout << "직업을 골라주세요!" << endl;
//		cout << "(1)기사 (2)궁수 (3)법사" << endl;
//		cout << ">";
//		cin >> character;
//
//		switch (character)
//		{
//		case KNIGHT:
//			cout << "기사 생성중...!" << endl;
//			flag = false;
//			break;
//		case ARCHOR:
//			cout << "궁수 생성중...!" << endl;
//			flag = false;
//			break;
//		case MAGICIAN:
//			cout << "법사 생성중...!" << endl;
//			flag = false;
//			break;
//		default:
//			cout << "그런 직업은 없다 이말이야!" << endl;
//			break;
//		}
//	}
//	cout << "--------------------" << endl;
//	return character;
//}
//
//int fieldEnterQuestion() {
//	int choice;
//	cout << "(1) 필드입장 (2) 게임 종료" << endl;
//	cout << ">";
//	cin >> choice;
//
//	return choice;
//}
//
//void createMonster() {
//	enum monsters { SKULL, SLIME };
//	srand(time(0));
//	int monsterID = rand() % 2;
//
//	switch (monsterID)
//	{
//	case SKULL:
//		monsterName = "해골";
//		monsterHP = 80;
//		monsterAtt = 15;
//		monsterDef = 5;
//		break;
//	case SLIME:
//		monsterName = "슬라임";
//		monsterHP = 15;
//		monsterAtt = 5;
//		monsterDef = 0;
//		break;
//	default:
//		break;
//	}
//
//	cout << monsterName << "생성중...!" << "(HP : " << monsterHP << "/ ATT : " << monsterAtt << "/ DEF : " << monsterDef << ")" << endl;
//}
//
//int BattleOrRun() {
//	int choice;
//	cout << "--------------------" << endl;
//	cout << "(1)전투 (2)도주" << endl;
//	cout << ">";
//	cin >> choice;
//
//	return choice;
//}
//
//void Battle() {
//	while (PlayerHP >= 0 && monsterHP >= 0) {
//		PlayerHP = PlayerHP - (monsterAtt - PlayerDef);
//		monsterHP = monsterHP - (PlayerAtt - monsterDef);
//
//		cout << "몬스터 남은 체력 : " << monsterHP << endl << "플레이어 남은 체력 : " << PlayerHP << endl;
//	}
//
//	if (PlayerHP <= 0) {
//		cout << "Game Over" << endl;
//	}
//	else {
//		cout << "몬스터를 처치했습니다!" << endl;
//	}
//}
//
//void Run() {
//	cout << "돔황챴습니다." << endl;
//}
//
//void enterField() {
//	while (true) {
//		cout << "--------------------" << endl;
//		cout << "필드에 입장했습니다." << endl;
//		cout << "--------------------" << endl;
//
//		cout << "[PLAYER] HP : " << PlayerHP << "/ ATT : " << PlayerAtt << "/ DEF : " << PlayerDef << endl;
//		createMonster();
//		cout << "--------------------" << endl;
//
//		if (BattleOrRun() == 1) {
//			Battle();
//		}
//		else {
//			Run();
//			break;
//		}
//	}
//
//	return;
//}
//
//int main()
//{
//	while (true) {
//		startGame();
//		int character = choiceCharacter();
//
//		if (fieldEnterQuestion() == 1) {
//			enterField();
//		}
//		else {
//			Run();
//		}
//	}
//}
