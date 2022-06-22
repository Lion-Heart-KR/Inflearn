#include <iostream>
using namespace std;

//열거형
//초기값이 자동으로 설정된다.
//default는 0에서 시작해서 +1씩

//const는 메모리에 올라가는 경우도 있지만, 메모리에 올라가지 않고, 단순히 치환해서 사용하는 경우도 있다.
//반면 열거형으로 선언하면, 메모리에 올라가지 않고, 항상 치환해서 사용한다. 따라서 메모리 측면에서 이득이당

const int SCISSORS = 1;
const int ROCK = 2;
const int PAPER = 3;

enum ENUM_SRP
{
	E_SCISSORS=1, 
	E_ROCK, 
	E_PAPER
};

// #이 붙은거 : 전처리 지시문
// 1)전처리 2)컴파일 3)링크
// #include <iostream> : iostream이라는 파일을 찾아서 해당 내용을 그냥 복붙!
// 코드를 그대로 복사해버린다.
#define DEFINE_TEST 1+2 //3이 아니라 1+2를 복사해서 코드에 넣어버린다.
#define D_SCISSORS 1
#define D_ROCK 2
#define D_PAPER 3
#define HELLO_WORLD cout << "Hello World!" << endl;

int main() 
{
	HELLO_WORLD
	auto a = &SCISSORS;

}