//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
//class Knight
//{
//public:
//	Knight() {}
//	Knight(int a, int b) { cout << "Knight(int a, int b)" << endl; }
//	Knight(initializer_list<int> li)
//	{
//		cout << "Knight(initializer_list<int> li)" << endl;
//	}
//};
//
//int main()
//{
//	//�߰�ȣ �ʱ�ȭ { }
//	int a = 0;
//	int b(0);
//	int c{ 0 };
//	int d={ 0 };
//	Knight k1;
//	Knight k2 = k1; //���� ��������. ���Կ����� �ƴϴ�.
//	Knight k3{ k1 };
//
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//
//	vector<int> v2{ 1,2,3,4 };
//
//	//�߰�ȣ �ʱ�ȭ
//	// 1)vector��, container�� �� ��︰��.
//	vector<int> v3{ 1,2,3,4,5,6 };
//
//	// 2) ��� ��ȯ ���� : �ٸ� Ÿ�� ���� ��ȯ�� ����ϰ� ����. ���ǽ��߿� �Ǽ��� �� �ִ� �κ��� �������ش�.
//	int x = 0;
//	//double y1{ x };
//	//double y2(x);
//
//	double x2 = 1.5;
//	//int y3{ x2 };
//
//	// 3) Bonus
//	Knight k4(); //�̰Ŵ� �Լ��� �ñ״�ó�� �����ϴ� �����̴�.
//	Knight k5{ };//�̰Ŵ� Knight�� �⺻ �����ڸ� ȣ���ϴ� �����̴�.
//
//	// ����
//	// [1] initializer_list�� ���д�.
//	Knight k6{ 1, 2,3, 4, 5 }; //�ʱ�ȭ ����Ʈ�� ���ڷ� �޴� �����ڰ� �ʿ��ϴ�.
//	Knight k7{ 1, 2 }; // ���ڸ� 2�� �޴� �����ڰ� ������, �ʱ�ȭ ����Ʈ�� ���ڷ� �޴� �����ڸ� ȣ���Ѵ�.
//	Knight k8(1, 2); //�̰Ŵ� ���ڸ� 2���޴� �����ڸ� ȣ���Ѵ�.
//
//	//���
//	// ��ȣ �ʱ�ȭ ()�� �⺻���� ����.
//	// - �������� C++(�źΰ��� ����.)
//	// �߰�ȣ �ʱ�ȭ{ }�� vector�� ���� Ư�����̽��� ���ؼ� Ȱ���Ѵ�.
//
//	// �߰�ȣ �ʱ�ȭ {}�� ��ȣ�ϴ� ��
//	// - �ʱ�ȭ ������ ��ġȭ
//	// - ��� ��ȯ�� ����
//	// - initializer_list�� ���д�;;
//
//	return 0;
//}