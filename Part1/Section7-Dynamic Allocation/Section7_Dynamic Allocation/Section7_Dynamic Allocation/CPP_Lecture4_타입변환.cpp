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
//		//실제로 스택에 아이템이 100개 존재함 -> 100 * 4104byte를 할당해줘야함 -> 메모리 낭비
//		//Item items1[100] = {};
//
//		////실제로 스택에 아이템이 존재하진 않음, Item 타입의 객체를 담을 수 있는 포인터변수만 100개 선언한 것. 4or8 * 100 byte만 차지하고 있음
//		////메모리를 유동적으로, 효율적으로 관리할 수 있다.
//		//Item* items2[100] = {};
//
//		////사용 하려면
//		//for (int i = 0; i < 100; i++)
//		//	items2[i] = new Item;
//		//
//		//for (int i = 0; i < 100; i++)
//		//	delete items2[i];
//	}
//
//	//연관성이 없는 클래스 사이의 포인터 변환
//	//{
//	//	Item* item = new Item;
//	//	Knight* knight = (Knight*)item;
//	//	//암시적으로는 안됨
//	//	//명시적으로는 가능
//
//	//	delete item;
//	//}
//
//	////자식->부모 변환
//	//{
//	//	Item* item = new Item;
//	//	Weapon* weapon = (Weapon*)item;
//
//	//	//item클래스에는 _damage 변수가 없다.
//	//	//따라서 아래의 코드는 메모리를 초과하여 접근하는 일이다.
//	//	weapon->_damage = 10;
//
//	//	delete item;
//	//}
//
//	////부모->자식 변환
//	//{
//	//	Weapon* weapon = new Weapon;
//
//	//	//암시적으로도 가능하다.
//	//	Item* item = weapon;
//
//	//	delete weapon;
//	//}
//
//	Item* inventory[20] = {};
//	srand((unsigned int)time(nullptr));
//
//	//명시적으로 타입변환을 하지 않는게 좋을 것 같다.
//	//하지만 코드의 다형성을 활용하기위해 어쩔수 없이 하는 경우가 생긴다.
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
//		//★★★★★★★★★★★★★★★★★★★
//		//이렇게 delete를 해 줄 때 ★중요한★ 것은
//		// Item의 소멸자가 가상함수가 아니라면, Item객체의 소멸자만 호출될 뿐, 자식객체의 소멸자는 호출되지 않게 되고, 메모리 누수로 이어진다.
//		// 따라서, 상속관계가 있을 때는, 상속관계의 최상위 클래스의 소멸자에 virtual을 붙여줘야 한다.
//		// 최상위 클래스에만 붙여주면, 나머지 자식 클래스는 자동으로 가상함수가 된다.
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