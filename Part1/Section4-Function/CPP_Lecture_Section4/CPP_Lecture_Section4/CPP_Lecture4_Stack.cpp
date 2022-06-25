//#include <iostream>
//using namespace std;
//
////Subject : 호출스택
//
//void Func2(int a, int b); //변수의 이름은 생략해도되지만, 변수이름에도 의미가 있기에, 잘 생략하지 않는 편이다.
//void Func3(float b);
//
//void Func1() {
//	cout << "Func1" << endl;
//
//	//push2 : 뒤에있는 매개변수를 먼저 넘겨준다.
//	//push1
//	//call Func2
//	//근데, Func2가 할당된 주소가 없음. 어디로 점프해야 하는지 모름. 그래서 위에 선언을 해줘야함.
//
//	Func2(1,2);
//}
//
//void Func2(int a, int b) {
//	cout << "Func2" << endl;
//
//	Func3(3.3);
//}
//
//void Func3(float a) {
//	cout << "Func3" << endl;
//}
//
//int main() 
//{
//	cout << "main" << endl;
//	Func1();
//
//}