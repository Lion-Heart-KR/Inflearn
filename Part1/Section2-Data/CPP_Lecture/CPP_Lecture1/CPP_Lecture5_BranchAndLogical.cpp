#include <iostream>

#ifdef WORK
using namespace std;

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;
bool test;
int hp = 100;
bool isInvincible = true;

int main() 
{
#pragma region �񱳿���
	//���� �ʿ��Ѱ�?
	//ex)ü���� 0�� ��'��' ���
	//ex)ü���� 30% ������'��', �ñر� �ߵ�
	//ex)����ġ�� 100%��'��' ������

	// a == b : a�� b�� ������? ������ true, �ٸ��� false
	int a = 1;
	int b = 2;
	isSame = (a == b);
	cout << isSame << endl;

	// a != b : a�� b�� �ٸ���? : �ٸ��� true, ������ false
	isDifferent = (a != b);
	cout << isDifferent << endl;

	// a > b
	// a >= b
	isGreater = (a > b);
	cout << isGreater << endl;

	//a<b
	//a<=b
	isSmaller = (a < b);
	cout << isSmaller << endl;
#pragma endregion

#pragma region ������
	//���� �ʿ��ұ�?
	//���ǿ� ���� ���� ��� �ʿ��� ��
	//ex)�α��� : ���̵�� ��й�ȣ�� ��� ���ƾ� �Ѵ� : AND
	//ex)��� �������̰ų� ��ڰ����̸� ��� �ػ��� �����ϴ� : OR
	// ! : not��ȣ true -> false, false -> true
	test = !isSame;

	// && : AND
	//a&&b : �� �� true �� true, �ϳ��� false�� false
	test = (hp <= 0 && isInvincible == false);//����

	// || : OR
	// a || b -> �� �� �ϳ��� 1�̸� 1, �� �� 0�̸� 0
	test = (hp > 0 || isInvincible == true); //��Ƶ�!

#pragma endregion
}
#endif