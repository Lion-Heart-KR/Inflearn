//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// using : typedef대신에 사용할 수 있는 문법
///// 
///// </summary>
///// <returns></returns>
//
////case1 : 타입 원형이 너무 길 때, 간략하게 사용하기 위해서
//typedef vector<int>::iterator vIterator;
//
////case2 : 사용할 자료형이 아직 정해지지 않았을 때.
//// id에 사용할 자료형이 미정일 때, 일단 typdef int id;로 사용하다가, 나중에 type으로 __int64가 정해지면, typedef문만 변경하면 된다.
//typedef int id;
//
////using으로 typedef하는 방법
//using id2 = int;
//
////장점
////[1] 직관성
//typedef void (*MyFunc1)();
//using MyFunc2 = void(*)();
//
////[2] template
//// -- typedef는 template과는 사용할 수 없다.
//template<typename T>
//using List = std::list<T>;
////typedef std::vector<T> List2; //불가
//
//// -- using이 없던 시절에는?
//template <typename T>
//struct List2
//{
//	typedef std::list<T> type;
//};
//
////typedef는 using에 비해 장점이 하나도 없다.
//
//int main()
//{
//	List<int> li;
//	li.push_back(1);
//	li.push_back(2);
//	li.push_back(3);
//
//	List2<int>::type li2;
//
//	return 0;
//}