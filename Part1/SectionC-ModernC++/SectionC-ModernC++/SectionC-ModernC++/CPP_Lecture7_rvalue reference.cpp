//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// 오른값(rvalue)참조와 std::move
///// -- C++11의 핵심변화
///// 
///// [1] 왼값(lvalue) vs 오른값(rvalue)
///// - lvalue : 단일식을 넘어서 계속 지속되는 개체(식이 수정할 수 있는 lvalue여야 합니다.)
///// - rvalue : lvalue가 아닌 나머지(임시 값, 열거형, 람다, i++ 등)
///// 
///// </summary>
///// <returns></returns>
//
//class Pet
//{
//
//};
//
//class Knight
//{
//public:
//	Knight() { cout << "Knight" << endl; }
//	Knight(const Knight& k) { cout << "const Knight& k" << endl; }
//
//	//이동 생성자
//	Knight(Knight&& knight)
//	{
//		cout << "Knight(Knight&& knight)" << endl;
//	}
//
//	~Knight()
//	{
//		if (_pet)
//			delete _pet;
//	}
//	//복사대입 연산자
//	void operator=(const Knight& knight) {
//		cout << "operator=(const Knight& knight)" << endl;
//
//		//이건 얕은 복사
//		//새로운 객체도, 같은 pet의 주소를 가리키게 된다. pet의 공동소유
//		_hp = knight._hp;
//		//_pet = knight._pet; //얕은복사
//
//		if(_pet == nullptr)
//			_pet = new Pet(*(knight._pet));//깊은 복사. 독립적 객체를 갖지만, 복사비용이 생각보다 비싸질 수 있다.
//
//
//
//	}
//
//	//이동 대입 연산자
//	void operator=(Knight&& knight) noexcept
//	{
//		cout << "operator=(Knight&& knight)" << endl;
//
//		//여기서 인자로 받는 knight는 어차피 사라지게 될거니까 막 써도 됨.
//
//		//이동 대입 연산자를 이용하면, 얕은복사를 쉽게 사용할 수 있다.
//		_hp = knight._hp;
//		_pet = knight._pet;
//
//		knight._pet = nullptr;
//	}
//
//	void PrintInfo() const
//	{
//
//	}
//
//public:
//	int _hp = 100;
//	Pet* _pet = nullptr;
//};
//
//void TestKnight_Copy(Knight knight) 
//{
//	//원본에 대해서는 아무런 변화가 일어나지 않는다.
//	//그리고 원본을 넘겨줄 경우에 복사비용(메모리)도 발생한다.
//	knight._hp = 200;
//}
//
//void TestKnight_CopyByRef(Knight& knight)
//{
//	//복사는 일어나지 않고, 원본에 대한 접근이 가능해진다.
//	knight._hp = 200;
//}
//
////여기서는 Knight class안에서도, const가	붙은 함수만 호출할 수 있다.
////일반 함수에서는 Kngiht객체의 멤버변수에 접근하여 값을 수정할 가능성이 있기 때문이다.
////반면 const가 붙은 함수에서는 객체의 멤버변수에 대한 값을 수정할 수 없기 때문이다.
//void TestKnight_CopyByConstRef(const Knight& knight)
//{
//	knight.PrintInfo();
//}
//
////오른값 참조를 받아주는 함수
////위에서 나온 함수들은 기본적으로 수정이 가능한 왼값을 받았고, 오른값을 받기 위해서는 수정할 수 없다는 의미의 const가 붙어야 가능했다.
//// 오른값 참조를 받는 함수는 말그대로 오른값을 받을 수 있는 것 같다.
//void TestKnight_RValueRef(Knight&& knight)
//{
//	//뭐 수정은 되는데, 이걸 어따 쓰노
//	//일단 얘는 함수끝나면 사라질 객체니까 니 맘대로 써도 된다! 하는 의미가 있다. => [이동 대상]이라는 말을 쓴다.
//	//원본을 유지하지 않아도 될 때의 장점
//	//
//	knight._hp = 20;
//	
//}
//
//int main()
//{
//	//[1] 왼값(lvalue) vs 오른값(rvalue)
//	int a = 3;
//	a = 4; //a는 계속 유지되는 왼값. 반면 3, 4는 계속 유지되지 않는 오른 값이다.
//	//(a++) = 45; //오른값이기에 불가능함.
//
//	Knight k1;
//
//	TestKnight_Copy(k1);
//
//	TestKnight_CopyByRef(k1);
//
//	//여기서 넘겨주는 객체는 딱 한 번만 임시로 생성되었다가 함수호출이 끝나면 사라지는 임시 객체이다. = rvalue다.
//	//rvalue는 지속적으로 유지되지 않기 때문에, 함수 안에서뭐... 값을 수정한다거나 할 수 없다? 한다해도 아무런 변화가 없다?
//	//그래서 const 참조값은 되고, 그냥 참조값은 안되는거다
//	//const는 수정하지 않으니까, 임시개체를 넘겨줘도 비효율적인 짓거리를 하지 않는다.
//	//TestKnight_CopyByRef(Knight()); 
//	TestKnight_CopyByConstRef(Knight()); //이거는 또 된다.
//
//	//lvalue는 못 받는다.
//	// TestKnight_RValueRef(k1); //불가
//	
//	//rvalue는 잘 받는다.
//	TestKnight_RValueRef(Knight());
//
//	//이렇게도 된다. 근데 왜 이걸쓰노 더 쉬운거 있는데??
//	////=>
//	TestKnight_RValueRef(static_cast<Knight&&>(k1));
//
//	Knight k2;
//	k2._pet = new Pet();
//	k2._hp = 1000;
//
//	Knight k3;
//	//k2를 더이상 사용할 필요가 없다! k2의 펫 객체를 뺏어오자!
//	//원본은 날려도 된다.
//	//k3 = static_cast<Knight&&>(k2); //move로 사용할 수 있다.
//	k3 = move(k2); //사실 이렇게 쓴다.
//
//	//핵심
//	//복사는 복사비용이 발생하여 무거울 수 있는데, 이동은 가볍게 수행할 수 있다.
//	//오른값 참조는 원본을 걱정하지 않고 마음껏 사용할 수 있다.
//
//	//단 하나만 존재해야하는 포인터
//	unique_ptr<Knight> uptrKnight = make_unique<Knight>();
//	unique_ptr<Knight> uptrKnight2 = uptrKnight; //불가
//	uptrKnight2 = move(uptrKnight);//이건 가능
//
//
//	return 0;
//}