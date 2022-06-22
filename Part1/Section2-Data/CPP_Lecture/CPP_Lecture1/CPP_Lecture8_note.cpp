#include <iostream>
#include <bitset>
using namespace std;

//���ǻ���, Tips

// 1)������ ��ȿ����
// �������� : ���� ��𼭵� ��밡��
// �������� : ������ ����� �Լ� �ȿ����� ��� ����
// ���� : { } �߰�ȣ�� ������ ������ ��������, �ߺ�����(������) �Ұ�

// 2)������ �켱����

// 3)Ÿ�� ��ȯ

// 4)��Ģ����

int main() 
{
#pragma region ��������ȿ����
	int hp = 100;
	cout << hp << endl;
#pragma endregion

#pragma region ������ �켱����
	//¦�����
	//%�� == �� ���� �������� �𸥴� -> ��ȣ�� �������.
	bool isEven(hp % 2 == 0);
#pragma endregion

#pragma region Ÿ�Ժ�ȯ
	int num = -77777;
	cout << num << endl;

	//short�� 2byte��, 77777�� ���� ���Ѵ�. ���� ���� 2byte�� ����ȴ�.
	short num2 = (short)num;
	cout << num2 << endl;

	float num3 = (float)num;
	cout << num3 << endl;

	//��Ʈ�� �ٲ����� �ʴ´�. 32bit���� �ֻ��� ��Ʈ�� ��ȣ��Ʈ�� ������� ���� ���̴�. �м��ϴ� ����� �޶����� ���� �޶����°Ŵ�.
	unsigned int num4 = (unsigned int)num;
	cout << bitset<32>(num4) << endl;
#pragma endregion

#pragma region ��Ģ����
	//������ �����÷ο� ����
	//�������� 
	// - divide by zero����
	// - ���� / ���� => ����. ���� �Ҽ����� ��������.
	// �� �� �ϳ��� �Ǽ��� ������ָ�, ����� �Ǽ��� ��ȯ�ȴ�.

#pragma endregion
}