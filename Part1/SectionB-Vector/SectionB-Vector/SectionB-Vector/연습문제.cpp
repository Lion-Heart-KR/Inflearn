//#include<iostream>
//#include <vector>
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
//	//�Ʒ��� �������� �ε��� i�� ����ٸ�, list�� �ڷ����� �ٲ� ���, ����� �� ���� �ȴ�.
//	//����, �ε��� i���ٴ� iterator�� ����ϴ°�... ����?
//
//	//Q1) number��� ���ڰ� ���Ϳ� �ִ��� üũ�ϴ� ���(return : bool or ù ���� iterartor)
//	{
//		int number = 50;
//		bool found = false;
//
//		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) == number) {
//				found = true;
//				break;
//			}
//		}
//
//		if (found)
//			cout << number << " �� �����մϴ�." << endl;
//		else
//			cout << number << " �� �����ϴ�." << endl;
//	}
//	//Q2) 11�� ���������� ���ڰ� ���Ϳ� �ִ��� üũ�ϴ� ��� (bool or iterator)
//	{
//		bool found = false;
//		vector<int>::iterator it;
//
//		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) % 11 == 0)
//			{
//				found = true;
//				break;
//			}
//		}
//		if (found)
//			cout << "11�� ���������� ���� �����մϴ�." << endl;
//		else
//			cout << "11�� ���������� ���� �����ϴ�." << endl;
//	}
//	//Q3)Ȧ���� ������ ����(int count)
//	{
//		int count = 0;
//		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) % 2 == 1)
//			{
//				count++;
//			}
//			(*it) *= 3;
//		}
//
//		cout << "Ȧ���� ���� " << count << "�� �Դϴ�." << endl;
//	}
//	//Q4)���Ϳ� �� �ִ� ��� ���ڵ鿡 3�� �����ش�.
//	{
//		for (vector<int>::size_type i = 0; i<v.size(); i++)
//		{
//			/*int item& = v[i];
//			item *= 3;
//			v[i] = item;*/
//			v[i] *= 3;
//		}
//	}
//
//	return 0;
//}