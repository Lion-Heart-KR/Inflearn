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
//	//vector에서 특정 조건을 만족하는 아이템을 찾을것이다
//	//find를 이용하여
//	//그런데 find에는 함수포인터나 함수객체나 람다식처럼 특정 조건을 인자로 넘겨줘야 한다.
//	//여튼 람다를 배워보자
//	//[1] 캡처 : 함수객체 내부에 변수를 저장하는 개념과 유사하다.
//	// - 기본 캡처모드 : 복사방식(=) : default이다.
//	// - 참조 캡처모드 : 참조방식(&)
//	// - 
//	//
//
//
//	//Q1) ItemId로 아이템을 찾아보자.
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
//			cout << "ID가 " << findIt->_itemId << "인 아이템의 등급은 " << static_cast<int>(findIt->_rarity) << "이고, type 은 " << static_cast<int>(findIt->_type) << "입니다." << endl;
//		else
//			cout << "그런거 없는데용" << endl;
//
//		//A1-Lambda
//		int _itemId = 3;
//
//		//람다에 의해 만들어진 실행시점 객체를 클로저(closure)라고 한다.
//		auto lambdaExp = [_itemId](Item& item) {return item._itemId == _itemId; };
//		findIt = find_if(v.begin(), v.end(), lambdaExp);
//		if (findIt != v.end())
//			cout << "ID가 " << findIt->_itemId << "인 아이템의 등급은 " << static_cast<int>(findIt->_rarity) << "이고, type 은 " << static_cast<int>(findIt->_type) << "입니다." << endl;
//		else
//			cout << "그런거 없는데용" << endl;
//	}
//
//
//	//Q2 Rarity가 Rare, type이 Armor인 것을 찾아보자.
//	{
//		Rarity _rarity = Rarity::Rare;
//		ItemType _type = ItemType::Armor;
//		auto findByRarityOverRare = [_rarity, _type](Item& item) {return (item._rarity == _rarity) && (item._type == _type); };
//
//		//람다식을 변수로 받지 말고, 바로 써줘도 된다.
//		//auto findItByRarity = find_if(v.begin(), v.end(), findByRarityOverRare);
//		auto findItByRarity = find_if(v.begin(), v.end(), [_rarity, _type](Item& item) {return (item._rarity == _rarity) && (item._type == _type); });
//		if (findItByRarity != v.end())
//			cout << "ID가 " << findItByRarity->_itemId << "인 아이템의 등급은 " << static_cast<int>(findItByRarity->_rarity) << "이고, type 은 " << static_cast<int>(findItByRarity->_type) << "입니다." << endl;
//		else
//			cout << "그런거 없는데용" << endl;
//	}
//
//	cout << "캡처모드" << endl;
//	//Q3 참조방식을 보자.
//	//A1-Lambda
//	{
//		int _itemId = 3;
//
//		//이거는 기본모드이다. 
//		auto lambdaExp1 = [_itemId](Item& item) {return item._itemId == _itemId; };
//
//		//아래에서, 람다가 참조방식 캡처를 사용하고 있다.
//		auto lambdaExp2 = [&_itemId](Item& item) {return item._itemId == _itemId; };
//
//		//여기서 _itemId의 값을 바꿔줘 보자.
//		_itemId = 10;
//
//		//복사방식을 이용하는 기본 캡처모드는 ItemId값이 3인 Item을 찾아준다.
//		auto findIt = find_if(v.begin(), v.end(), lambdaExp1);
//		if (findIt != v.end())
//			cout << "ID가 " << findIt->_itemId << "인 아이템의 등급은 " << static_cast<int>(findIt->_rarity) << "이고, type 은 " << static_cast<int>(findIt->_type) << "입니다." << endl;
//		else
//			cout << "그런거 없는데용" << endl;
//
//		//참조방식의 캡처모드를 사용하면 ItemId값이 10인 Item을 찾아준다.
//		findIt = find_if(v.begin(), v.end(), lambdaExp2);
//		if (findIt != v.end())
//			cout << "ID가 " << findIt->_itemId << "인 아이템의 등급은 " << static_cast<int>(findIt->_rarity) << "이고, type 은 " << static_cast<int>(findIt->_type) << "입니다." << endl;
//		else
//			cout << "그런거 없는데용" << endl;
//	}
//
//	//변수마다 캡처모드를 지정할 수도 있다.
//	int _itemId = 1;
//	Rarity _rarity = Rarity::Rare;
//
//	//이러면,, _itemId는 참조 방식, _rarity는 값 방식이다.
//	//가독성을 위해서, 람다식 안에서 어떤 변수가 사용되는지 모두 지정해주는 것을 권장한다.
//	auto lambdaExp = [=](Item& item) {return (item._itemId == _itemId) && (item._rarity == _rarity); }; //이렇게 =만 써도 되는데
//	auto lambdaExp = [&_itemId, _rarity](Item& item) {return (item._itemId == _itemId) && (item._rarity == _rarity); }; //이게 가독성 측면에서 좋다 이말이지.
//
//	
//	return 0;
//}