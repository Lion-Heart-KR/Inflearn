//#include <iostream>
//using namespace std;
//
//void SetNumber(int *a)
//{
//	*a = 10;
//}
//
//void SetMessage1(const char* a)
//{
//	//bye라는 문자열을 read only data영역에 새로 할당을 하고, 그 메모리의 주소를 어떤 포인터변수 a에 넣어주는 것이다.
//	// 그리고, 이 포인터변수 a와 main의 msg는 다른 포인터변수다. msg에 저장된 주소값을, a에 복사해준 것이다.
//	// 
//	// 0x00000001[msg] : 0x11110001
//	// 0x00000002[a]   : 0x11110001
//	// 0x11110001      : "Hello"
//	// 
//	// 함수를 호출하는 순간에는 이런 상황이 되는데
//	// a="bye"를 실행한 이후에는
//	// 
//	// 0x00000002[a]   : 0x11110002
//	// 0x11110002      : "Bye"
//	// 
//	// 이런 상황이 된다.
//	// 그러니까 msg는 아무런 변화가 없게된다.
//	a = "bye";
//}
//
//void SetMessage2(const char** a)
//{
//	//포인터변수의 주소를 담을 수 있는 변수
//	//이중포인터변수가 가리키는 변수로 가서 그 변수의 값을 수정하라
//	//
//	*a = "bye";
//}
//
//void SetMessage3(const char*& a)
//{
//	a = "WoW";
//}
//
//int main()
//{
//	int a = 0;
//	SetNumber(&a);
//	//cout << a << endl;
//
//	const char* msg = "Hello";
//	SetMessage3(msg);
//	cout << msg << endl;
//
//	//다중포인터 : 혼동스럽다.
//	//양파까기라고 생각하면 된다.
//	//
//
//	return 0;
//}