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
//	//중괄호 초기화 { }
//	int a = 0;
//	int b(0);
//	int c{ 0 };
//	int d={ 0 };
//	Knight k1;
//	Knight k2 = k1; //복사 연산자임. 대입연산이 아니다.
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
//	//중괄호 초기화
//	// 1)vector등, container와 잘 어울린다.
//	vector<int> v3{ 1,2,3,4,5,6 };
//
//	// 2) 축소 변환 방지 : 다른 타입 간의 변환을 깐깐하게 본다. 무의식중에 실수할 수 있는 부분을 방지해준다.
//	int x = 0;
//	//double y1{ x };
//	//double y2(x);
//
//	double x2 = 1.5;
//	//int y3{ x2 };
//
//	// 3) Bonus
//	Knight k4(); //이거는 함수의 시그니처를 선언하는 문법이다.
//	Knight k5{ };//이거는 Knight의 기본 생성자를 호출하는 문법이다.
//
//	// 단점
//	// [1] initializer_list가 깡패다.
//	Knight k6{ 1, 2,3, 4, 5 }; //초기화 리스트를 인자로 받는 생성자가 필요하다.
//	Knight k7{ 1, 2 }; // 인자를 2개 받는 생성자가 있지만, 초기화 리스트를 인자로 받는 생성자를 호출한다.
//	Knight k8(1, 2); //이거는 인자를 2개받는 생성자를 호출한다.
//
//	//결론
//	// 괄호 초기화 ()를 기본으로 간다.
//	// - 전통적인 C++(거부감이 없다.)
//	// 중괄호 초기화{ }는 vector와 같은 특이케이스에 대해서 활용한다.
//
//	// 중괄호 초기화 {}를 옹호하는 편
//	// - 초기화 문법의 일치화
//	// - 축소 변환의 방지
//	// - initializer_list가 깡패다;;
//
//	return 0;
//}