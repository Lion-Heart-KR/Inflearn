#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

/// <summary>
/// ����Ʈ ������(smart pointer)
/// 
/// </summary>
/// <returns></returns>

class Knight
{
public:
	Knight() { cout << "knight ����" << endl; }
	~Knight() { cout << "knight �Ҹ�" << endl; }

	void Attack()
	{
		//if (_target) //shared pointer����
		if(_target.expired() == false) //weak pointer����. _target�� �Ҹ���� �ʾҴ��� Ȯ���ϰ�
		{
			//shared ptr�� �������� ������ ���ļ� ����Ѵ�.
			//���� ������.
			//��ư... �̰� �� ��ȯ������ ������ �ذ��� �� �ִ°��ΰ�?
			shared_ptr<Knight> _starget = _target.lock();
			_starget->_hp -= _damage;
			cout << "HP : " << _starget->_hp << endl;
		}
	}
public:
	int _hp = 100;
	int _damage = 10;
	//shared_ptr<Knight> _target = nullptr; //��ȯ������ �߻��� ���ɼ��� �ִٸ�, weak_ptr�� �̿��Ѵ�.
	weak_ptr<Knight> _target;
	
};

class RefCountBlock
{
public:
	int _refCount = 1; //��¥�� �� ��ü�� �����ϴ� ��ü�� ��ΰ�
	int _weakCount = 1; //weakpointer �� �����ϴ� ��ü�� ��ΰ�
};

template<typename T>
class SharedPtr
{
	//�ش� �����͸� �� ���� ��ü, Ȥ�� ������ �����ϰ� �ִ����� ��� �����Ѵ�.
	//�׷��� �ƹ��� �����͸� �������� �ʴ� ��쿡�� delete ���ش�.
public:
	SharedPtr() {}
	SharedPtr(T* ptr) : _ptr(ptr)
	{
		//���ڷ� ������, ���� �����ϴ� ��ü�� �����Ͷ��, ���������� ���� ���� ������ ���ְڴ�!
		if (_ptr != nullptr)
		{
			_block = new RefCountBlock;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}
	SharedPtr(const SharedPtr& sptr) : _ptr(sptr), _block(sptr._block)
	{
		if (_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	void operator=(const SharedPtr& sptr)
	{
		_ptr = sptr;
		_block = sptr._block;
		if (_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}
	~SharedPtr()
	{
		if (_ptr != nullptr)
		{
			_block->_refCount--;
			cout << "RefCount : " << _block->_refCount << endl;

			//�ƹ��� �����͸� �������� �ʴ� ��� delete
			if (_block->_refCount == 0)
			{
				delete _ptr;
				delete _block; //weak ptr�� ����� ��� �̰� �ϴ� �������� �ʴ´�.
				cout << "delete ptr" << endl;
			}
		}
	}


public:
	//���� ��ü�� ������
	T* _ptr = nullptr;
	RefCountBlock* _block = nullptr;


};

int main()
{
	/*Knight* k1 = new Knight;
	Knight* k2 = new Knight;

	k1->_target = k2;*/

	//delete k2;
	//k2���� ����
	//�����ϰ� �����ϱ� ���ؼ���
	//[1] k2�� ������(�� ���� _target)�� ����ִ� ��� ��ü, ������ ã�Ƽ� nullptr�� �ٲ�����Ѵ�.
	//[2] k2�� �����͸� �� �� ���� ��ü�� ����ϰ� �ִ� ��� k2�� �Ҹ��ų �� ���� �Ѵ�.
	//=> �������͸� �̿��ϸ� �ذ� �Ұ��� => ����Ʈ �����͸� ����ؾ��Ѵ�. => ��κ� �׷��� �Ѵ�.

	// ����Ʈ ������ : �����͸� �˸´� ��å�� ���� �����ϴ� ��ü (�����͸� �����ؼ� ���)
	// shared_ptr(�ڡڡ�), weak_ptr, unique_ptr


	//dead pointer access
	//k1->Attack();

	/*SharedPtr<Knight> k4;
	{
		SharedPtr<Knight> k3(new Knight);
		k4 = k3;
	}*/
	//SharedPtr<Knight> k2 = k1;
	//SharedPtr�� �̿��ϸ�, delete�� ���� �ʿ䰡 ����.
	//����Ʈ �����Ϳ��� �˾Ƽ� delete�� ������ϴ� ��Ȳ���� �˾Ƽ� ���ش�. delete�� �ϸ� �ȵǴ� ��Ȳ������ ���� �ʰ�...

	shared_ptr<Knight> k1 = make_shared<Knight>();
	{
		shared_ptr<Knight> k2 = make_shared<Knight>();
		k2->_target = k1;
		k1->_target = k2;
		//�� ��� ��� ��쿡��, �޸𸮰� �������� �ʴ´�.
		//k2�� �޸𸮰� �����Ǳ� ���ؼ���, k2�� �����ϴ� ��ü�� ����� �Ѵ�.
		//k1�� �޸𸮰� �����Ǳ� ���ؼ���, k1�� �����ϴ� ��ü�� ����� �Ѵ�.

		//�Ҹ��Ű�� ���Ѵٸ�, k1->_target = nullptr, k2->_target=nullptr�� ���� �־�����Ѵ�.
		//��ư shared_ptr�� ��ȯ������ �߻��Ѵ�.

	}

	//�� ��� k2�� �߰�ȣ�� ����鼭 �����Ǿ�� ������, ����Ʈ�����ͷ� ������ ��쿡, �޸𸮰� �����ȴ�.

	k1->Attack();


	//��ü�� �����ϴ� �����Ͱ� �����ؾ� �Ѵ�.
	unique_ptr<Knight> uptr = make_unique<Knight>();
	unique_ptr<Knight> uptr2 = uptr;




	return 0;
}