#include <iostream>
using namespace std;

/// <summary> : 객체지향 기타
/// [1] struct vs class
/// - C++에서 구조체와 클래스는 거의 차이가 없다.
/// - 접근 지정자의 차이가 있다.
/// - 구조체는 기본이 public
/// - 클래스는 기본이 private
/// --- struct는 C언어와의 호환을 위해서 존재하는 것이라고 생각하면 좋다.
/// --- C++은 객체지향 프로그래밍을 목적으로 했기에, class를 새로 만들어준 것이다.
/// 
/// [2] static 변수, static 함수 (정적, 고정된)
/// - 모든 객체에 동일하게 적용되는 값, 동작
/// - 프로그램 시작과 동시에 생성된다.
/// - 초기화를 하면 .data영역에 생성되고
/// - 초기화를 하지 않으면 .bss영역에 생성된다.
/// 
/// - static 함수의 경우 프로그램 시작과 동시에 생성된다.
/// - 하지만, 객체의 경우 그렇지 않을 수 있다.
/// - 따라서, 정적 함수 내부에서는 객체가 생성시에 메모리가 할당되는 멤버변수들을 사용하거나, 동적 함수들을 호출할 수 없다.
/// 
/// </summary>
/// <returns></returns>

int GenerateId();

class Marine
{
public:
	Marine()
	{
		s_attack = 100;
		_id = GenerateId();
	}
	void TakeDamage(int damage)
	{
		_hp -= damage;
	}

	static void SetAttack()
	{
		s_attack = 100;
	}

public:
	//특정 객체에 종속적이다. 각각 다른 값을 갖는다.
	int _hp;
	int _id;

	//마린 객체가 100개 생성되어도, 모든 객체는 같은 s_attack값을 갖는다.
	//메모리 역시 int 크기 한 개 4byte만 차지한다.
	//반면, _hp 변수의 경우 100개의 객체가 존재하면 총 400byte의 크기를 차지한다.
	static int s_attack;
};

int GenerateId()
{
	// 정적 지역 변수
	// 생명주기
	// - 프로그램 시작 시 생성
	// - 프로그램 종료 시 삭제
	// 
	// 가시범위
	// - 함수 내부에서만 사용 가능
	// - 함수가 여러번 시작되었다가 종료되더라도, 이전의 변수 값을 그대로 사용할 수 있다는 의미이다.
	// - 하지만, 함수 외부에서는 정적 지역 변수를 사용할 수 없다.
	// 
	static int s_id = 1;
	return s_id++;
}

int Marine::s_attack = 0;

int main()
{
	Marine m1[10];
	m1[0].SetAttack();

	for (int i = 0; i < 10; i++)
	{
		cout << "id : " << m1[i]._id << "\t";
		cout << m1[i].s_attack << endl;

	}

	return 0;
}