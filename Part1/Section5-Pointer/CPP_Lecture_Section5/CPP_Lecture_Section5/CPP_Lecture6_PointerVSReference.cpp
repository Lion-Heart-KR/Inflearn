//#include <iostream>
//using namespace std;
//#define OUT
//
//struct StatInfo {
//	int hp;
//	int attack;
//	int defence;
//};
//
//void PrintStatInfo(const StatInfo& info);
//void PrintStatInfo(StatInfo* info);
//void ChangeInfo(StatInfo& info);
//
//int main() 
//{
//	StatInfo info;
//
//	// 포인터 vs 참조
//	// 성능 : 동일
//	// 편의성 : 참조 승
//	
//	// 1) 편의성 관련
//	// 편의성이 좋다는게 꼭 장점은 아니다.
//	// 포인터는 주소를 넘겨서 원본을 수정한다는 것을 함수의 호출 부분에서 확실하게 인지할 수 있지만
//	// 참조형 변수를 넘기는 것은 일반 변수를 넘기는 것과 동일한 방식으로 이루어지기 때문에 원본을 수정하는것인지 확실히 인지하지 못할 수 있다.
//	// 참조형 변수를 사용한 함수를 호출할 때 원본에 접근하는 느낌이 나지 않는다.
//
//	// 2) 초기화 여부
//	// 참조타입은 바구니의 2번째 이름을 지어주는 느낌
//	// -> 참조하는 대상이 없으면 안된다.
//	// -> 초기화를 반드시 해줘야 한다.
//	// 반면 포인터는 그냥 어떤 주소라는의미이므로, 대상이 실존하지 않을수도 있다.
//	// 포인터에서 '없다'는 NULL or nullptr을 넣어주면된다.
//	// 포인터를 매개변수로 주고받으면 항상 nullptr check를 해줘야한다.
//	// 쌓이다보면 nullptr check는 미세하게 성능을 갉아먹는다.
//	
//	// 3) 그래서 뭐가 더 좋냐?
//	// 팀바이팀
//	// 구글은 포인터를 사용한다.
//	// 언리얼엔진은 참조타입을 사용한다.
//	// 없는 경우를 고려해야하면 pointer
//	// 바뀌지 않고 읽는 용도라면 const type& reference
//	
//	// 그 외 일반적으로 ref를 사용할 때 값이 변경되는 상황이라면 어떻게 하는게 좋을까?
//	// (하나의 방법정도로 알아놓자)
//	// 이렇게 #define OUT을 선언하고, ref type의 변수를 넘겨줄 때 OUT을 함께 사용해준다.
//	// 이렇게, 원본을 수정하는 작업이 발생함을 간접적으로 알려준다.
//	// OUT에는 따로 값이 할당되지 않았기에, 전처리시 그냥 없는 문자 취급된다.
//	ChangeInfo(OUT info);
//
//	StatInfo* ptr; //ptr에 값을 할당해 주지 않아도 괜찮음
//	StatInfo& ref=info; //ref에는 값을 할당해 줘야함
//
//	// 포인터와 const
//	// const int* a
//	// a에 저장된 주소값을 바꿀 수 있다.
//	// a의 주소를 따라간 원본의 값은 바꿀 수 없다.
//	// int* const a
//	// a에 저장된 주소값을 바꿀 수가 없다.
//	// a의 주소를 따라간 원본의 값은 바꿀 수 있다.
//
//	int number1 = 10;
//	int number2 = 20;
//	const int* numPtr1 = &number1;
//	int* const numPtr2 = &number2;
//
//	numPtr1 = &number2;
//	//numPtr2 = &number1; 불가능
//
//	//*numPtr1 = 2; 불가능
//	*numPtr2 = 3;
//
//	const int& numRef = number1;
//	//numRef = 2; 불가능
//
//	PrintStatInfo(&info);
//	PrintStatInfo(info);
//
//
//	//포인터로 사용하던 것을 참조로 넘겨주는 방법
//	//실컷 포인터를 선언하여 요리조리 작업하고 있었는데 함수호출하려고 명세를 뙇 봤더니, 매개변수는 참조타입인 경우를 말함
//	//명세 : PrintByRef(StatInfo& info)
//	//호출방법 : PrintByRef(*pointer)
//
//	//참조로 사용하던 것을 포인터로 넘겨주는 방법
//	//명세 : PrintByPtr(StatInfo* info)
//	//호출방법 : PrintByPtr(&ref)
//}
//
//void PrintStatInfo(const StatInfo& info) {
//	cout << "----------------------" << endl;
//	cout << "HP : " << info.hp << endl;
//	cout << "Attack : " << info.attack << endl;
//	cout << "Defence : " << info.defence << endl;
//	cout << "----------------------" << endl;
//}
//
//void PrintStatInfo(StatInfo* info) {
//	if(info == nullptr)
//		return;
//
//	cout << "----------------------" << endl;
//	cout << "HP : " << info->hp << endl;
//	cout << "Attack : " << info->attack << endl;
//	cout << "Defence : " << info->defence << endl;
//	cout << "----------------------" << endl;
//}
//
////특정 조건을 만족하는 몬스터를 찾는 함수
//StatInfo* FindMonster()
//{
//	StatInfo* info;
//	//찾았다!
//	if(true)
//		return info;
//	else
//		return nullptr;
//}
//
//void ChangeInfo(StatInfo& info) {
//	info.hp = 200;
//}