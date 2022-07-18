//#include<iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	srand(static_cast<unsigned int>(time(0)));
//	vector<int> v;
//
//	for (int i = 0; i < 100; i++)
//	{
//		int num = rand() % 100;
//		v.push_back(num);
//	}
//
//	//���������� �� ȿ������ ������� �����غ���.
//	//�ڷᱸ�� : �����͸� �����ϴ� ����
//	//�˰��� : �����͸� ��� ����� ���ΰ�?
//	
//	//find
//	//find_if
//
//	//count
//	//count_if
//	
//	//all_of
//	//any_of
//	// none_of
//	// for_each
//	
//	// remove
//	// remove_if
//	
//
//	//Q1) number��� ���ڰ� ���Ϳ� �ִ��� üũ�ϴ� ���(return : bool or ù ���� iterartor)
//	int number = 50;
//
//	//�� �ڵ�� list ������, map ������ �� �����Ѵ�.
//	vector<int>::iterator itFind = find(v.begin(), v.end(), number); //(���� iterator, �� iterator, ã������ ��)
//	if (itFind == v.end())
//		cout << "�� ã��" << endl;
//	else
//		cout << "ã��" << endl;
//	
//
//
//	//Q2) 11�� ���������� ���ڰ� ���Ϳ� �ִ��� üũ�ϴ� ��� (bool or iterator)
//	struct CanDivideBy11
//	{
//		bool operator()(int n)
//		{
//			return (n % 11 == 0);
//		}
//	};
//	vector<int>::iterator itFindIf1 = find_if(v.begin(), v.end(), CanDivideBy11()); //(����, ��, �����Լ�(bool�� ��ȯ�ϴ� ���ٽ��̳� �Լ���ü��...))
//	vector<int>::iterator itFindIf2 = find_if(v.begin(), v.end(), [](int n) {return (n % 11 == 0); });
//	if (itFindIf1 == v.end())
//		cout << "�� ã��" << endl;
//	else
//		cout << "ã��" << endl;
//	
//	//Q3)Ȧ���� ������ ����(int count)
//	struct IsOdd
//	{
//		bool operator()(int n)
//		{
//			return (n % 2 == 1);
//		}
//	};
//	int countif = count_if(v.begin(), v.end(), IsOdd());
//
//	//��� �����Ͱ� Ȧ���ΰ�?
//	bool b1 = all_of(v.begin(), v.end(), IsOdd());
//
//	//Ȧ���� �����Ͱ� �ϳ��� �ִ°�?
//	bool b2 = any_of(v.begin(), v.end(), IsOdd());
//
//	//��� �����Ͱ� Ȧ���� �ƴѰ�?
//	bool b3 = none_of(v.begin(), v.end(), IsOdd());
//	
//	//Q4)���Ϳ� �� �ִ� ��� ���ڵ鿡 3�� �����ش�.
//	struct MultiplyBy3
//	{
//		void operator()(int& n)
//		{
//			n = n * 3;
//		}
//	};
//	for_each(v.begin(), v.end(), MultiplyBy3());
//
//	//remove, remove_if
//	//Q5)Ȧ���� �����͸� �ϰ� ����
//
//	//���� 1 : �׻� ++it ���ָ� �ȵȴ�.
//	//���� 2 : it �� v.erase�� ��ȯ���� ���Ҵ� ������Ѵ�.
//	/*for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		if ((*it) % 2 == 1)
//			v.erase(it);
//	}*/
//	v.clear();
//	v.push_back(1);
//	v.push_back(9);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(11);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(6);
//	v.push_back(7);
//	v.push_back(8);
//
//	//���� 4�ΰ� ����
//	//remove(v.begin(), v.end(), 4);
//
//	//���� Ȧ���� ���� ����
//	vector<int>::iterator itRemove = remove_if(v.begin(), v.end(), IsOdd()); //������ ������ ��ġ�� iterator�� ��ȯ���ش�.
//	v.erase(itRemove, v.end());
//
//	//remove�� �����ؾ��� ���� �����ϴ� ���� �ƴ϶�, ���ܵ־� �ϴ� ���� ���ܵδ� ������� �����Ѵ�.
//	/*
//	����, ���� ��� ������ ���ʹ�
//	1  9  2  3  11  4  5  6  7  8
//	�̸�, Ȧ���� ���� �����ϴ� remove_if�� ������ �Ŀ���
//	2  4  6  8  11  4  5  6  7  8
//	�� �ȴ�.
//	[1] ���� ��ü�� ��ȸ�� �ϴµ�
//	[2] ���� ����� �ƴ� �͵��� ������ �Ű��ش�(�����)
//	�̰� ���̴�. �׷��� ���� 11���ʹ� �״�� �����ִ°Ŵ�.
//
//	������ size�� ������ �ʰ� �״���̴�. 
//
//	���ϰ��� 11�� ����Ű�� �ִ� iterator�̹Ƿ�
//	���� �� ���ʹ� �����ϸ� �ȴ�.
//	*/
//
//	return 0;
//}