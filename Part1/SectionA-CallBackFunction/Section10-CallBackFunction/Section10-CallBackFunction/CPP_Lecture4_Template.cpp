//#include <iostream>
//using namespace std;
//
///// <summary>
///// ���ø� : �Լ� ���ø�
///// </summary>
///// <returns></returns>
//
//class Knight
//{
//public:
//
//public:
//	int _hp = 100;
//};
//
////�� �Ű������� ���ؼ� ����� ��ȯ�ϴ� �Լ�.
////�ڷ������� �Լ��� �����ε��ϱ⿡�� �ڵ尡 �ʹ� �������.
//template<typename T>
//T Add(T a, T b)
//{
//	return a + b;
//}
////�̷��� template���� �Լ��� �����ϸ�, ������ �� �� ���� �Լ��� ȣ���� �� ����� ������ �°� �����Ϸ��� �Լ��� �������ش�.
////���� �Լ��� ���� �ڷ��� �� ���� ���� �� �ִ�. �׷� �ٸ� �ڷ����� ���� ���� ������?
//
//template<typename T>
//void printTwo(T a)
//{
//	cout << a << " " << 100 << endl;
//}
//
//template<typename T1, typename T2>
//void printTwo(T1 a, T2 b)
//{
//	cout << a << b << endl;
//}
//
//template<>
//void printTwo(Knight k1, int k2)
//{
//	cout << "Knight HP : " << k1._hp << endl;
//	cout << "Knight HP : " << k2 << endl;
//}
//
//int main()
//{
//	cout << Add(2, 3) << endl;
//	cout << Add(3.2, 4.8) << endl;
//	cout << Add(2.2f, 3.2f) << endl;
//
//	printTwo(10);
//	printTwo("Hello", "World");
//	printTwo("Hello", 333);
//
//	//k1�� ������ �����ε��� ���� �ʴ� �̻� cout << k1 ������ ���·� ����� �� ����.
//	//�׷� ��� �ؾ��ұ� -> ���ø� Ư��ȭ
//	//Ư�� Ÿ�Կ� ���ؼ��� �ٸ� ��Ģ�� ������ ���� �� ����Ѵ�.
//	//������, ������ �ִ� �Լ��� �Ű������� ���� ������Ѵ�.
//	Knight k1;
//	printTwo(k1, 100);
//}