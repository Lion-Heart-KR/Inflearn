#include "Player.h"
#include "Monster.h"

void Player::KillMonster()
{
	//���漱���� �������� ���⼭�� �������� �߳�?
	_target2->_hp = 0;
	_target2->KillMe();

	//���⼭�� _hp�� �����ϴ°��� ������.
	//���漱���� ���赵�� ��� ������� ������, class�� ����ϱ� �ϰڴ�! ��� �ǹ��ε�
	//Monster class�� _hp�� �����ϱ� ���ؼ��� monster class�� ���赵�� �˾ƾ� �Ѵ�.
	//�ᱹ ����� �����ϱ� ���ؼ��� include �� ����� �Ѵ�.
}

void Player::KillMonster2()
{
	//�� ���赵�� �𸣱⿡, ���� ����� ������ �� �� ����.
	_target2->_hp = 0;
}