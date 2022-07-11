//#include <iostream>
//using namespace std;
//
//class Knight
//{
//public:
//public:
//	int _hp = 0;
//};
//
//class Item
//{
//public:
//	Item()
//	{
//		cout << "Item()" << endl;
//	}
//
//	Item(const Item& item)
//	{
//		cout << "Item(const Item& item)" << endl;
//	}
//
//	Item(int itemType) {
//		cout << "Item(int itemType)" << endl;
//	}
//
//	virtual ~Item() {
//		cout << "~Item()" << endl;
//	}
//
//public:
//	int _itemType = 0;
//	int _itemDbId = 0;
//	char _dummy[4096] = {};
//};
//
//enum ItemType {
//	IT_WEAPON = 1, IT_ARMOR
//};
//
//class Weapon : public Item
//{
//public:
//	Weapon() : Item(IT_WEAPON)
//	{
//		cout << "Weapon()" << endl;
//		_damage = rand() % 100;
//	}
//	~Weapon()
//	{
//		cout << "~Weapon()" << endl;
//	}
//
//public:
//	int _damage;
//};
//
//class Armor : public Item
//{
//public:
//	Armor() : Item(IT_ARMOR)
//	{
//		cout << "Armor()" << endl;
//		_defence = rand() % 50;
//	}
//	~Armor()
//	{
//		cout << "~Armor()" << endl;
//	}
//
//public:
//	int _defence;
//};
//
//void TestItem(Item item)
//{
//	cout << "TestItme(Item item)" << endl;
//}
//
//void TestItemPtr(Item* item)
//{
//	cout << "void TestItemPtr(Item* item)" << endl;
//}
//
//int main()
//{
//	{
//		//������ ���ÿ� �������� 100�� ������ -> 100 * 4104byte�� �Ҵ�������� -> �޸� ����
//		//Item items1[100] = {};
//
//		////������ ���ÿ� �������� �������� ����, Item Ÿ���� ��ü�� ���� �� �ִ� �����ͺ����� 100�� ������ ��. 4or8 * 100 byte�� �����ϰ� ����
//		////�޸𸮸� ����������, ȿ�������� ������ �� �ִ�.
//		//Item* items2[100] = {};
//
//		////��� �Ϸ���
//		//for (int i = 0; i < 100; i++)
//		//	items2[i] = new Item;
//		//
//		//for (int i = 0; i < 100; i++)
//		//	delete items2[i];
//	}
//
//	//�������� ���� Ŭ���� ������ ������ ��ȯ
//	//{
//	//	Item* item = new Item;
//	//	Knight* knight = (Knight*)item;
//	//	//�Ͻ������δ� �ȵ�
//	//	//��������δ� ����
//
//	//	delete item;
//	//}
//
//	////�ڽ�->�θ� ��ȯ
//	//{
//	//	Item* item = new Item;
//	//	Weapon* weapon = (Weapon*)item;
//
//	//	//itemŬ�������� _damage ������ ����.
//	//	//���� �Ʒ��� �ڵ�� �޸𸮸� �ʰ��Ͽ� �����ϴ� ���̴�.
//	//	weapon->_damage = 10;
//
//	//	delete item;
//	//}
//
//	////�θ�->�ڽ� ��ȯ
//	//{
//	//	Weapon* weapon = new Weapon;
//
//	//	//�Ͻ������ε� �����ϴ�.
//	//	Item* item = weapon;
//
//	//	delete weapon;
//	//}
//
//	Item* inventory[20] = {};
//	srand((unsigned int)time(nullptr));
//
//	//��������� Ÿ�Ժ�ȯ�� ���� �ʴ°� ���� �� ����.
//	//������ �ڵ��� �������� Ȱ���ϱ����� ��¿�� ���� �ϴ� ��찡 �����.
//
//		for (int i = 0; i < 20; i++)
//		{
//			int randValue = rand() % 2 + 1;
//			switch (randValue)
//			{
//			case IT_WEAPON:
//				inventory[i] = new Weapon;
//				cout << "Weapon Damage : " << ((Weapon*)inventory[i])->_damage << endl;
//				break;
//			case IT_ARMOR:
//				inventory[i] = new Armor;
//				cout << "Armor defence : " << ((Armor*)inventory[i])->_defence << endl;
//				break;
//			default:
//				break;
//			}
//			cout << "-----------------------------" << endl;
//		}
//
//	/*for (int i = 0; i < 20; i++)
//		delete inventory[i];*/
//
//		//�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�
//		//�̷��� delete�� �� �� �� ���߿��ѡ� ����
//		// Item�� �Ҹ��ڰ� �����Լ��� �ƴ϶��, Item��ü�� �Ҹ��ڸ� ȣ��� ��, �ڽİ�ü�� �Ҹ��ڴ� ȣ����� �ʰ� �ǰ�, �޸� ������ �̾�����.
//		// ����, ��Ӱ��谡 ���� ����, ��Ӱ����� �ֻ��� Ŭ������ �Ҹ��ڿ� virtual�� �ٿ���� �Ѵ�.
//		// �ֻ��� Ŭ�������� �ٿ��ָ�, ������ �ڽ� Ŭ������ �ڵ����� �����Լ��� �ȴ�.
//	{
//
//		Item item1;
//		Item* item2 = new Item;
//
//		TestItem(item1);
//		TestItem(*item2);
//
//		TestItemPtr(&item1);
//		TestItemPtr(item2);
//
//		delete item2;
//	}
//	return 0;
//}