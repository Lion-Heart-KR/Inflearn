//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// 전달 참조(forwarding reference = 보편참조, universal reference)
///// </summary>
///// <returns></returns>
//
//class Knight
//{
//public:
//	Knight() { cout << "기본 생성자" << endl; }
//	Knight(const Knight&) { cout << "복사 생성자" << endl; }
//	Knight(Knight&&) { cout << "이동 생성자" << endl; }
//
//};
//
//void Test_RValueRef(Knight&& k)
//{
//
//}
//
//void Test_Copy(Knight k){}
//
//template<typename T>
////void Test_forwardingRef(const T&& param)이렇게 되면 전달참조가 아니라, 오른값참조다.
//void Test_forwardingRef(T&& param)
//{
//	//왼값을 넣어주면 왼값 참조
//	//오른값을 넣어주면 오른값 참조
//
//	//만약 원본이 왼값 참조라면 복사 Test_Copy(param)
//	//원본이 오른값 참조라면, move를 사용해서 오른값을 넘겨준다. 이동생성자 Test_Copy(move(param))
//
//	//왼값 참조 혹은 오른값 참조를 적절히 넘겨준다.
//	//왼값이면 복사, 오른값이면 이동
//	Test_Copy(std::forward<T>(param));
//
//	//여기서 Test_Copy(param)를 호출하면, 이동 생성자가 아니라 복사생성자가 호출된다. param은 왼값이기 때문이다.
//	//이동생성자가 호출되기 위해서는 move(param)을 인자로 넣어줘야한다.
//}
//
//
//int main()
//{
//	//오른값 참조 : && -> 오른값 참조
//	//보편 참조 : 
//
//	Knight k1;
//	Test_RValueRef(std::move(k1)); //오른값 참조 전달
//	Test_forwardingRef(move(k1)); //오른값 참조 전달
//	Test_forwardingRef(k1);            //왼값 전달... 통과!?
//
//	//오잉? k1은 왼값인데!?
//	auto&& k2 = k1;
//
//	//오잉? move는 오른값인데!?
//	auto&& k3 = std::move(k1);
//
//	//공통점 : 형식 연역(type deduction, 형식 추론 : auto, template)이 일어날 때 전달 참조가 발생한다.
//
//	//------------------------------------------------------------------------------------------------------------
//	//전달참조를 만든 이유
//	//template 변수를 2개쓰면, 경우의 수가 4개가 됨. 전달참조가 없으면 함수 4개 만들어야 함. 감당 가능?? 
//
//	Knight& k4 = k1; //왼값 참조
//	Knight&& k5 = std::move(k1); //오른값 참조
//
//	//오른값 : 왼값이 아닌 것 => 단일식에서 벗어나면 사용불가능한 것들 => k5는 계속 사용할 수 있다.
//	//오른값 참조 : 오른값만 참조할 수 있는 참조 타입 => 
//	//k5의 타입은 오른값 참조타입이긴 하지만, k5는 왼값이다. 허허...
//	//Test_RValueRef(move(k5));
//
//	//이건 오른값을 넘겨주는거다.
//	//하지만, 이 함수는 이거를 왼값으로 받는다. 왜냐면...
//	//param이라는 함수의 매개변수를 재사용할 수 있기 때문이다.
//	cout << "************************************" << endl;
//	Test_forwardingRef(move(k1)); //이동 생성자
//	Test_forwardingRef(k1); //복사 생성자
//
//	return 0;
//}