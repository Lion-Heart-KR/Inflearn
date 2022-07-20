//#include <iostream>
//#include <vector>
//using namespace std;
//
//enum class ItemType
//{
//	None,
//	Armor,
//	Weapon,
//	Jewelry,
//	Consumable
//};
//
//enum class Rarity
//{
//	Common,
//	Rare,
//	Unique
//};
//
//class Item
//{
//public:
//	Item(){}
//	Item(int itemId, Rarity rarity, ItemType type) : _itemId(itemId), _rarity(rarity), _type(type) {}
//public:
//	int _itemId = 0;
//	Rarity _rarity = Rarity::Common;
//	ItemType _type = ItemType::None;
//
//};
//
//int main()
//{
//	vector<Item> v;
//	v.push_back(Item(1, Rarity::Common, ItemType::Weapon));
//	v.push_back(Item(2, Rarity::Common, ItemType::Consumable));
//	v.push_back(Item(3, Rarity::Rare, ItemType::Jewelry));
//	v.push_back(Item(4, Rarity::Rare, ItemType::Armor));
//	v.push_back(Item(5, Rarity::Unique, ItemType::Weapon));
//
//	//vector���� Ư�� ������ �����ϴ� �������� ã�����̴�
//	//find�� �̿��Ͽ�
//	//�׷��� find���� �Լ������ͳ� �Լ���ü�� ���ٽ�ó�� Ư�� ������ ���ڷ� �Ѱ���� �Ѵ�.
//	//��ư ���ٸ� �������
//	//[1] ĸó : �Լ���ü ���ο� ������ �����ϴ� ����� �����ϴ�.
//	// - �⺻ ĸó��� : ������(=) : default�̴�.
//	// - ���� ĸó��� : �������(&)
//	// - 
//	//
//
//
//	//Q1) ItemId�� �������� ã�ƺ���.
//	{
//		//A1-Functor
//		struct findItemById {
//			findItemById(int itemid) : _itemId(itemid) {}
//			bool operator()(Item& item)
//			{
//				return (item._itemId == _itemId);
//			}
//			int _itemId;
//		};
//
//		auto findIt = find_if(v.begin(), v.end(), findItemById(3));
//
//		if (findIt != v.end())
//			cout << "ID�� " << findIt->_itemId << "�� �������� ����� " << static_cast<int>(findIt->_rarity) << "�̰�, type �� " << static_cast<int>(findIt->_type) << "�Դϴ�." << endl;
//		else
//			cout << "�׷��� ���µ���" << endl;
//
//		//A1-Lambda
//		int _itemId = 3;
//
//		//���ٿ� ���� ������� ������� ��ü�� Ŭ����(closure)��� �Ѵ�.
//		auto lambdaExp = [_itemId](Item& item) {return item._itemId == _itemId; };
//		findIt = find_if(v.begin(), v.end(), lambdaExp);
//		if (findIt != v.end())
//			cout << "ID�� " << findIt->_itemId << "�� �������� ����� " << static_cast<int>(findIt->_rarity) << "�̰�, type �� " << static_cast<int>(findIt->_type) << "�Դϴ�." << endl;
//		else
//			cout << "�׷��� ���µ���" << endl;
//	}
//
//
//	//Q2 Rarity�� Rare, type�� Armor�� ���� ã�ƺ���.
//	{
//		Rarity _rarity = Rarity::Rare;
//		ItemType _type = ItemType::Armor;
//		auto findByRarityOverRare = [_rarity, _type](Item& item) {return (item._rarity == _rarity) && (item._type == _type); };
//
//		//���ٽ��� ������ ���� ����, �ٷ� ���൵ �ȴ�.
//		//auto findItByRarity = find_if(v.begin(), v.end(), findByRarityOverRare);
//		auto findItByRarity = find_if(v.begin(), v.end(), [_rarity, _type](Item& item) {return (item._rarity == _rarity) && (item._type == _type); });
//		if (findItByRarity != v.end())
//			cout << "ID�� " << findItByRarity->_itemId << "�� �������� ����� " << static_cast<int>(findItByRarity->_rarity) << "�̰�, type �� " << static_cast<int>(findItByRarity->_type) << "�Դϴ�." << endl;
//		else
//			cout << "�׷��� ���µ���" << endl;
//	}
//
//	cout << "ĸó���" << endl;
//	//Q3 ��������� ����.
//	//A1-Lambda
//	{
//		int _itemId = 3;
//
//		//�̰Ŵ� �⺻����̴�. 
//		auto lambdaExp1 = [_itemId](Item& item) {return item._itemId == _itemId; };
//
//		//�Ʒ�����, ���ٰ� ������� ĸó�� ����ϰ� �ִ�.
//		auto lambdaExp2 = [&_itemId](Item& item) {return item._itemId == _itemId; };
//
//		//���⼭ _itemId�� ���� �ٲ��� ����.
//		_itemId = 10;
//
//		//�������� �̿��ϴ� �⺻ ĸó���� ItemId���� 3�� Item�� ã���ش�.
//		auto findIt = find_if(v.begin(), v.end(), lambdaExp1);
//		if (findIt != v.end())
//			cout << "ID�� " << findIt->_itemId << "�� �������� ����� " << static_cast<int>(findIt->_rarity) << "�̰�, type �� " << static_cast<int>(findIt->_type) << "�Դϴ�." << endl;
//		else
//			cout << "�׷��� ���µ���" << endl;
//
//		//��������� ĸó��带 ����ϸ� ItemId���� 10�� Item�� ã���ش�.
//		findIt = find_if(v.begin(), v.end(), lambdaExp2);
//		if (findIt != v.end())
//			cout << "ID�� " << findIt->_itemId << "�� �������� ����� " << static_cast<int>(findIt->_rarity) << "�̰�, type �� " << static_cast<int>(findIt->_type) << "�Դϴ�." << endl;
//		else
//			cout << "�׷��� ���µ���" << endl;
//	}
//
//	//�������� ĸó��带 ������ ���� �ִ�.
//	int _itemId = 1;
//	Rarity _rarity = Rarity::Rare;
//
//	//�̷���,, _itemId�� ���� ���, _rarity�� �� ����̴�.
//	//�������� ���ؼ�, ���ٽ� �ȿ��� � ������ ���Ǵ��� ��� �������ִ� ���� �����Ѵ�.
//	auto lambdaExp = [=](Item& item) {return (item._itemId == _itemId) && (item._rarity == _rarity); }; //�̷��� =�� �ᵵ �Ǵµ�
//	auto lambdaExp = [&_itemId, _rarity](Item& item) {return (item._itemId == _itemId) && (item._rarity == _rarity); }; //�̰� ������ ���鿡�� ���� �̸�����.
//
//	
//	return 0;
//}