#pragma once

//포인터가 아닌, 값을 이용하기위해서는 헤더파일을 include 해줘야한다.
// 그래야 Monster 의 크기를 알 수 있다.
//#include "Monster.h"

//포인터로 선언할 경우, Monster class가 완성되지 않더라도, Player가 몇 byte가 되는지 알 수 있다.
//포인터 변수는 항상 4byte or 8byte이므로.
//하지만 include 까지는 아니더라도, Monster 라는 class를 사용하려는게 맞긴한지 알려주기 위해서 전방선언을 해준다.
//이렇게 전방선언을 해주는 경우도 있고, public 멤버변수에서 클래스 변수를 선언할 때 class라고 명시해주는 방법도 있다.
class Monster;


//class는 설계도
class Player
{
public:
	void KillMonster();

	void KillMonster2();
	//여기에 함수의 구현부를 작성하여 monster의 멤버 변수나 함수에 접근하게 된다면
	//여기에도 include"Monster.h""를 해줘야한다.
	//그러니 여기에는 시그니처만 작성하고, cpp파일에 구현부르 ㄹ작성하여
	//include의 사용을 줄이는 것이 좋겠다.
	

public:
	int _hp;
	int _attack;

	//Monster _target;
	Monster* _target1;

	//이것도 전방선언이다.
	class Monster* _target2;

	//Player안에 Player를 넣을 수 있나?
	//핵심은 Player class의 크기를 알아야 뭔가 짆행이 된다는 것이다.
	//Player의 크기를 알기위해서 Player의 크기를 알아야 하는 상황이 되었다.
	//Player _target;
	//이번에도 역시 포인터 형식으로 선언하여 해결한다.
	Player* _target;

	//이 경우에는 Player의 멤버 변수에도 접근할 수 있다.
};

