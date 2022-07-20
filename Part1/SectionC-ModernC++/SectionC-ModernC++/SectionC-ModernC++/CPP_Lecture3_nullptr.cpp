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
//	void Test()
//	{
//		cout << "Knight::Test()" << endl;
//	}
//};
//
//Knight* FindKnight()
//{
//	return nullptr;
//}
//
//void Test(int a)
//{
//	cout << "Test(int)" << endl;
//}
//
//void Test(void* a)
//{
//	cout << "void Test(void* a)" << endl;
//}
//
////nullptr구현
//class Nullptr_t
//{
//public:
//	template<typename T>
//
//	//캐스팅을 해준다. T는 객체를 할당하게되는 변수의 자료형이다.
//	//const는 전달되는 매개변수의 값이 변경되지 않는 것을 보장하겠다는 의미
//	operator T* () const //어떤 형태의 포인터라도 nullptr에 대입연산이 가능하도록 하는 문법이다. 캐스팅을 하는 operator이다.
//	{
//		return 0;
//	}
//
//	//객체의 멤버함수
//	template<typename C, typename T>
//	operator T C::* () const
//	{
//		return 0;
//	}
//
//private:
//	void operator&() const { } //주소값 &을 막는다. &nullptr이 불가능해진다.
//	//void operator&() const = delete; //주소값 &을 막는다.
//
//} _Nullptr;
//
////선언하자마자 객체를 만드는 방법
////이 경우 클래스 이름은 없어도 된다.
////이 경우 객체는 유일하다.
//
////const Nullptr_t _Nullptr;
//
///// <summary>
///// 0이나 NULL이 있는데 nullptr을 써야하는 이유?
///// [1] NULL은 사실 0이다. #define NULL 0
///// 
///// </summary>
///// <returns></returns>
//
//int main()
//{
//	int* ptr = nullptr;
//
//	//1) 오동작방지를 위해 NULL대신 nullptr을 사용해야 한다.
//	Test(0); //이건 int를 받는 함수 호출
//	Test(NULL); //이것도 int를 받는 함수 호출
//	Test(nullptr); //이건 void*를 받는 함수 호출
//	Test(_Nullptr); //이건 void*를 받는 함수 호출
//
//
//	//2) 가독성
//	//Knight*로 반환을 해준다.
//	auto knight = FindKnight();
//
//	//아래 처럼 비교를 하면, knight가 어떤 type의 변수인지 애매해진다.
//	if(knight == 0)
//	{
//		//TODO
//	}
//
//	//이렇게 하면, knight가 확실히 포인터 변수라는 것을 알 수 있다.
//	//if (knight == nullptr)
//	if (knight == _Nullptr)
//	{
//
//	}
//	
//	void(Knight:: * memFunc)();
//	memFunc = &Knight::Test;
//
//	if(memFunc == _Nullptr)
//
//	auto whoAmI = nullptr;
//	nullptr_t WhoAmI = nullptr;
//
//	//이런거 안됨
//	&nullptr;
//	&_Nullptr;
//
//	return 0;
//}