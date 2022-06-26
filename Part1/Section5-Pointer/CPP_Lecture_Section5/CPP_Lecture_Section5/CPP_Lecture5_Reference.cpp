//#include <iostream>
//using namespace std;
//
//struct StatInfo
//{
//	int hp;
//	int attack;
//	int defence;
//};
//
////Call by address
//void CreateMonster(StatInfo* info)
//{
//	info->hp = 100;
//	info->attack = 8;
//	info->defence = 5;
//}
//
////Call by value : 값을 수정하지 않고, 값을 읽기만 하는 경우라면 상관없음
////값을 수정하려고 한다면, 이 방식으로 사용하면 안됨.
//void CreateMonster(StatInfo info) 
//{
//	info.hp = 100;
//	info.attack = 8;
//	info.defence = 5;
//}
//
//// 1) 값 전달 방식
//void PrintInfoByCopy(StatInfo info) 
//{
//	cout << "--------------------------" << endl;
//	cout << "HP : " << info.hp << endl;
//	cout << "ATT : " << info.attack << endl;
//	cout << "DEF : " << info.defence << endl;
//	cout << "--------------------------" << endl;
//}
//
//// 2) 주소 전달 방식
//void PrintInfoByPtr(StatInfo* info)
//{
//	cout << "--------------------------" << endl;
//	cout << "HP : " << info->hp << endl;
//	cout << "ATT : " << info->attack << endl;
//	cout << "DEF : " << info->defence << endl;
//	cout << "--------------------------" << endl;
//}
//
//// 3) 참조 전달 방식
//void PrintInfoByRef(StatInfo& info) {
//	cout << "--------------------------" << endl;
//	cout << "HP : " << info.hp << endl;
//	cout << "ATT : " << info.attack << endl;
//	cout << "DEF : " << info.defence << endl;
//	cout << "--------------------------" << endl;
//}
//
//void setByValue(int number) {
//	number++;
//}
//
//void setByPtr(int* number) {
//	(*number)++;
//}
//
//void setByRef(int& number) {
//	number++;
//}
//
//// 3) 참조에의한 전달
//
////StatInfo 구조체가 1000바이트짜리 대형 구조체라면?
//// - 값 전달 방식 : 1000바이트가 복사된다.
//// - 주소 전달 방식 : 4byte or 8byte의 주소만 복사된다.
//// - 참조전달 : StatInfo& 는 4byte or 8byte
//// - 메모리 효율성 차이에서 큰 차이가 나게된다.
//
//int main() 
//{
//	//4byte 정수형 변수
//	//앞으로 변수를 저장하는 공간의 이름을 number라고 함.
//	//앞으로 number에서 뭘 꺼내거나, number에 뭘 넣는다고 하면
//	//컴파일러가 찰떡같이 알아듣고, 해당 주소에 값을 넣어주면 된다.
//	int number = 1;
//
//	//* 포인터 변수
//	//int값을 담은 변수의 주소를 담는 변수
//	int* pointer = &number;
//	*pointer = 2;
//
//	//참조형
//	//로우레벨(어셈블리) 관점에서 실제 작동 방식은 int*과 똑같다.
//	//같은 메모리공간에 대해서 다른 이름의 변수를 부여해주는 느낌이다.
//	//포인터와 마찬가지로 복사본이 아닌 원본에 대한 수정을 가능하게 해준다.
//
//	int& reference = number;
//
//	//C++관점에서는 number라는 바구니에 또다른 이름을 부여한 것.
//	//number라는 변수에 reference라는 다른 이름을 지어준 것.
//	//앞으로 reference 바구니에 뭘 꺼내거나 넣으면,
//	//실제 number바구니에 그 값을 꺼내거나 넣는것과 같은 결과가 나타난다.
//
//	reference = 3;
//
//	//참조형은 왜 사용할까?
//	//포인터의 사용성을 개선
//	//값전달의 비효율성을 개선
//	//짬뽕호로록 = 참조형
//
//
//
//
//	StatInfo info = { 100, 2, 5 };
//	CreateMonster(info);
//	PrintInfoByCopy(info);
//	PrintInfoByPtr(&info);
//	PrintInfoByRef(info);
//
//	//int value = 1;
//	//setByPtr(&value);
//	//cout << "after by ptr " << value << endl;
//	//setByValue(value);
//	//cout << "after by value " << value << endl;
//	////그냥 변수넘겨주듯이 넘겨주면 된당
//	////내부적으로 알아서 주소값 추출해서 사용한다. 개꿀이당
//	//setByRef(value);
//	//cout << "after by ref " << value << endl;
//
//}