#pragma once

//�����Ͱ� �ƴ�, ���� �̿��ϱ����ؼ��� ��������� include ������Ѵ�.
// �׷��� Monster �� ũ�⸦ �� �� �ִ�.
//#include "Monster.h"

//�����ͷ� ������ ���, Monster class�� �ϼ����� �ʴ���, Player�� �� byte�� �Ǵ��� �� �� �ִ�.
//������ ������ �׻� 4byte or 8byte�̹Ƿ�.
//������ include ������ �ƴϴ���, Monster ��� class�� ����Ϸ��°� �±����� �˷��ֱ� ���ؼ� ���漱���� ���ش�.
//�̷��� ���漱���� ���ִ� ��쵵 �ְ�, public ����������� Ŭ���� ������ ������ �� class��� ������ִ� ����� �ִ�.
class Monster;


//class�� ���赵
class Player
{
public:
	void KillMonster();

	void KillMonster2();
	//���⿡ �Լ��� �����θ� �ۼ��Ͽ� monster�� ��� ������ �Լ��� �����ϰ� �ȴٸ�
	//���⿡�� include"Monster.h""�� ������Ѵ�.
	//�׷��� ���⿡�� �ñ״�ó�� �ۼ��ϰ�, cpp���Ͽ� �����θ� ���ۼ��Ͽ�
	//include�� ����� ���̴� ���� ���ڴ�.
	

public:
	int _hp;
	int _attack;

	//Monster _target;
	Monster* _target1;

	//�̰͵� ���漱���̴�.
	class Monster* _target2;

	//Player�ȿ� Player�� ���� �� �ֳ�?
	//�ٽ��� Player class�� ũ�⸦ �˾ƾ� ���� ������ �ȴٴ� ���̴�.
	//Player�� ũ�⸦ �˱����ؼ� Player�� ũ�⸦ �˾ƾ� �ϴ� ��Ȳ�� �Ǿ���.
	//Player _target;
	//�̹����� ���� ������ �������� �����Ͽ� �ذ��Ѵ�.
	Player* _target;

	//�� ��쿡�� Player�� ��� �������� ������ �� �ִ�.
};

