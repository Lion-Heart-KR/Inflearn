//#include <iostream>
//using namespace std;
//
////������ vs �迭
//
//void incArray(int a[], int size);
//void printArray(int a[], int size);
//
//int main()
//{
//	//���ڿ��� ������ �迭�̴�.
//	//str�� 4or8byte ũ���� �ּҸ� ��� �����̴�.
//	//���� �Ұ���
//	const char* str = "Hello World";
//	//cout << sizeof(str) << endl;
//
//	//str2�� ���ڿ��� ���̿� ���� ũ�Ⱑ �޶�����.
//	//������ ������.
//	char str2[] = "Hello Worldd";
//
//	//cout << sizeof(str2) << endl;
//
//	int a[10] = {};
//	printArray(a, sizeof(a) / sizeof(*a));
//	incArray(a, sizeof(a) / sizeof(*a));
//	printArray(a, sizeof(a) / sizeof(*a));
//}
//
////�迭�� �Լ� ���ڷ� �ѱ��, �����Ϸ��� �˾Ƽ� �����ͷ� ġȯ�Ѵ�(char[] -> char*)
//void incArray(int a[], int size)
//{
//	for (int i = 0; i < size; i++) {
//		a[i] = i;
//	}
//}
//
//void printArray(int a[], int size)
//{
//	for (int i = 0; i < size; i++) {
//		cout << a[i];
//	}
//	cout << endl;
//}