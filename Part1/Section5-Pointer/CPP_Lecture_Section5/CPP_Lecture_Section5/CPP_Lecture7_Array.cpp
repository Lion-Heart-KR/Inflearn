//#include <iostream>
//using namespace std;
//
////������ ���� : �迭
////������ Ÿ���� ������ �����ؼ� ���� �� �ִ� ����
//
//struct StatInfo {
//	int hp=0xaaaaaaaa;
//	int attack=0xbbbbbbbb;
//	int defence=0xdddddddd;
//};
//
//int main()
//{
//	//���Ͱ� �ִ� 1������!
//	/*StatInfo monster1;
//	StatInfo mosnter2;
//	StatInfo mosnter3;
//	StatInfo mosnter4;*/
//	//...�̷��Դ� ���Ѵ�.
//
//	//�迭 ���� ���
//	//TYPE �̸�[����];
//
//	//�迭�� ũ��� ��������Ѵ�. (VC�����Ϸ�����)
//	//int ArraySize = 10; // �̰� �ȵǰ�
//	const int ArraySize = 10; // �̰ǵ�
//	StatInfo monsters[ArraySize];
//
//	//�迭�� �̸��� �迭�� ù ������ �ּҰ��̴�.
//	//monsters == &monsters[0]
//
//	auto WhoAmI = monsters;
//	//�迭�� ������ġ�� ����Ų��.
//
//	StatInfo* monster_0 = monsters;
//	monster_0->hp = 200;
//	monster_0->attack = 20;
//	monster_0->defence = 10;
//
//	//�������� ���� : StatInfo Ÿ�� ũ�⸸ŭ �̵��Ѵ�.
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
//	//�迭�ε����� ����Ͽ� �迭�� �ٷ�� ���
//	for (int i = 0; i < ArraySize; i++) {
//		monsters[i].hp = 100 * (i + 1);
//		monsters[i].attack = 10 * (i + 1);
//		monsters[i].defence = i + 1;
//	}
//
//	//�迭 �ʱ�ȭ ����
//	int numbers1[5] = { }; //��� 0���� ������.
//	int numbers2[5] = { 2 }; //ù ���Ҹ� 2, �������� 0
//	int numbers3[10] = { 1,2,3,4,5 }; //�� 5���� ���Ҵ� 1,2,3,4,5 / �������� 0
//	int numbers4[] = { 1,2,3,4,5,6,7,8,9,9,321,4,1,25,7,4,543,6,325 }; //������ ������ŭ �ڵ����� �迭�� ũ�Ⱑ ��������.
//
//	char helloString[] = "HelloWorld";
//	cout << helloString << endl;
//
//	return 0;
//}