//#include <iostream>
//using namespace std;
//
//class Item
//{
//public:
//	Item() : _itemId(0), _rarity(0), _ownerId(0)
//	{
//
//	}
//
//public:
//	int _itemId; //아이템 ID
//	int _rarity; //희귀도
//	int _ownerId; //소지자 ID
//};
//
////아이템을 owner ID로 찾는 함수
//bool isOwnerItem(Item* item, int ownerId)
//{
//	return (item->_ownerId == ownerId);
//}
//
////아이템을 희귀도로 찾는 함수
//bool isRareItem(Item* item, int rarity)
//{
//	return (item->_rarity >= rarity);
//}
//
//typedef bool(*Selector)(Item*, int);
//
////함수 포인터를 매개변수로 넘겨줘서 사용하는 방법
////아래의 방법은 함수의 시그니처가 동일한 경우에만 사용할 수 있어서 범용성이 떨어진다.
//Item* findItem(Item items[], int itemCount, Selector s, int value)
//{
//	for (int i = 0; i < itemCount; i++)
//	{
//		Item* item = &items[i];
//		if (s(item, value))
//			return item;
//	}
//	return nullptr;
//}
//
////지금까지 알아본 방법으로는 함수 포인터로 정적 함수, 전역함수를 담을 수 있었다.
////객체의 멤버 함수를 담을 방법은 없다.
////이제 객체의 멤버 함수를 담는 방법을 Araboza
//
//class Knight
//{
//public:
//	int GetHp()
//	{
//		return _hp;
//	}
//	void AddHp(int hp)
//	{
//		_hp += hp;
//	}
//public:
//	int _hp = 100;
//};
//
////Knight객체의 함수를 담는 함수 포인터 자료형을 선언하는 방법
//typedef int(Knight::* KnightFunction1)();
//typedef void(Knight::* KnightFunction2)(int);
//
////이렇게 하면, 20칸 짜리의 int 배열을 Array라는 자료형으로 사용할 수 있게 된다. 신기하다 왜 되는거냐
//typedef int Array[20];
//
//int main()
//{
//	Knight k1;
//
//	//할당 방법 : 객체의 멤버함수의 경우 항상 &연산자를 붙여줘야 한다.
//	KnightFunction1 fp1 = &Knight::GetHp;
//	KnightFunction2 fp2 = &Knight::AddHp;
//
//	//호출 방법 : 마찬가지로 * 연산자를 붙여줘야한다.
//	cout << (k1.*fp1)() << endl;
//	(k1.*fp2)(30);
//	cout << (k1.*fp1)() << endl;
//
//	//포인터 변수인 경우
//	//그냥 fxxking 헷갈린다.
//	Knight* k2 = new Knight;
//	cout << (k2->*fp1)() << endl;
//	delete k2;
//
//	Array a = {};
//	a[10]=10;
//	cout << a[10] << endl;
//
//	return 0;
//}