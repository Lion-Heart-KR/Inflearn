#include <iostream>
using namespace std;

//������ ���� : �ݺ���

int main() 
{
	//while�� : ~�ϴ� ����
	//ex) ������ ������ �� ������ ������ �����ض�
	//ex) �������� ������ ������ ��� �̵��϶�

	//int cnt = 0;

	////�� ���� ������� ���� �� ����
	//while (cnt < 5) {
	//	cout << cnt++ << endl;
	//}

	////��� �� ���� ������ ������
	//do {
	//	cout << cnt++ << endl;
	//} while (cnt < 10);

	////for(�ʱ��;���ǽ�;������)
	////1. �ʱ�ȭ : int i = 0;
	////2. ���ǽ� �Ǻ� : i<10
	////3. ���� ���๮ ���� : cout
	////4. ������ ���� : i++
	////5. 2������ ���ư��� �ݺ�
	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}

	//break, continue
	//break : �ݺ����� �ߴ��ϰ� ��������
	//continue : �Ʒ��� ���๮�� �������� �ʰ�, ���� �ݺ����� �Ѿ
	//int round = 1;
	//int hp = 100;
	//int damage = 21;

	////���� ���� : ������ ����
	//while (true) {
	//	hp -= damage;

	//	//ü���� 0�̸����� �������� �ʵ�����.
	//	if (hp < 0)
	//		hp = 0;

	//	//system message
	//	cout << "Round" << round << " monster HP : " << hp << endl;

	//	if (hp == 0)
	//	{
	//		cout << "monster has died" << endl;
	//		break;
	//	}

	//	if (round == 5) {
	//		cout << "round ends" << endl;
	//		break;
	//	}

	//	round++;
	//}


	//1~10������ Ȧ���� ����ϱ�
	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0)
			continue;
		cout << i << endl;
	}
}