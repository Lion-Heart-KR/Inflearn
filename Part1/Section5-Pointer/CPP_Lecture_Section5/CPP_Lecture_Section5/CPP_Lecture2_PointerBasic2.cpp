//#include <iostream>
//using namespace std;
//
//// Pointer변수에 타입은 왜 붙여줄까?
//// * : 포인터라는 의미, 주소를 저장하는 바구니, 4/8바이트의 고정크기
//// =>포인터에 추가적인 정보를 제공
//// 주소에 가면 뭐가 있는지에 대한 정보가 된다.
//// 주소가 가리키는 곳에 가서 몇 바이트를 읽어서 사용해야할지 알아야 하니까 자료형을 함께 선언해주는 것이다.
//// 
//
//void SetHP(int* hp) {
//	(*hp)++;
//}
//
//int main() 
//{
//	int hp = 100;
//	SetHP(&hp);
//	cout << hp << endl;
//
//	//Type의 불일치
//
//	int number = 0x1234;
//	__int64* ptr2 = (__int64*)&number;
//
//	//4byte변수의 주소를 8byte변수의 포인터변수로 지정하면다른 영역까지 덮어써버린다. 
//	//중요한 값이 들어있던 곳이라면, 사고가 발생하는것이당
//	//*ptr2 = 0xAABBCCDDEEFF;
//
//	/*cout << number << endl;*/
//
//}