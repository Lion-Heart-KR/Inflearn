//#include <iostream>
//using namespace std;
//
////포인터 연산
//
//// 1) 주소 연산자
//// 2) 산술 연산자
//// 3) 간접 연산자
//// 4) 간접 멤버 연산자
//
//struct Player {
//	int hp;
//	int attack;
//};
//
//int main() 
//{
//	double number = 1;
//
//	// 1) 주소 연산자(&)
//	// - 해당 변수의 주소를 알려주세요!
//	// - 해당 변수 타입에 맞는 포인터를 사용
//
//	double* pointer = &number;
//
//	// 2) 산술 연산자(+, -)
//	// 주소는 원래 자료형의 크기만큼 증가한다.
//	// int형이라면 4byte씩, double이라면 8byte씩.
//	// 다음 칸으로 이동한다고 생각하면 된다.
//	// 배열 생각하면 되는거네
//	// Array+1 => Array[0]->Array[1] : 자료형 크기만큼 주소값이 증가하는거지
//	pointer += 1;
//
//	// 3) 간접 연산자(*)
//	// - 포인터가 가리키는 주소로 가서 그 곳에 뭔가를 요리조리 한다
//
//	// 4) 간접 멤버 연산자(->)
//
//	Player p1;
//	p1.hp = 100;
//	p1.attack = 15;
//
//	Player* ptr_p1 = &p1;
//	ptr_p1->attack = 20;
//
//	cout << p1.attack << endl;
//
//	(*ptr_p1).attack = 21;
//	cout << p1.attack << endl;
//}