#include "Player.h"
#include "Monster.h"

void Player::KillMonster()
{
	//전방선언을 했음에도 여기서는 빨간줄이 뜨네?
	_target2->_hp = 0;
	_target2->KillMe();

	//여기서는 _hp에 접근하는것이 문제다.
	//전방선언은 설계도가 어떻게 생겼는지 모르지만, class를 사용하긴 하겠다! 라는 의미인데
	//Monster class의 _hp에 접근하기 위해서는 monster class의 설계도를 알아야 한다.
	//결국 멤버에 접근하기 위해서는 include 를 해줘야 한다.
}

void Player::KillMonster2()
{
	//상세 설계도는 모르기에, 개별 멤버에 접근은 할 수 없다.
	_target2->_hp = 0;
}