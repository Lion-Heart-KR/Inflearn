//#include <iostream>
//#include <map>
//#include <set>
//using namespace std;
//
//int main()
//{
//	//set
//	//key == value��  ��� -> set�� ����ϸ� �ȴ�.
//	/*
//	set<int> s;
//
//	//����
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
//	//����
//	s.erase(10);
//	s.erase(40);
//
//	//ã��
//	set<int>::iterator findIt = s.find(50);
//	if (findIt == s.end())
//	{
//		cout << "�� ã��" << endl;
//	}
//	else {
//		cout << "ã��" << endl;
//	}
//
//	//��ȸ
//	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
//	{
//		cout << (*it) << endl;
//	}
//
//	//�̷��Ŵ� �ȵ�
//	//s[10] = 10;
//	*/
//
//	//multimap
//	//map���� �ߺ� Ű�� ����Ѵ�.
//	/*
//	//����
//	multimap<int, int> mm;
//
//	//����(���� Ű�� �ٸ� value���� ������ �� ����)
//	mm.insert(make_pair(1, 100));
//	mm.insert(make_pair(1, 200));
//	mm.insert(make_pair(1, 300));
//	mm.insert(make_pair(2, 400));
//	mm.insert(make_pair(2, 500));
//	mm.insert(make_pair(1, 600)); //key������ ���ĵȴ�.
//
//	//�̷��� �� ��.
//	//mm[1] = 500;
//
//	//����. key���� 1�� ��� value�� �����Ѵ�.
//	//������ ������ ��ȯ���ش�.
//	//unsigned int count = mm.erase(1);
//
//	//ã�� : �ش� Ű ���� ���� ���� ù ��°,,, pair�� ã�´�.
//	//multimap<int, int>::iterator multiIt = mm.find(1);
//
//	////�̷��� �ϸ�, �ϳ��� ������ �� �ִ�.
//	//if (multiIt != mm.end())
//	//{
//	//	mm.erase(multiIt);
//	//}
//
//	//Ű���� 1�� ��� ���� ã��ʹ�.
//	//�Ʒ��� �Լ��� �����ϸ�, key���� 1�� ������ ���� iterator��, ������ iterator�� pair�� ��ȯ�Ѵ�.
//	pair< multimap<int, int>::iterator, multimap<int, int>::iterator> itpair = mm.equal_range(1);
//	for (multimap<int, int>::iterator it = itpair.first; it != itpair.second; ++it)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	//�̷��͵� �ִ�. ���� �ڵ�� �����ϰ� ������ �� �ִ�.
//	//mm.lower_bound(1);
//	//mm.upper_bound(1);
//
//	//��ȸ
//	for (multimap<int, int>::iterator it = mm.begin(); it != mm.end(); ++it)
//	{
//		//TODO
//	}
//	*/
//
//	//multiset
//	//set���� �ߺ� Ű�� ����Ѵ�.
//	multiset<int> ms;
//
//	//����
//	ms.insert( 100);
//	ms.insert( 200);
//	ms.insert( 300);
//	ms.insert( 100);
//	ms.insert( 200);
//	ms.insert( 300);
//	ms.insert( 400);
//
//	//ã�� : �ϳ��� ã���ش�.
//	multiset<int>::iterator findIt = ms.find(100);
//	/*cout << *findIt++ << endl;
//	cout << *findIt++ << endl;
//	cout << *findIt++ << endl;
//	cout << *findIt++ << endl;
//	cout << *findIt++ << endl;*/
//
//	//���⵵ �̰� �ִ�.
//	pair<multiset<int>::iterator, multiset<int>::iterator> pairit=	ms.equal_range(100);
//	for (multiset<int>::iterator it = pairit.first; it != pairit.second; ++it)
//		cout << *it << endl;
//
//	//�굵 �װ� �ִ�.
//	ms.lower_bound(100);
//	ms.upper_bound(100);
//
//	return 0;
//}