#include <iostream>
using namespace std;
#define WORK
#ifdef WORK

int globalValue = 321;

void IncreaseHP(int hp)
{
	hp++;
}

int main() 
{
	int hp = 0x1234;

	cout << "increase ȣ�� �� HP : " << hp << endl;
	IncreaseHP(hp);
	cout << "increase ȣ�� �� HP : " << hp << endl;

	/*
	������ ������ [�Ű�����][RET][��������][�Ű�����][RET][��������]... �̷� ���·� �̷�����ִ�.
	main���� ������ hp�� �����Լ� ������ ���������� �ϳ��� ������ �Ҵ�޾Ƽ� 1�̶�� ���� �� �ִµ�,
	IncreaseHP�� ȣ���ϸ� hp�� �Ѱ��ָ�, IncreaseHP�� �Ű����� ������ 1�̶�� ���� ������ ������ �ϳ��� �Ǵٸ� �޸𸮿����� �����ϰ� �ȴ�.
	�����, main�� hp�� ����� ���� �޸� �ּҿ�, IncreaseHP�Լ����� ������Ű�� hp�� ����� ���� �޸� �ּҴ� �ٸ��ٴ� ���̴�.
	*/
}

#endif WORK