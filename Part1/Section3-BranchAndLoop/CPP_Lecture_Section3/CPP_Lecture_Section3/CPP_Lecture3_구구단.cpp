#include <iostream>
using namespace std;
#ifdef WORK

int main() 
{
	//Quiz1) �����
	//������ �Է��� ������ �̿��Ͽ� N*N���� ���� ��Ÿ��
	int num = 0;
	//cin >> num;

	/*for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << '*';
		}
		cout << endl;
	}*/

	//Quiz2) �����2
	//1������ �����ؼ� �ٸ��� �����ϸ鼭 ���� ����
	//N��° �ٿ��� N���� ���� ���

	/*for (int i = 0; i < num; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << '*';
		}
		cout << endl;
	}*/

	//Quiz3)
	//N������ �����ؼ� �� ���� 1���� �پ��� ���·� ������ּ���
	/*for (int i =num; i > 0; i--) {
		for (int j = i; j>0  ; j--) {
			cout << '*';
		}
		cout << endl;
	}*/

	//Quiz4)
	//������ ������ 2~9���� ������ֵ���
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++) {
			cout << i << '*' << j << '=' << i * j << endl;
		}
		cout << endl;
	}
}

#endif