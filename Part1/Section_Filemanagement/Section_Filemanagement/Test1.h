#pragma once

//��������� ������ include�ϴ���, ����ü, ���� ���� �͵���
//�� ���� �����ϴ� ȿ���� ���̵��� �ϴ� ����

//�����
//��������� ������ �Լ� ��������̴�.
void Test_1();
void Test_2();

struct StatInfo {
	int hp;
	int attack;
	int defence;
};

/*
#ifndef A
#define A
#endif

���� A�� define���� �ʾҴٸ�, A�� define�ϰ�
endif������ ������ �����Ѵ�.

�׷��� ���� A�� define�Ǿ������Ƿ�,
�� ��������� ������ �����ϴ���, �� ���� �����ϴ� ȿ���� ���� �ȴ�.

#pragma once�� ���� ȿ���� �������� ����Ѵ�.
#pragma once�� vc�����Ϸ����� �����ϴ� ���̴�
*/