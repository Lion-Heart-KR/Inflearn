//#include <iostream>
//using namespace std;
//
//// 1) 포인터 vs 배열
//// 2) 주의사항
//
////아래의 코드는 함수 내부에서 지역변수를 선언하고, 그 지역변수의 주소값을 반환하는 함수다.
////함수 안에 선언된 지역변수는 함수가 종료되고 나면 사라지기 때문에, 아래의 함수는 위험하다.
////함수 안에서의 일시적으로 존재하는 변수의 주소를 다루는 것은 위험하다.
//int* TestPointer() {
//	int a = 10;
//	return &a;
//}
//
//void TestWrong(int* ptr)
//{
//	int a[100] = {};
//	a[99] = 0xaaaaaaaa;
//	*ptr = 0x1234;
//}
//
//int main()
//{
//	int arr2D[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	// 이중포인터는 포인터변수의 주소값을 저장하는 변수다.
//	// 
//	// 1차원 배열의 경우 포인터변수에 배열이름을 넣어줌으로써, 그 배열의 시작주소를 저장할 수 있었으나
//	// 2차원 배열이라고해서 이중포인터에 배열이름을 넣어주는 것은 아니다.
//	// 
//	// 2차원 배열은 메모리상에서 1차원배열과 다를바없다.
//	// 따라서 2차원 배열의 이름도 단순히 첫 원소의 주소를 나타낼 뿐이다.
//	// 
//	// int** arr2dPtr = arr2D //불가능
//
//	//
//	//int(*ptr)[5] = arr2D;
//	int* ptrs[2] = { arr2D[0], arr2D[1] };
//
//	/*for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << ptrs[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	int* a = TestPointer();
//	TestWrong(a);
//
//	cout << *a << endl;
//
//}