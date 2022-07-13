#include <iostream>
using namespace std;
#include "Knight.h"
#include "Archer.h"
#include "Mage.h"
#include "Pet.h"
#include "Arrow.h"

// [Bug Report #10]
// 궁수라며면 자고로 화살을 쏴야겠죠.
// Arrow는 자신을 목표 대상물을 target으로 관리하고
// Arrow를 만들 때 설정한 데미지 만큼 target의 체력을 깎습니다.
// 테스트를 위해 화살 10개를 생성해서 기사를 피격했는데...
// C++이 늘 그렇지만 되는 일이 없고 또 크래시가 납니다.
// 뭐가 문제일까요?
// knight가 죽어서 delete했는데, for문이 멈추지 않는게 문제다.
//기사를 죽이는 순간 break;해주면 된다.

// 에러원인 : use-after free
// [1] 기사의 HP가 0이 되면, 기사 객체를 소멸시킨다.
// [2] 하지만, for문이 멈추지 않고, 그 다음 arrow는 여전히 attackTarget을 호출한다.
// [3] arrow의 target객체로 찾아가보면, 객체가 소멸되어서 없다.
// [4] 그런데, 그 객체는 가상함수를 갖고있다. 
// [5] 객체의 가상함수를 사용하려면 가상함수 테이블을 참조해야하는데, 그게 없다.
// 
// 해결책
// [1] break;문을 해서 for문을 빠져나온다.
// --- 그러면, 남은 arrow들을 delete해주지 못해서, 메모리의 누수가 발생한다.
// [2] 스마트 포인터를 사용해야한다.
// --- 아직 안배워땅 
//

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	Archer* archer = new Archer(new Pet());
	archer->_hp = 100;
	archer->_maxHp = 100;
	archer->_attack = 20;

	Knight* knight = new Knight();	
	knight->_hp = 150;
	knight->_maxHp = 150;
	knight->_attack = 10;
	
	Arrow* arrows[10] = {};
	for (int i = 0; i < 10; i++)
	{
		// 기사를 타겟으로, 궁수의 공격력을 지닌 상태
		Arrow* arrow = new Arrow(knight, archer->_attack);
		arrows[i] = arrow;
	}

	for (int i = 0; i < 10; i++)
	{
		arrows[i]->AttackTarget();

		// 기사가 죽었으면 소멸시켜준다
		if (knight != nullptr)
		{
			if (knight->IsDead())
			{
				delete knight;
				knight = nullptr;
				break;
			}
		}	

		delete arrows[i];
		arrows[i] = nullptr;
	}
}
