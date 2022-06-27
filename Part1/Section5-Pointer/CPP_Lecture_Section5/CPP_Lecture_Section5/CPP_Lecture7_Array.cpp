//#include <iostream>
//using namespace std;
//
////오늘의 주제 : 배열
////동일한 타입의 변수를 연속해서 담을 수 있는 공간
//
//struct StatInfo {
//	int hp=0xaaaaaaaa;
//	int attack=0xbbbbbbbb;
//	int defence=0xdddddddd;
//};
//
//int main()
//{
//	//몬스터가 최대 1만마리!
//	/*StatInfo monster1;
//	StatInfo mosnter2;
//	StatInfo mosnter3;
//	StatInfo mosnter4;*/
//	//...이렇게는 못한다.
//
//	//배열 선언 방법
//	//TYPE 이름[개수];
//
//	//배열의 크기는 상수여야한다. (VC컴파일러기준)
//	//int ArraySize = 10; // 이건 안되고
//	const int ArraySize = 10; // 이건됨
//	StatInfo monsters[ArraySize];
//
//	//배열의 이름은 배열의 첫 원소의 주소값이다.
//	//monsters == &monsters[0]
//
//	auto WhoAmI = monsters;
//	//배열의 시작위치를 가리킨다.
//
//	StatInfo* monster_0 = monsters;
//	monster_0->hp = 200;
//	monster_0->attack = 20;
//	monster_0->defence = 10;
//
//	//포인터의 덧셈 : StatInfo 타입 크기만큼 이동한다.
//	StatInfo* monster_1 = monsters + 1;
//	monster_1->hp = 100;
//	monster_1->attack = 10;
//	monster_1->defence = 5;
//
//	StatInfo& monster_2 = *(monsters + 2);
//	monster_2.hp = 150;
//	monster_2.attack = 15;
//	monster_2.defence = 10;
//
//	StatInfo temp = *(monsters + 2);
//	temp.hp = 150;
//	temp.attack = 15;
//	temp.defence = 10;
//
//	/*cout << monsters << endl;
//	cout << &monsters[0] << endl;*/
//
//	for (int i = 0; i < ArraySize; i++) {
//		StatInfo& monster = *(monsters + i);
//		monster.hp = 100*(i+1);
//		monster.attack = 10*(i+1);
//		monster.defence = 13*(i+1);
//	}
//
//	//배열인덱스를 사용하여 배열을 다루는 방법
//	for (int i = 0; i < ArraySize; i++) {
//		monsters[i].hp = 100 * (i + 1);
//		monsters[i].attack = 10 * (i + 1);
//		monsters[i].defence = i + 1;
//	}
//
//	//배열 초기화 문법
//	int numbers1[5] = { }; //모두 0으로 셋팅함.
//	int numbers2[5] = { 2 }; //첫 원소만 2, 나머지는 0
//	int numbers3[10] = { 1,2,3,4,5 }; //앞 5개의 원소는 1,2,3,4,5 / 나머지는 0
//	int numbers4[] = { 1,2,3,4,5,6,7,8,9,9,321,4,1,25,7,4,543,6,325 }; //데이터 개수만큼 자동으로 배열의 크기가 정해진다.
//
//	char helloString[] = "HelloWorld";
//	cout << helloString << endl;
//
//	return 0;
//}