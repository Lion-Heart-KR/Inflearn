#include <iostream>
using namespace std;

/// <summary>
/// 콜백 함수
/// -- 어떤 상황이 일어나면 이 기능을 호출해줘!
/// </summary>
/// <returns></returns>

class Item
{
public:
    int _ItemId;
    int _rarity;
    int _ownerId;
};

class FindByOwnerId
{
public:
    FindByOwnerId(int ownerId) : _ownerId(ownerId) {}
    bool operator()(const Item* item)
    {
        return (item->_ownerId == _ownerId);
    }
public:
    int _ownerId;
};

class FindByRarity
{
public:
    FindByRarity(int rarity) : _rarity(rarity) {}
    bool operator()(const Item* item)
    {
        return (item->_rarity == _rarity);
    }
public:
    int _rarity;
};

class FindByItemId
{
public:
    FindByItemId(int ItemId) : _ItemId(ItemId) {}
    bool operator()(const Item* item)
    {
        return (item->_ItemId == _ItemId);
    }
public:
    int _ItemId;
};

//아이템 리스트에서 특정 조건으로 아이템을 찾고싶다.
//근데 조건은 바뀔 수도 있다. -> 템플릿을 사용한다.
//type T는 함수객체를 이용한다.
template<typename T>
Item* FindItem(Item items[], int itemCount, T selector)
{
    for (int i = 0; i < itemCount; i++)
    {
        Item* item = &items[i];
        if (selector(item))
            return item;
    }
    return nullptr;
}

int main()
{
    Item items[10];
    items[3]._ItemId = 100;
    items[9]._ownerId = 1014;
    items[7]._rarity = 3;

    FindByItemId functor1(100);
    FindByOwnerId functor2(1014);
    FindByRarity functor3(4);

    Item* res = FindItem(items, 10, functor1);
    res = FindItem(items, 10, functor2);
    res = FindItem(items, 10, functor3);


    return 0;
}