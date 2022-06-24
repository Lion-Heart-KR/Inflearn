#include <iostream>
#ifdef WORK

using namespace std;

//오늘의 주제 : 함수(프로시저, 메소드, 함수, 루틴)

/*
* input으로 무엇을 받을지
* output으로 무엇을 뱉을지 정해준다.
*
* 반환타입 함수이름([매개변수...])
* {
*   함수내용
*   ...
*   return
* }
*/

//Hello World를 콘솔에 출력하는 함수를 만들어보자!
//input : 없음 / output : 없음
//타입 : int float double char void

void printHello() {
    cout << "그 날에 너는 맘이 편했을까" << endl;
}

//정수를 입력받아서, 콘솔에 출력하는 함수를 만들어보자
void printNumber(int a) {
    cout << "넘겨준 숫자는 " << a << "입니다." << endl;
}

//입력받은 정수에 2를 곱해서 반환하는 함수
int MulByTwo(int a) {
    return a * 2;
}

//두 숫자를 곱해서 결과물을 뱉는 함수
int MulByTwoParams(int a, int b) {
    printNumber(a);
    printNumber(b);
    return a * b;
}


int main()
{
    //printHello();
    //printNumber(321);
    //cout << MulByTwo(21) << endl;
    cout << MulByTwoParams(919, 99) << endl;
}

#endif