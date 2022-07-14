#include <iostream>
using namespace std;

/// <summary>
/// �ݹ� �Լ�
/// -- � ��Ȳ�� �Ͼ�� �� ����� ȣ������!
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

//������ ����Ʈ���� Ư�� �������� �������� ã��ʹ�.
//�ٵ� ������ �ٲ� ���� �ִ�. -> ���ø��� ����Ѵ�.
//type T�� �Լ���ü�� �̿��Ѵ�.
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