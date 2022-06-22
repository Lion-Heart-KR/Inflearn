#include <iostream>
using namespace std;
#ifdef WORK

int main() 
{
	//seed�� ����
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
		cout << "����(1) ����(2) ��(3) ����ּ���!" << endl;

		if (win == 0 && lose == 0) {
			cout << "> ���� �·� : ����" << endl;
		}
		else {
			cout << fixed;
			cout.precision(1);
			cout << "> ���� �·� : " << ((float)win / (float)(win + lose)) * 100 << "%" << endl;
			cout << "> ���� �·� : " << win*100 / (win+lose) << "%" << endl;
		}

		//����ڰ� ������ ��
		//cin >> input;
		input = 1 + rand() % 3;
		computer = 1 + rand() % 3;

		switch (input)
		{
		//����

		case SCISSORS:
			if (computer == SCISSORS)
				cout << "����(��) vs ����(��ǻ��) �����ϴ�." << endl;
			else if (computer == ROCK) {
				cout << "����(��) vs ����(��ǻ��) �����ϴ�." << endl;
				lose++;
			}
			else {
				cout << "����(��) vs ��(��ǻ��) �̰���ϴ�." << endl;
				win++;
			}
			break;
		//����
		case ROCK:
			if (computer == SCISSORS) {
				cout << "����(��) vs ����(��ǻ��) �̰���ϴ�." << endl;
				win++;
			}
			else if (computer == ROCK)
				cout << "����(��) vs ����(��ǻ��) �����ϴ�." << endl;
			else {
				cout << "����(��) vs ��(��ǻ��) �����ϴ�." << endl;
				lose++;
			}
			break;
		//��
		case PAPER:
			if (computer == SCISSORS) {
				cout << "��(��) vs ����(��ǻ��) �����ϴ�." << endl;
				lose++;
			}
			else if (computer == ROCK) {
				cout << "��(��) vs ����(��ǻ��) �̰���ϴ�." << endl;
				win++;
			}
			else
				cout << "��(��) vs ��(��ǻ��) �����ϴ�." << endl;
			break;
		default:
			flag = false;
			break;
		}
	}
	
}
#endif