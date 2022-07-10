//#include <iostream>
//
//using namespace std;
//
///// <summary>
///// *new/delete
///// - C++���� �߰��Ǿ���.
///// - malloc/free�� ������. new/delete�� �����ڴ�(operator)
///// 
///// *new[] / delete[]
///// - new/malloc �� ���ؼ� ���� �ѵ�, �迭�� ���� N���� �����͸� ���ÿ� �Ҵ��� �� ����Ѵ�.
///// 
///// * malloc/free vs new/delete
///// - ��� ���Ǽ� : new/delete�� ��
///// - Ÿ�Կ� �������, Ư���� ũ���� �޸� ������ �Ҵ� �ޱ� ���ؼ��� malloc/free�� ����� �� �ۿ� ����.
///// - ���� �ٺ����� ���̴�, new/delete�� ���� Ÿ���� Ŭ������ ��� �����ڿ� �Ҹ��ڸ� ȣ�����ش�.
///// - malloc/free�� ������ �Ҹ��ڸ� ȣ�������� �ʴ´�.
///// - new/delete�� ��ü����� �� �߾�︮�� �����̴�.
///// </summary>
///// <returns></returns>
//
//class Monster
//{
//public:
//	Monster()
//	{
//		cout << "Monster()" << endl;
//	}
//
//	~Monster()
//	{
//		cout << "~Monsters()" << endl;
//	}
//public:
//	int _hp;
//	int _x;
//	int _y;
//};
//
//int main()
//{
//	//malloc�� free�� ������ ����.
//	//�����Ҵ翡���� ���״� �״�� �߻��Ѵ�.
//	Monster* m1 = new Monster;
//	m1->_hp = 100;
//	m1->_x = 2;
//	m1->_y = 3;
//	delete m1;
//
//	//��ü�� ������ ����� ���� �� new[]/delete[]
//	Monster* monsters = new Monster[5];
//	monsters[1]._hp = 200;
//
//	Monster* m2 = monsters + 1;
//	cout << m2->_hp << endl;
//
//	//�Ҹ��ڰ� 5�� ȣ���
//	delete[] monsters;
//
//	int* i = new int;
//	*i = 3;
//	cout << *i << endl;
//	delete i;
//
//	////malloc, free�� ������, �Ҹ��ڸ� ȣ������ �ʴ´�.
//	//Monster* m1 = (Monster*)malloc(sizeof(Monster));
//	//free(m1);
//
//	////new, delete�� �����ڿ� �Ҹ��ڸ� ȣ�����ش�.
//	//Monster* m2 = new Monster;
//	//delete m2;
//
//
//
//	return 0;
//}