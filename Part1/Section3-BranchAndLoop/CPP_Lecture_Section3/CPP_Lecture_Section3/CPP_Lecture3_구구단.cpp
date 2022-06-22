#include <iostream>
using namespace std;
#ifdef WORK

int main() 
{
	//Quiz1) 별찍기
	//유저가 입력한 정수를 이용하여 N*N개의 별을 나타냄
	int num = 0;
	//cin >> num;

	/*for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << '*';
		}
		cout << endl;
	}*/

	//Quiz2) 별찍기2
	//1개부터 시작해서 줄마다 증가하면서 별을 찍어라
	//N번째 줄에는 N개의 별을 출력

	/*for (int i = 0; i < num; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << '*';
		}
		cout << endl;
	}*/

	//Quiz3)
	//N개부터 시작해서 줄 마다 1개씩 줄어드는 형태로 만들어주세용
	/*for (int i =num; i > 0; i--) {
		for (int j = i; j>0  ; j--) {
			cout << '*';
		}
		cout << endl;
	}*/

	//Quiz4)
	//전설의 구구단 2~9단을 출력해주뎨용
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++) {
			cout << i << '*' << j << '=' << i * j << endl;
		}
		cout << endl;
	}
}

#endif