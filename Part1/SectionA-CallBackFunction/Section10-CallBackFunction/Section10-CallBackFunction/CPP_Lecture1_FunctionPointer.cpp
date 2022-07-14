//#include <iostream>
//using namespace std;
//
///// <summary>
///// 
///// </summary>
//
//void printHello()
//{
//	cout << "Hello!" << endl;
//}
//
//int printNumber(int a)
//{
//	cout << "number : " << a << endl;
//	return 0;
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	//함수 포인터를 선언하는 방법 1
//	//fn1이 함수 포인터 변수가 된다.
//	void (*fn1)();
//	fn1 = printHello;
//	fn1();
//
//	//함수 포인터를 선언하는 방법2
//	//fp1이 함수 포인터 변수의 자료형이 된다.
//	//fp1은 typedef를 할때 일반 자료형으로 정의했기때문에 사용시 포인터 변수임을 나타내줘야한다.
//	typedef int (fp1)(int a);
//	fp1* fn2 = printNumber;
//	fn2(15);
//
//	//함수 포인터를 선언하는 방법3
//	//fp2가 함수 포인터 변수의 자료형이 된다.
//	//fp2는 포인터 변수로 typedef를 해줬기 때문에, 사용시 포인터 변수임을 나타낼 필요는 없다.
//	typedef int (*fp2)(int, int);
//	fp2 fn3 = Add;
//	cout << fn3(3, 4) << endl;
//
//	//함수 포인터를 선언하는 방법4
//	//fp3은 int를 반환하고, int 2개를 매개변수로 받는 함수를 넣을 수 있다.
//	using fp3 = int(int, int);
//	fp3* fn4 = Add;
//	cout << fn4(4, 4) << endl;
//
//	//모든 경우에서 함수이름 앞에 주소연산자를 붙여줄 수 있다.
//	fp2 fn5 = &Add;
//
//	//모든 경우에서 함수 포인터를 사용할 때 * 연산자를 사용할 수 있다.
//	cout << (*fn5)(32, 4) << endl;
//
//	return 0;
//}