#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

/// <summary>
/// 스마트 포인터(smart pointer)
/// 
/// </summary>
/// <returns></returns>

class Knight
{
public:
	Knight() { cout << "knight 생성" << endl; }
	~Knight() { cout << "knight 소멸" << endl; }

	void Attack()
	{
		//if (_target) //shared pointer버전
		if(_target.expired() == false) //weak pointer버전. _target이 소멸되지 않았는지 확인하고
		{
			//shared ptr을 가져오는 과정을 거쳐서 사용한다.
			//조금 귀찮다.
			//여튼... 이게 왜 순환참조의 문제를 해결할 수 있는것인가?
			shared_ptr<Knight> _starget = _target.lock();
			_starget->_hp -= _damage;
			cout << "HP : " << _starget->_hp << endl;
		}
	}
public:
	int _hp = 100;
	int _damage = 10;
	//shared_ptr<Knight> _target = nullptr; //순환구조가 발생할 가능성이 있다면, weak_ptr을 이용한다.
	weak_ptr<Knight> _target;
	
};

class RefCountBlock
{
public:
	int _refCount = 1; //진짜로 이 객체를 참조하는 객체가 몇개인가
	int _weakCount = 1; //weakpointer 로 참조하는 객체가 몇개인가
};

template<typename T>
class SharedPtr
{
	//해당 포인터를 몇 개의 객체, 혹은 변수가 참고하고 있는지를 계속 추적한다.
	//그래서 아무도 포인터를 참조하지 않는 경우에만 delete 해준다.
public:
	SharedPtr() {}
	SharedPtr(T* ptr) : _ptr(ptr)
	{
		//인자로 받은게, 실제 존재하는 객체의 포인터라면, 본격적으로 블럭을 만들어서 관리를 해주겠다!
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

			//아무도 포인터를 참조하지 않는 경우 delete
			if (_block->_refCount == 0)
			{
				delete _ptr;
				delete _block; //weak ptr을 사용할 경우 이건 일단 삭제하지 않는다.
				cout << "delete ptr" << endl;
			}
		}
	}


public:
	//원본 객체의 포인터
	T* _ptr = nullptr;
	RefCountBlock* _block = nullptr;


};

int main()
{
	/*Knight* k1 = new Knight;
	Knight* k2 = new Knight;

	k1->_target = k2;*/

	//delete k2;
	//k2접속 종료
	//안전하게 삭제하기 위해서는
	//[1] k2의 포인터(이 경우는 _target)을 들고있는 모든 객체, 변수를 찾아서 nullptr로 바꿔줘야한다.
	//[2] k2의 포인터를 단 한 개의 객체라도 사용하고 있는 경우 k2를 소멸시킬 수 없게 한다.
	//=> 쌩포인터를 이용하면 해결 불가능 => 스마트 포인터를 사용해야한다. => 대부분 그렇게 한다.

	// 스마트 포인터 : 포인터를 알맞는 정책에 따라 관리하는 객체 (포인터를 래핑해서 사용)
	// shared_ptr(★★★), weak_ptr, unique_ptr


	//dead pointer access
	//k1->Attack();

	/*SharedPtr<Knight> k4;
	{
		SharedPtr<Knight> k3(new Knight);
		k4 = k3;
	}*/
	//SharedPtr<Knight> k2 = k1;
	//SharedPtr을 이용하면, delete를 해줄 필요가 없다.
	//스마트 포인터에서 알아서 delete를 해줘야하는 상황에서 알아서 해준다. delete를 하면 안되는 상황에서는 하지 않고...

	shared_ptr<Knight> k1 = make_shared<Knight>();
	{
		shared_ptr<Knight> k2 = make_shared<Knight>();
		k2->_target = k1;
		k1->_target = k2;
		//이 경우 어떠한 경우에도, 메모리가 해제되지 않는다.
		//k2의 메모리가 해제되기 위해서는, k2를 참조하는 객체가 없어야 한다.
		//k1의 메모리가 해제되기 위해서는, k1을 참조하는 객체가 없어야 한다.

		//소멸시키길 원한다면, k1->_target = nullptr, k2->_target=nullptr을 직접 넣어줘야한다.
		//여튼 shared_ptr은 순환문제가 발생한다.

	}

	//이 경우 k2는 중괄호를 벗어나면서 삭제되어야 하지만, 스마트포인터로 선언한 경우에, 메모리가 유지된다.

	k1->Attack();


	//객체를 참조하는 포인터가 유일해야 한다.
	unique_ptr<Knight> uptr = make_unique<Knight>();
	unique_ptr<Knight> uptr2 = uptr;




	return 0;
}