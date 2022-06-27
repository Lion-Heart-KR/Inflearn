//#include <iostream>
//using namespace std;
//
////포인터 vs 배열
//
//void incArray(int a[], int size);
//void printArray(int a[], int size);
//
//int main()
//{
//	//문자열은 문자의 배열이다.
//	//str은 4or8byte 크기의 주소를 담는 공간이다.
//	//변경 불가능
//	const char* str = "Hello World";
//	//cout << sizeof(str) << endl;
//
//	//str2는 문자열의 길이에 따라서 크기가 달라진다.
//	//변경이 가능함.
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
////배열은 함수 인자로 넘기면, 컴파일러가 알아서 포인터로 치환한다(char[] -> char*)
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