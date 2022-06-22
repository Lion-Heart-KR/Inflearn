#include <iostream>
using namespace std;
#ifdef WORK

int main() 
{
	//seed값 설정
	srand(time(0));

	const int SCISSORS = 1;
	const int ROCK = 2;
	const int PAPER = 3;

	int input;
	int computer;
	int winningRate;
	int win = 0;
	int lose = 0;
	bool flag = true;

	while (flag) {
		cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;

		if (win == 0 && lose == 0) {
			cout << "> 현재 승률 : 없음" << endl;
		}
		else {
			cout << fixed;
			cout.precision(1);
			cout << "> 현재 승률 : " << ((float)win / (float)(win + lose)) * 100 << "%" << endl;
			cout << "> 현재 승률 : " << win*100 / (win+lose) << "%" << endl;
		}

		//사용자가 선택한 값
		//cin >> input;
		input = 1 + rand() % 3;
		computer = 1 + rand() % 3;

		switch (input)
		{
		//가위

		case SCISSORS:
			if (computer == SCISSORS)
				cout << "가위(님) vs 가위(컴퓨터) 비겼습니다." << endl;
			else if (computer == ROCK) {
				cout << "가위(님) vs 바위(컴퓨터) 졌습니다." << endl;
				lose++;
			}
			else {
				cout << "가위(님) vs 보(컴퓨터) 이겼습니다." << endl;
				win++;
			}
			break;
		//바위
		case ROCK:
			if (computer == SCISSORS) {
				cout << "바위(님) vs 가위(컴퓨터) 이겼습니다." << endl;
				win++;
			}
			else if (computer == ROCK)
				cout << "바위(님) vs 바위(컴퓨터) 비겼습니다." << endl;
			else {
				cout << "바위(님) vs 보(컴퓨터) 졌습니다." << endl;
				lose++;
			}
			break;
		//보
		case PAPER:
			if (computer == SCISSORS) {
				cout << "보(님) vs 가위(컴퓨터) 졌습니다." << endl;
				lose++;
			}
			else if (computer == ROCK) {
				cout << "보(님) vs 바위(컴퓨터) 이겼습니다." << endl;
				win++;
			}
			else
				cout << "보(님) vs 보(컴퓨터) 비겼습니다." << endl;
			break;
		default:
			flag = false;
			break;
		}
	}
	
}
#endif