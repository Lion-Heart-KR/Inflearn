//#include <iostream>
//#include <list>
//using namespace std;
//
//template <typename T>
//class Node
//{
//public:
//	T _data;
//	Node* _next; //가리키는 다음 자료형은 Node다. 이것만 있으면 단일 리스트
//	Node* _pre; //이것도 있으면, 이중 연결 리스트
//	//맨 처음, 맨 끝 노드를 연결하면 원형리스트
//};
//// Node [_data(4) _next(4/8] -> Node [_data(4) _next(4/8] -> Node [_data(4) _next(4/8] -> Node [_data(4) _next(4/8]
//
///// <summary>
///// 주제 : list
///// 
///// ※
///// [1] 리스트의 동작 원리
///// [2] 중간 삽입/삭제 O(1)
///// -- 그냥 아무 공간에 메모리를 할당하고, 앞, 뒤 노드를 연결해주면 된다.
///// -- 복사비용이 발생하지 않는다.
///// -- 아주 쉽게 가능함.
///// 
///// ※ 임의 접근이 안된다고 하긴 했는데 중간 삽입/삭제는 빠른 이유?
///// -- 50번 인덱스에 있는 데이터를 삭제하기 위해서는 50번 loop를 돌아서 50번 인덱스에 도착한 다음, 삽입/삭제를 해야한다.
///// -- 사실 빠르다는게, 위치를 찾아가는것은 논외로 하고, 찾은 후에 중간에 있는 값을 [삽입하거나 삭제하는 작업] 자체가 쉽다는 말이다.
///// -- 삭제하려는 대상을, 삽입하려는 위치를 찾는 것은 느리다.
///// 
///// [3] 처음/끝 삽입 삭제 O(1)
///// -- 이것도 노드 만들고, next노드를 기존의 첫 노드를 가리키게 하면 된다.
///// [4] 임의 접근 (list[i]) O(N)
///// -- bad
///// -- 첫 노드부터, i칸을 포인터를 타고 가야 list[i]를 구할 수 있다.
///// 
///// vector vs list
///// 1. vector  : 동적 배열, 공간이 부족하면 새로운 공간을 할당받고, 그 곳에 기존의 데이터를 복사해서 확장, 연속된 공간에 데이터가 존재함. 
///// 2. list
///// - 단일 / 이중 / 원형
///// - [1] [2] [3] [4] [5] 이 값들이 연속된 공간에 존재할 필요가 없다. 그냥 포인터로 각 노드를 이어주면 된다.
///// - [1] ↔ [2] ↔ [3] ↔ [4] ↔ [5] ↔ [_Myhead : end()] ↔ [1] ↔ [2] ...
///// - C++의 list는 이중 원형 리스트로 구현되어있다.
///// 
///// ※특징
///// [1] 
///// </summary>
///// <returns></returns>
//
//int main()
//{
//	//declare List
//	list<int> li;
//
//	for(int i = 0; i<100; i++)
//		li.push_back(i);
//
//	//벡터와는 달리 list는 push_front가 존재함
//	//li.push_front(10);
//
//	//size
//	list<int>::size_type size = li.size();
//
//	//capacity는 없음.
//	//아무 공간 잡아서 이어주기만 하면 됨. 연속된 공간일 필요가 없기에 capa는 필요치 않음
//
//	//맨 앞, 맨 뒤 값
//	int first = li.front();
//	int last = li.back();
//
//	//임의 접근
//	//list는 불가능.
//
//	list<int>::iterator itBegin = li.begin();
//	list<int>::iterator itEnd = li.end();
//
//	//원형으로 구현되어있긴 한데, 원형의 장점을 이용하도록 하기 보다는,, boundary check를 위해서인 것 같다.
//	//list<int>::iterator itTest1 = --itBegin; (불가)
//	//list<int>::iterator itTest2 = --itEnd; (가능)
//	//list<int>::iterator itTest3 = ++itEnd; (불가)
//
//	//또한 list의 iterator는 벡터의 iterator와 달리 사칙연산에 대해서 막혀있다.
//	//it+=10;은 불가.
//	//list는 next를 10번 해야하니까...
//	//vector는 단순히 산술계산으로 가능하기에 지원한다.
//
//	int* ptrBegin = &(li.front());
//	int* ptrEnd = &(li.back());
//	
//	for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
//	{
//		cout << (*it) << endl;
//	}
//
//	li.insert(itBegin, 100);
//	li.erase(li.begin());
//
//	li.pop_front();
//	li.pop_back();
//
//	//값이 10인 모든 원소를 삭제해준다.
//	//벡터는 중간에 있는 값을 삭제하는 것이 비용이 많이 들기 때문에 지원해주지 않지만,
//	//리스트는 remove를 수행하기 위해서 for문 한 바퀴만 돌면 되서 remove를 지원해준다.
//	li.remove(10);
//
//	//중간 값 삭제
//	list<int>::iterator it = li.begin();
//	for (int i = 0; i < 50; i++)
//		++it;
//
//	li.erase(it);
//
//	list<int> testli;
//	list<int>::iterator itRemember;
//	for (int i = 0; i < 100; i++)
//	{
//		if (i == 50)
//		{
//			//50을 갖는 위치를 iterator가 기억하도록 저장해놓고
//			itRemember = testli.insert(testli.end(), i)
//		}
//		else
//		{
//			testli.push_back(i);
//		}
//	}
//
//	/// 작업중...
//
//	//이걸 지우는 건 쉬움.
//	//찾는게 어렵지 지우는 건 어렵지 않다. 
//	testli.erase(itRemember);
//	
//
//	
//	return 0;
//}