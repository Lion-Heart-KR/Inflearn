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
//	int _itemId; //������ ID
//	int _rarity; //��͵�
//	int _ownerId; //������ ID
//};
//
////�������� owner ID�� ã�� �Լ�
//bool isOwnerItem(Item* item, int ownerId)
//{
//	return (item->_ownerId == ownerId);
//}
//
////�������� ��͵��� ã�� �Լ�
//bool isRareItem(Item* item, int rarity)
//{
//	return (item->_rarity >= rarity);
//}
//
//typedef bool(*Selector)(Item*, int);
//
////�Լ� �����͸� �Ű������� �Ѱ��༭ ����ϴ� ���
////�Ʒ��� ����� �Լ��� �ñ״�ó�� ������ ��쿡�� ����� �� �־ ���뼺�� ��������.
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
////���ݱ��� �˾ƺ� ������δ� �Լ� �����ͷ� ���� �Լ�, �����Լ��� ���� �� �־���.
////��ü�� ��� �Լ��� ���� ����� ����.
////���� ��ü�� ��� �Լ��� ��� ����� Araboza
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
////Knight��ü�� �Լ��� ��� �Լ� ������ �ڷ����� �����ϴ� ���
//typedef int(Knight::* KnightFunction1)();
//typedef void(Knight::* KnightFunction2)(int);
//
////�̷��� �ϸ�, 20ĭ ¥���� int �迭�� Array��� �ڷ������� ����� �� �ְ� �ȴ�. �ű��ϴ� �� �Ǵ°ų�
//typedef int Array[20];
//
//int main()
//{
//	Knight k1;
//
//	//�Ҵ� ��� : ��ü�� ����Լ��� ��� �׻� &�����ڸ� �ٿ���� �Ѵ�.
//	KnightFunction1 fp1 = &Knight::GetHp;
//	KnightFunction2 fp2 = &Knight::AddHp;
//
//	//ȣ�� ��� : ���������� * �����ڸ� �ٿ�����Ѵ�.
//	cout << (k1.*fp1)() << endl;
//	(k1.*fp2)(30);
//	cout << (k1.*fp1)() << endl;
//
//	//������ ������ ���
//	//�׳� fxxking �򰥸���.
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