#include <iostream>
using namespace std;

/// <summary>
/// 객체 지향 OOP(Object Oriented Programing)
/// 객체 지향의 3대 속성
/// *상속성 : 오늘의 주제
/// *다형성
/// *은닉성
/// ----------------------------------------------------------------
/// ----------------------------------------------------------------
/// [상속관계에서 생성자와 소멸자]
/// **자식 클래스로 객체를 생성후 소멸하는 과정**
/// [1]자식 클래스 생성자 호출
/// [2]자식 클래스 생성자의 선처리 영역에서 부모클래스 생성자 호출
/// [3]부모 클래스 생성자 종료
/// [4]자식 클래스 생성자 종료
/// ...작업중...
/// [1]자식 클래스 소멸자 호출
/// [2]자식 클래스 소멸작업 종료
/// [3]자식 클래스 후처리영역에서 부모클래스 소멸자 호출
/// [4]부모 클래스 소멸작업 종료
/// 
/// stack을 생각하면 좋다. 
/// 부모위에 자식 쌓고, 사라질때는 자식 사라지고 그 밑에있는 부모가 사라지고
/// 
/// **선처리영역에서 호출하는 생성자**
/// 선처리 영역에서 호출하는 부모클래스의 생성자는 항상 기본 생성자를 호출하게 된다.
/// ※유의사항※
/// [1] 부모클래스에서 기본생성자가 아닌 생성자만 만들어 놓은 경우, 자식클래스가 호출할 기본생성자가 없어서 에러가 발생한다.
/// 
/// ----------------------------------------------------------------
/// ----------------------------------------------------------------
/// RPG게임의 일반적인 상속패턴
/// 
/// GameObject
/// - Creature
/// -- Player, Monster, Pet
/// 
/// - Projectile
/// -- Arrow, Fireball
/// 
/// - Env
/// -- Map
/// 
/// - Item
/// -- Weapon
/// --- Sword, Bow, Knockle
/// 
/// -- Armor
/// --- Helmet, Armor, Boots, Globes
/// 
/// -- Consumable
/// --- potion, scroll
/// 
/// </summary>


//부모클래스
class Player
{
public:
	Player()
	{
		_hp = 0;
		_attack = 0;
		_defence = 0;
		cout << "Player() 생성자 호출" << endl;
	}
	Player(int hp)
	{
		_hp = hp;
		_attack = 0;
		_defence = 0;
		cout << "Player(int hp) 생성자 호출" << endl;
	}

	~Player()
	{
		cout << "~Player() 소멸자 호출" << endl;
	}

	void Move() { cout << "Plaeyr.Move() 호출" << endl; }
	void Attack() { cout << "Plaeyr.Attack() 호출" << endl; }
	void Die() { cout << "Plaeyr.Die() 호출" << endl; }

public:
	int _hp;
	int _attack;
	int _defence;
};

//부모클래스 Player를 상속받는 Knight
//클래스를 상속받으면 기본적으로 부모클래스의 함수와 속성을 그대로 사용할 수 있다.
class Knight : public Player
{
public:
	Knight()
	{
		//선처리 영역

		_stamina = 0;
		cout << "Knight() 생성자 호출" << endl;
	}
	
	//선처리영역에서 부모클래스의 기본생성자가 아닌 다른 생성자를 호출하고 싶은 경우
	Knight(int hp):Player(hp)
	{
		cout << "Knight(int hp) 생성자 호출" << endl;
	}

	~Knight()
	{
		cout << "~Knight() 소멸자 호출" << endl;

		//후처리 영역
	}

	//부모 클래스에서 상속받은 함수를 재정의하고 싶을 때
	void Move() { cout << "Knight.Move() 호출" << endl; }

public:
	int _stamina;
};

int main()
{
	Knight k(100);

	////재정의한 함수를 호출한다.
	//k.Move();

	////재정의를 하였으나, 부모클래스의 함수를 호출하고싶은 경우
	////하지만 이렇게는 잘 사용하지 않는다.
	//k.Player::Move();

	////재정의를 하지 않으면, 부모클래스에서 선언한 함수를 그대로 사용한다.
	//k.Attack();

	return 0;
}