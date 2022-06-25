#include <iostream>
using namespace std;

//오버로딩 : 중복정의 : 함수 이름의 재사용
// - 어떤 함수를 골라야할지 구분할 수 있다면, 오버로딩이 가능하다.
// - 매개변수의 개수가 다르거나
// - 매개변수의 타입이 다르거나
// - 매개변수의 순서가 다르거나(int a, float b), (float a, int b)
// - 반환형식만 다른 두 함수는 오버로딩 할 수 없다.

int Add(int a, int b) {
	return a + b;
}

float Add(float a, float b) {
	return a + b;
}

//기본인자값
//기본값을 설정하는 매개변수는 항상 제일 마지막에 와야한다.
//기본인자값은 여러개를 사용해도 된다. 다만, 여러개의 기본인자값이 있을 때 하나를 건너뛰고 특정한 기본인자만 따로 설정해줄 수는 없다.
//기본인자값이 있으면, 함수를 호출할 때 인자를 특정해주지 않아도 된다.

void SetPlayerInfo(int hp, int mp, int attack, int guildId = 0, int sex = 0)
{
	cout << "hp : " << hp << endl;
	cout << "mp : " << mp << endl;
	cout << "attack : " << attack << endl;
	cout << "guildId : " << guildId << endl;
	cout << "sex : " << sex << endl;
}

//스택 오버플로우
// 계속된 함수호출로 인해서 스택이 가득차게되고 넘치는 상황

__int64 fact(int n) {
	if (n <= 1) {
		return 1;
	}
	return fact(n - 1) * n;
}

int main() {
	float result = Add(1.2f, 2.3f);

	//SetPlayerInfo(100, 40, 10, 1);

	cout << fact(20000) << endl;
}