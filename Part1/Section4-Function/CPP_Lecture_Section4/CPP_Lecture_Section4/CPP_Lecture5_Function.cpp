#include <iostream>
using namespace std;

//�����ε� : �ߺ����� : �Լ� �̸��� ����
// - � �Լ��� �������� ������ �� �ִٸ�, �����ε��� �����ϴ�.
// - �Ű������� ������ �ٸ��ų�
// - �Ű������� Ÿ���� �ٸ��ų�
// - �Ű������� ������ �ٸ��ų�(int a, float b), (float a, int b)
// - ��ȯ���ĸ� �ٸ� �� �Լ��� �����ε� �� �� ����.

int Add(int a, int b) {
	return a + b;
}

float Add(float a, float b) {
	return a + b;
}

//�⺻���ڰ�
//�⺻���� �����ϴ� �Ű������� �׻� ���� �������� �;��Ѵ�.
//�⺻���ڰ��� �������� ����ص� �ȴ�. �ٸ�, �������� �⺻���ڰ��� ���� �� �ϳ��� �ǳʶٰ� Ư���� �⺻���ڸ� ���� �������� ���� ����.
//�⺻���ڰ��� ������, �Լ��� ȣ���� �� ���ڸ� Ư�������� �ʾƵ� �ȴ�.

void SetPlayerInfo(int hp, int mp, int attack, int guildId = 0, int sex = 0)
{
	cout << "hp : " << hp << endl;
	cout << "mp : " << mp << endl;
	cout << "attack : " << attack << endl;
	cout << "guildId : " << guildId << endl;
	cout << "sex : " << sex << endl;
}

//���� �����÷ο�
// ��ӵ� �Լ�ȣ��� ���ؼ� ������ �������Եǰ� ��ġ�� ��Ȳ

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