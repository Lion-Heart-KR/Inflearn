//#include <iostream>
//#include <vector>
//using namespace std;
//
////�ݺ���(Iterator) : �����Ϳ� ������ ����. �����̳��� ���Ҹ� ī��Ű��, ��ȸ�� �� �ֵ��� �����ش�.
////���ʹ� �迭ó�� v[i]�̷��� ����� �� ������, list Ȥ�� �ٸ� �����̳ʿ����� iterator�� ����� �� �ִ�.
//
//int main()
//{
//	srand(static_cast<unsigned int>(time(0)));
//	//���� �����
//	vector<int> v;
//
//	//�ݺ��� �����
//	vector<int>::iterator it;
//
//
//	for (int i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�ݺ��ڿ� �� �Ҵ�(������ó�� ����� �� ����)
//	//it = v.begin(); //ù ���� �ּҸ� ���´�.
//	//int* ptr_begin = &v[0];
//	//it = v.end(); //������ ���� '���� �ּ�'�� ���´�.
//	//int* ptr_end = &v[0] + v.size();
//
//	//�ݺ����� ���
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << (*it) << endl;
//	}
//
//	//�ݺ��ڿ��� ������ �پ��ϴ�.
//	 
//	//const_iterator : �����͸� �������� �ʴ� ���
//	vector<int>::const_iterator cit;
//
//	//reverse_iterator : �ڿ������� ��ȸ�ϴ� �ݺ���
//	for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit)
//		cout << *rit << endl;
//
//
//	return 0;
//}