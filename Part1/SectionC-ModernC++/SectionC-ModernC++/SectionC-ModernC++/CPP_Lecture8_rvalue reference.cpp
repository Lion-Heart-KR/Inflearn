//#include <iostream>
//#include <vector>
//using namespace std;
//
///// <summary>
///// 오른값(rvalue)참조와 std::move
///// 
///// [1] lvalue와 rvalue
///// -- lvalue : 단일식을 넘어서, 계속 지속되는 개체(ex. 식이 수정할 수 있는 lvalue여야 합니다.)
///// -- rvalue : lvalue가 아닌 나머지(임시 값, 열거형, 람다, i++ 등)
///// 
///// [2] 이동대상
///// -- rvalue라는 뜻.
///// -- 이 객체는 마음대로 변경해도 된다. 원본을 수정해도 된다! 어차피 사라질꺼니까
///// </summary>
///// <returns></returns>
//
//class Pet{};
//class Knight 
//{
//public:
//	Knight() { cout << "Knight" << endl; }
//	Knight(const Knight& k) { cout << "Knight(const Knight& k)" << endl; }
//	Knight(Knight&& k)
//	{
//		cout << "Knight(Knight&& k)" << endl;
//	}
//	~Knight()
//	{
//		if (_pet)
//			delete _pet;
//	}
//
//	//복사대입 연산자
//	Knight& operator=(const Knight& k)
//	{
//		cout << "복사대입 연산자" << endl;
//		_hp = k._hp;
//
//		//이건 얕은복사. 모든 knight객체가 하나의 펫을 공유하게 된다. 
//		//_pet = k._pet;
//
//		//깊은 복사. 각각의 knight가 유일한 pet을 갖게 되지만, 복사비용이 비싸질 수 있다.
//		if (_pet == nullptr)
//		{
//			_pet = new Pet(*(k._pet));
//		}
//
//		return *this;
//	}
//
//	//이동 대입 연산자
//	Knight& operator=(Knight&& k)
//	{
//		cout << "이동 대입 연산자" << endl;
//
//		_hp = k._hp;
//		//이동 복사를 사용하면, 얕은 복사를 사용해도 된다.
//		//어차피 넘겨받는 값은 rvalue이므로, 이 연산의 호출이 끝나면 소멸될 객체이다.
//		//따라서,,, 소멸될 애가 쓰던거를 넘겨받아도 문제가 없다.
//		_pet = k._pet;
//		k._pet = nullptr;
//
//		return *this;
//	}
//public:
//	int _hp = 100;
//	Pet* _pet = nullptr;
//};
//
//void TestKnightCopy(Knight k)
//{
//	k._hp = 200;
//}
//
//void TestKnightCopyByRef(Knight& k)
//{
//	k._hp = 200;
//}
//
//void TestKnightCopyByConstRef(const Knight& k)
//{
//	//이 경우, knight의 멤버함수 중에서도 const가 붙은 함수만 호출 가능하다.
//	//const 가 붙은 함수란, 객체의 값을 건드리지 않겠다고 약속한 함수라고 생각하면 된다.
//	cout << "in function : " << k._hp << endl;
//}
//
//void TestKnight_Rvalue(Knight&& k)
//{
//	//오른값을 받기 위해서는 const가 붙은 함수여야 가능했는데,
//	//이 경우에는 const가 없는 함수지만, 오른값을 받아준다.
//	k._hp = 200;
//}
//
//int main()
//{
//	//[1]왼값 vs 오른 값
//	int a = 3;
//	//a는 왼값이다. 수정할 수 있는 값
//	//3은 오른값이다. lvalue가 아니기 때문이다. 
//
//	cout << "Case1 : 복사에 의해서 객체에 접근하기" << endl;
//	{
//		Knight k1;
//		cout << k1._hp << endl;
//		TestKnightCopy(k1);
//		TestKnightCopy(Knight());  //가능?
//		cout << k1._hp << endl;
//	}
//	//결과 : 원본에 대한 아무런 변화가 없다. 또한 원본을 넘겨주는 과정에서 복사비용이 발생한다.
//	//매개변수로 넘겨주는 객체는 어딘가에 저장될 필요가 없는 일회성 객체이다. \
//	//따라서 rvalue를 전달할 수 있다.
//
//	cout << endl;
//	cout << "Case2 : 참조값 전달에 의해서 객체에 접근하기" << endl;
//	{
//		Knight k1;
//		cout << k1._hp << endl;
//		TestKnightCopyByRef(k1);
//		//TestKnightCopyByRef(Knight()); //불가능
//		cout << k1._hp << endl;
//	}
//	//결과 : 원본에 대한 변화가 있다. 어떤 생성자로 전달하는 건지...?
//	//이 경우는 매개변수로 넘겨준 객체가 원본에 영향을 끼친다.
//	//그런데 rvalue를 넘겨주게 되면, 함수종료 후 원본이 변경된 객체는 사라져서 무용지물이 된다.
//	//이런 비효율적인 짓을 하지말라는 의미인지, 컴파일러가 거절한다.
//
//	cout << endl;
//	cout << "Case3 : const Knight& knight 호출" << endl;
//	{
//		Knight k1;
//		cout << k1._hp << endl;
//		TestKnightCopyByConstRef(k1);
//		TestKnightCopyByConstRef(Knight());
//		cout << k1._hp << endl;
//	}
//	//결과 : 원본에 대한 변화가 있을 수 없다. const자료형이기 때문이다.
//	//마찬가지로 const로 넘겨받으면 원본에 대한 변경이 없기 때문에, rvalue를 받는다.
//
//	cout << endl;
//	cout << "Case4 : 오른값만 받는 함수를 호출" << endl;
//	{
//		Knight k1;
//		cout << k1._hp << endl;
//		//TestKnight_Rvalue(k1); //불가. k1은 lvalue이다. 
//		TestKnight_Rvalue(Knight()); //가능
//		TestKnight_Rvalue(static_cast<Knight&&>(k1)); //이렇게 했을때 원본에 대한 변경이 일어난다!!
//		cout << k1._hp << endl;
//	}
//	//결과 : 원본에 대한 변화가... 뭐랄까 있긴한데 그게 의미는 없다. 어차피 사라질 값이기 때문이다.
//	// rvalue를 넘겨준다는 것은, 원본을 유지하지 않아도 된다! 쓰고 버려도 된다! [이동 대상]이다! 하는 뜻이다.
//	
//	cout << endl;
//	{
//		Knight k2;
//		k2._pet = new Pet;
//		k2._hp = 150;
//
//		Knight k3;
//
//		//k2를 더이상 사용할 필요가 없다!
//		//k2의 펫 객체를 뺏어오자!
//
//		k3 = k2; //복사 대입 연산자
//		k3 = static_cast<Knight&&>(k2); // 이동 대입 연산자
//		k3 = move(k2); //이것도 이동 대입 연산자를 사용한다
//	}
//	//결론
//	//[1] 복사의 경우 복사비용이 발생하여 무거울 수 있는데, 이동은 가볍게 수행할 수 있다.
//	//[2] 오른값 참조는 원본을 걱정하지 않고, 마음껏 사용할 수 있다.
//
//	//번외편 : unique pointer
//	//객체에 대한 포인터가 유일해야한다.
//
//	unique_ptr<Knight> uptr1 = make_unique<Knight>();
//	//Knight* ptr = uptr1; //불가능
//	//auto* ptr2 = uptr1; //불가능
//	//unique_ptr<Knight> uptr2 = uptr1; //불가능	
//	unique_ptr<Knight>uptr2 = move(uptr1); //이건 가능. 하지만, uptr1은 더이상 사용 불가
//
//	cout << uptr2->_hp << endl;
//	//cout << uptr1->_hp << endl; //uptr1에는 더이상 knight객체가 남아있지 않다.
//
//
//}