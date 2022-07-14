//#include <iostream>
//using namespace std;
//
///// <summary>
///// 템플릿 : 함수 템플릿
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
////두 매개변수를 더해서 결과를 반환하는 함수.
////자료형별로 함수를 오버로딩하기에는 코드가 너무 길어진다.
//template<typename T>
//T Add(T a, T b)
//{
//	return a + b;
//}
////이렇게 template으로 함수를 선언하면, 컴파일 할 때 위의 함수를 호출할 때 사용한 변수에 맞게 컴파일러가 함수를 생성해준다.
////위의 함수는 같은 자료형 두 개를 받을 수 있다. 그럼 다른 자료형을 받을 수는 없을까?
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
//	//k1은 연산자 오버로딩을 하지 않는 이상 cout << k1 과같은 형태로 사용할 수 없다.
//	//그럼 어떻게 해야할까 -> 템플릿 특수화
//	//특정 타입에 대해서는 다른 규칙을 따르고 싶을 때 사용한다.
//	//하지만, 기존에 있는 함수와 매개변수의 수는 맞춰야한다.
//	Knight k1;
//	printTwo(k1, 100);
//}