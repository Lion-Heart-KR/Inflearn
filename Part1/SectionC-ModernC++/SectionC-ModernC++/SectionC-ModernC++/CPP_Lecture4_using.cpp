//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// using : typedef��ſ� ����� �� �ִ� ����
///// 
///// </summary>
///// <returns></returns>
//
////case1 : Ÿ�� ������ �ʹ� �� ��, �����ϰ� ����ϱ� ���ؼ�
//typedef vector<int>::iterator vIterator;
//
////case2 : ����� �ڷ����� ���� �������� �ʾ��� ��.
//// id�� ����� �ڷ����� ������ ��, �ϴ� typdef int id;�� ����ϴٰ�, ���߿� type���� __int64�� ��������, typedef���� �����ϸ� �ȴ�.
//typedef int id;
//
////using���� typedef�ϴ� ���
//using id2 = int;
//
////����
////[1] ������
//typedef void (*MyFunc1)();
//using MyFunc2 = void(*)();
//
////[2] template
//// -- typedef�� template���� ����� �� ����.
//template<typename T>
//using List = std::list<T>;
////typedef std::vector<T> List2; //�Ұ�
//
//// -- using�� ���� ��������?
//template <typename T>
//struct List2
//{
//	typedef std::list<T> type;
//};
//
////typedef�� using�� ���� ������ �ϳ��� ����.
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