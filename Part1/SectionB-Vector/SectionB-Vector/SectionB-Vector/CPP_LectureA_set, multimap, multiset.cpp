//#include <iostream>
//#include <map>
//#include <set>
//using namespace std;
//
//int main()
//{
//	//set
//	//key == value인  경우 -> set을 사용하면 된다.
//	/*
//	set<int> s;
//
//	//삽입
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	s.insert(50);
//	s.insert(40);
//	s.insert(90);
//	s.insert(60);
//	s.insert(80);
//	s.insert(70);
//
//	//삭제
//	s.erase(10);
//	s.erase(40);
//
//	//찾기
//	set<int>::iterator findIt = s.find(50);
//	if (findIt == s.end())
//	{
//		cout << "못 찾음" << endl;
//	}
//	else {
//		cout << "찾음" << endl;
//	}
//
//	//순회
//	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
//	{
//		cout << (*it) << endl;
//	}
//
//	//이런거는 안됨
//	//s[10] = 10;
//	*/
//
//	//multimap
//	//map에서 중복 키를 허용한다.
//	/*
//	//선언
//	multimap<int, int> mm;
//
//	//삽입(같은 키에 다른 value들을 삽입할 수 있음)
//	mm.insert(make_pair(1, 100));
//	mm.insert(make_pair(1, 200));
//	mm.insert(make_pair(1, 300));
//	mm.insert(make_pair(2, 400));
//	mm.insert(make_pair(2, 500));
//	mm.insert(make_pair(1, 600)); //key값으로 정렬된다.
//
//	//이런거 안 됨.
//	//mm[1] = 500;
//
//	//삭제. key값이 1인 모든 value를 삭제한다.
//	//삭제한 개수를 반환해준다.
//	//unsigned int count = mm.erase(1);
//
//	//찾기 : 해당 키 값을 갖는 가장 첫 번째,,, pair를 찾는다.
//	//multimap<int, int>::iterator multiIt = mm.find(1);
//
//	////이렇게 하면, 하나만 삭제할 수 있다.
//	//if (multiIt != mm.end())
//	//{
//	//	mm.erase(multiIt);
//	//}
//
//	//키값이 1인 모든 것을 찾고싶다.
//	//아래의 함수를 실행하면, key값이 1인 원소의 시작 iterator와, 마지막 iterator를 pair로 반환한다.
//	pair< multimap<int, int>::iterator, multimap<int, int>::iterator> itpair = mm.equal_range(1);
//	for (multimap<int, int>::iterator it = itpair.first; it != itpair.second; ++it)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	//이런것도 있다. 위의 코드와 동일하게 동작할 수 있다.
//	//mm.lower_bound(1);
//	//mm.upper_bound(1);
//
//	//순회
//	for (multimap<int, int>::iterator it = mm.begin(); it != mm.end(); ++it)
//	{
//		//TODO
//	}
//	*/
//
//	//multiset
//	//set에서 중복 키를 허용한다.
//	multiset<int> ms;
//
//	//삽입
//	ms.insert( 100);
//	ms.insert( 200);
//	ms.insert( 300);
//	ms.insert( 100);
//	ms.insert( 200);
//	ms.insert( 300);
//	ms.insert( 400);
//
//	//찾기 : 하나만 찾아준다.
//	multiset<int>::iterator findIt = ms.find(100);
//	/*cout << *findIt++ << endl;
//	cout << *findIt++ << endl;
//	cout << *findIt++ << endl;
//	cout << *findIt++ << endl;
//	cout << *findIt++ << endl;*/
//
//	//여기도 이게 있다.
//	pair<multiset<int>::iterator, multiset<int>::iterator> pairit=	ms.equal_range(100);
//	for (multiset<int>::iterator it = pairit.first; it != pairit.second; ++it)
//		cout << *it << endl;
//
//	//얘도 그거 있다.
//	ms.lower_bound(100);
//	ms.upper_bound(100);
//
//	return 0;
//}