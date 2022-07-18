//#include <iostream>
//#include <list>
//using namespace std;
//
///// <summary>
///// [1] 리스트의 동작 원리
///// -- Vector, Array와 달리 연속된 공간의 메모리를 할당하는 것이 아니라, 새로운 노드가 추가될 경우,
/////      그 노드는 메모리 공간 중 아무곳에나 할당 받고, 앞과 뒤의 노드를 포인터로 연결한다.
///// 
///// [2] 리스트의 중간 삽입 및 삭제 : Good
///// -- 노드를 포인터로 연결하는 방식이다 보니까, 벡터, 배열에서의 단점이였던 복사비용이 발생하지 않는다.
/////     각 원소들을 앞으로 혹은 뒤로 밀어줄 필요가 없다. 그냥 새로운 노드를 잘 연결해주면 된다.
///// 
///// [3] 리스트의 처음과 끝 삽입 및 삭제 : Good
///// -- 이것도 뭐... 쉽다.
///// 
///// [4] 임의 접근(list[i])
///// -- 첫 노드부터, i칸을 포인터를 타고 가야 list[i]를 구할 수 있다.
///// -- 벡터나 배열의 경우, 연속된 공간에 원소가 존재하기 때문에, 시작 주소에서 인덱스만큼을 더해서 한 번에 접근 가능했지만, 리스트는 연속되어있지 않기 때문이다.
///// -- 보통 항상 갖고있는 값은 header포인터나 tail포인터이다. 따라서 바로 한 번에 접근할 수 없다.
///// 
///// [5] C++의 리스트
///// -- 원형 이중 연결리스트이다.
///// -- 하지만, 사실상 이중 연결리스트이다.
///// -- end에서 앞으로 가거나, begin에서 뒤로가는 연산은 금지되어있다.
///// -- 단순히 boundary check를 위해서 header를 사용하는 것 같다.
///// 
///// [6] 리스트 iterator의 사칙연산
///// -- vector와 동일하게 ++, --연산은 가능하지만
///// -- vector와 달리 +10, -7과 같은 사칙연산을 불가능하다. 
///// </summary>
///// <returns></returns>
//
//int main()
//{
//	//선언
//	list<int> li;
//
//	//삽입
//	for (int i = 0; i < 100; i++)
//	{
//		if (i < 50)
//			li.push_back(i);
//		else
//			li.push_front(i);
//	}
//
//	//size
//	list<int>::size_type size = li.size();
//
//	//capacity는 존재하지 않는다.
//
//	//맨 앞의 값
//	int first = li.front();
//	
//	//맨 뒤의 값
//	int last = li.back();
//
//	//맨 앞의 iterator
//	list<int>::iterator itBegin = li.begin();
//	list<int>::iterator itEnd = li.end();
//	for (list<int>::iterator it = itBegin; it != itEnd; ++it)
//		cout << *it << endl;
//
//	int* ptrBegin = &(li.front());
//	int* ptrEnd = &(li.back());
//
//	//이런게 되긴 하지만, 아래의 코드로 for문을 돌 수는 없다.
//	//[1] next를 지원하지 않는다.
//	//[2] ++로 하면 안된다(배열이 아니다)
//	cout << *ptrBegin << endl;
//	cout << *ptrEnd << endl;
//
//	//list<int>::iterator itTest1 = --itBegin; (불가)
//	//list<int>::iterator itTest2 = --itEnd; (가능)
//	//list<int>::iterator itTest3 = ++itEnd; (불가)
//	
//	cout << "********************************************************" << endl;
//
//	//삽입 : iterator의 앞에 삽입한다.
//	itBegin = li.begin();
//
//	li.insert(itBegin, 100);
//	cout << li.front() << endl;
//
//	//삭제 : 삭제한 곳의 위치를 반환해준다 = 쓰레기값이다.
//	itEnd = li.end();
//	itEnd--;
//	auto Position = li.erase(itEnd);
//	Position--;
//	cout << *Position << endl;
//
//	cout << "********************************************************" << endl;
//
//	//삭제2 : 반환값은 없다.
//	li.pop_back();
//	li.pop_front();
//
//	//삭제 3 : 
//	//리스트 전체를 순회하며, 값이 10인 모든 노드를 삭제한다.
//	li.remove(10);
//
//	//특정 조건에 맞는 것들을 삭제한다.
//	//함수객체, 람다식, 함수포인터가 가능하다.
//	class IsOdd {
//	public:
//		bool operator()(int n)
//		{
//			return (n % 2 == 1);
//		}
//	};
//	li.remove_if(IsOdd());
//
//	//중간 값에 있는 삭제가 쉽다는 것의 의미
//	//[1] 중간까지 찾아가는 것은 for문을 노가다 돌아야 한다.
//	//[2] 중간에 찾아간 후에, 특정 대상을 삭제하는 것은 쉽다. 벡터처럼 복사비용이 들지 않기 때문이다.
//	
//	list<int> testli;
//	list<int>::iterator ItRemember;
//	for (int i = 0; i < 100; i++)
//	{
//		if (i == 50)
//			ItRemember = testli.insert(testli.end(), i);
//		else
//			testli.push_back(i);
//	}
//
//	//작업 후
//
//	testli.erase(ItRemember);
//
//	return 0;
//}