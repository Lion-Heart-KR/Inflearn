#include <iostream>
#include <bitset>

#ifdef WORK

using namespace std;

//��ȣ�� ���־� right shift�� �ϴ���, ��ȣ��Ʈ�� �������� �ʴ´�.
unsigned char flag;

int main() 
{
#pragma region ��Ʈ����
	//���� �ʿ��Ѱ�?
	//��Ʈ������ ������ �ʿ��� ��
	// - ��ǥ�����δ� bit flag

	// ~ bitwise not(bit flip)
	//���� ������ ��� ��Ʈ�� �������, 0��1, 1�� 0���� �ٲ������
	
	//& bitwise and 
	//�� ������ ���� ��Ʈ�� ������� and������ ������

	// | bitwise or
	//�� ������ ���� ��Ʈ�� ������� or������ ������

	// ^ bitwise xor
	//�� ������ ���� ��Ʈ�� ������� xor������ ������
	//�� �� �����ؼ� ����ϸ� ���󺹱͵�

	/*int a = 12;
	int b = 123;

	a = a ^ b;
	cout << a << endl;
	a = a ^ b;
	cout << a << endl;*/

	// << shiftleft bit
	//��Ʈ���� N��ŭ �������� �̵���Ų��.
	//������ N���� ��Ʈ�� ��������.
	// �������� N���� ��Ʈ�� 0���� ä������.
	// *2�� �� �� �����Ϸ��� shift������ ����ϴ� ��찡 ����.
	// ��Ʈ�� �ֻ��� ��Ʈ�� �ű�� ���ؼ� ����ϴ� ��쵵 �ִ�.

	// >> shiftright
	// ��Ʈ���� N��ŭ ���������� �̵���Ų��.
	// �������� N���� ��Ʈ�� ��������.
	// ���ʿ� �����Ǵ� N���� ��Ʈ
	// - ��ȣ��Ʈ�� �����ϴ� ��쿡�� ��ȣ��Ʈ�� ���󰣴�(��ȣ�ִ� ������� �� �κ��� ����) : ��� 1�� ä������.
	// - �װ� �ƴ϶�� 0�̴� : ��� 0���� ä������.

	int num = 10;
	cout << bitset<8>(num) << endl;
	num = num >> 1;
	cout << bitset<8>(num) << endl;
	num = num << 1;
	cout << bitset<8>(num) << endl;

	num = -40;
	cout << bitset<8>(num) << ":" << num << endl;
	num = num >> 2;
	cout << bitset<8>(num) << ":" << num << endl;

	//bit flag �ǽ�
	//0b0000[����][����][����][���߿� ��]

	//�������·� �����
	flag = (1 << 3);

	//���̻��¸� �߰�(���� + ����)
	flag |= (1 << 2);

	//�������� Ȯ���ϰ� �ʹ� : bitmask
	//(1<<3)bit�� 1�̸� ����� true�̰�, �ƴ϶��, false�̴�.
	bool isInvincible = ((flag & (1 << 3)) != 0);
	cout << isInvincible << endl;

	//�����̰ų� �������� Ȯ���ϰ� �ʹٸ�?
	bool isinvincibleORstun = ((flag & (1 << 3)) != 0 || (flag & (1 << 2)) != 0);
	int mask = ((1 << 3) | (1 << 1));
	isinvincibleORstun = (flag & mask) != 0;
	isinvincibleORstun = ((flag & 0b1010) != 0);
	cout << isinvincibleORstun << endl;




#pragma endregion

}

#endif