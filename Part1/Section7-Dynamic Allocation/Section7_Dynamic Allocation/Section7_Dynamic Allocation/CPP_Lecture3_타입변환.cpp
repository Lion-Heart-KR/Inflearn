//#include <iostream>
//using namespace std;
//
///// <summary>
///// ※타입변환
///// - malloc -> void*를 반환하고, 우리가 [타입변환]을 통해 사용했다.
///// </summary>
///// <returns></returns>
//
//class Knight
//{
//public:
//
//public:
//	int _hp = 10;
//};
//
//class Dog
//{
//public:
//	//타입 변환 생성자. 매개변수에 지정된 타입으로 Dog를 생성할 수 있게 해준다.
//	Dog() { }
//	Dog(const Knight& k) 
//	{
//		_age = k._hp;
//	}
//
//	//타입 변환 연산자
//	operator Knight()
//	{
//		return (Knight)(*this);
//	}
//
//public:
//	int _age = 1;
//	int _cuteness = 2;
//};
//
//class BullDog : public Dog
//{
//public :
//
//
//public :
//	bool _frenchBullDog;
//
//};
//
//int main()
//{
//	// *****타입 변환 유형 (비트열 재구성 여부)*****
//	// [1] 값 타입 변환
//	// -- 특징) 의미를 유지하기 위해서(123456789를 최대한 근접하게 표현한다), 원본 객체와 다른 비트열로 재구성한다.
//	{
//		int a = 123456789; //2의보수
//		float b = (float)a;   //부동소수점 (지수+유효숫자)
//		//출력을 해보면 조금 다른 값이 나옴
//		cout << b << endl;
//	}
//	 
//	// [2] 참조 타입 변환
//	// -- 특징) 비트열을 재구성하지 않고, '관점' 만 바꾸는 것. 의미는 포기하고 비트열은 유지함.
//	// -- 값 타입 변화는 값을 최대한 근접하게 유지하기 위해서, 비트열을 적절히 바꿨던 반면에,
//	// -- 참조 타입 변환의 경우는 같은 비트열을 두고 해석하는 방법을 바꾸는 것이다.
//	// ---- 이해를 돕기위해서 예를 들자면, '1111'의 경우 10진수로 해석하면 1111이고, 2진수로 해석하면 15가 되는 것과 비슷하다.
//	// -- 거의 쓸 일은 없지만, 포인터 타입 변환도 '참조 타입 변환'과 동일한 룰을 따르기때문에 이해를 돕기위한 학습임.
//	// 
//	{
//		int a = 123456789;
//		float b = (float&)a;
//		cout << b << endl;
//	}
//
//	// *****안전도 기반 분류*****
//	// [1] 안전한 변환
//	// - 특징) 의미가 항상 100% 완전히 일치하는 경우
//	// - 같은 타입 이면서, 크기만 더 큰 변수로 이동하는 경우
//	// - 작은 바구니 -> 큰 바구니로 이동 OK (업 캐스팅)
//	// -- ex) char -> short / short -> int / int -> __int64
//	{
//		int a = 123456789;
//		__int64 b = a;
//		cout << b << endl;
//	}
//	// 
//	// [2] 불안전한 변환
//	// - 특징) 의미가 항상 100% 일치한다고 보장하지 못하는 경우
//	// - 타입이 다르거나
//	// - ex) float -> int
//	// - 같은 타입이지만 큰 바구니에서 작은 바구니로 이동하는 경우(다운 캐스팅)
//	// - ex) __int64 -> int 
//	{
//		int a = 123456789;
//		float b = a; //타입이 다른 경우
//		short c = a; //다운 캐스팅
//		cout << b << endl;
//		cout << c << endl;
//	}
//	//
//	// *****프로그래머 의도에 따라 분류*****
//	// [1] 암시적 변환
//	// - 특징)이미 알려진 타입 변환 규칙에 따라서 컴파일러가 '자동'으로 타입 변환
//	{
//		int a = 123456789;
//		float b = a; // (float)를 작성하지 않았음에도, 암시적으로! 알아서!
//		cout << b << endl;
//	}
//	// 
//	// [2] 명시적 변환
//	{
//		int a = 123456789;
//		int* b = (int*)a; //암시적으로 변환되지 않음. 위험한 작업이라고 판단되어서, 컴파일러가 자동으로 해주지 않음
//		cout << b << endl;
//	}
//	// 
//	
//	// *****아무런 연관 관계가 없는 클래스 사이의 변환*****
//	{
//		// [1] 연관없는 클래스 사이의 '값 타입' 변환
//		// - 특징) 일반적으로 안 됨
//		// - [타입 변환 생성자]를 정의해준다면 가능하지만, 일반적인 상황은 아니다.
//		// 암시적으로 하든, 명시적으로 하든 컴파일러가 에러로 인식함
//		//
//		Knight k;
//		Dog d = (Dog)k;
//
//		//ㅔ타입 변환 연산자]
//		Knight k2 = d;
//	}
//
//	{
//		// [2] 연관 없는 클래스 사이의 '참조 타입' 변환 : 명시적으로 하면 가능하긴 함
//		Knight k1;
//		//Dog& dog = k1; (x)
//		Dog& dog = (Dog&)k1; //(가능은 함)
//	}
//
//	// *****상속 관계에 있는 클래스 사이의 변환*****
//	// - 특징) 자식->부모 (O) / 부모->자식 (X)
//	// [1] 상속 관계 클래스의 값 타입 변환
//	// 
//	{
//		//Dog dog;
//		//BullDog bulldog = (BullDog)dog; //안 됨
//
//		BullDog bulldog;
//		Dog dog = bulldog; //bulldog은 dog의 한 종류이기에 가능. 하지만, Bulldog의 멤버 변수인 frenchDog는 사라짐.		
//	}
//	// [2] 상속 관계 클래스의 참조 타입 변환
//	{
//		//Dog dog;
//		//BullDog& bulldog = (BullDog&)dog; //dog가 항상 bulldog은 아니므로, 위험한 작업이당
//
//		BullDog bulldog;
//		Dog& dog = bulldog;
//	}
//	// 
//	// 결론)
//	// [값 타입 변환] : 진짜 비트열도 바꾸고, 논리적으로 말이 되게 바꾸는 변환
//	// - 논리적으로 말이 된다(ex. Bulldog -> dog) : 가능
//	// - 논리적으로 말이 안 된다(ex. dog->bulldog) : 불가능
//	// 
//	// [참조 타입 변환] : 비트열은 놔두고, 우리의 '관점'만 바꾸는 변환
//	// - 억지로 요구하면 해주긴 하는데, 알아서(암시적으로) 해주는지는 안전성 여부와 관련이 있다.
//	// -- 안전한 경우 : (Bulldog -> Dog&) : '그냥' (암시적으로) OK
//	// -- 위험한 경우 : (Dog -> Bulldog&) : '그냥' 해주지는 않는다. 하지만, 명시적으로 요구하면 해주긴 한다.
//	//
//}