#include "Archer.h"
#include "Pet.h"

Archer::Archer(Pet* pet) : _pet(pet)
{
	
}

Archer::Archer(int hp) : Player(hp)
{
}

Archer::~Archer()
{
	// 즐거웠다 내 펫 :(
	if (_pet != nullptr)
		delete _pet;
}

void Archer::AddHp(int value)
{
	Player::AddHp(value);

	// 죽었으면 펫도 날린다
	//이걸 쓰면, Archer소멸자에서 pet을 delete해줄 필요가 없게 된다.
	//아니면, _pet을 삭제하고 nullptr로 채워준다.
	//만약,,, Archer가 죽지않고, 그냥 게임 종료해서 소멸자를 호출하게 된다면,
	//Archer의 소멸자에서 Pet을 소멸 시켜줘야 하기 때문에, Archer에는 Pet의 소멸자를 그대로 호출하도록 한다.
	if (IsDead())
	{
		delete _pet;
		_pet = nullptr;
	}
}
