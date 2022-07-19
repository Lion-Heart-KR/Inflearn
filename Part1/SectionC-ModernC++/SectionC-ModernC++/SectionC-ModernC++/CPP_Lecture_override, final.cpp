//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// ��override, final
///// Override
///// [1] ������. �������̵��� �Լ���°��� Ȯ���� �� �� �ִ�... ������ġ�� ����. "�� �������̵� �ؿ�!!"
///// [2] �׳� �������̵� �Ҳ��� �ٿ��ָ� ��.
///// 
///// final
///// [1] �� �����δ� �������̵� ����! ���� �������̾�!
///// </summary>
///// <returns></returns>
//
//class Creature
//{
//public:
//	virtual void Attack()
//	{
//		cout << "Creature Attack" << endl;
//	}
//};
//
//class Player : public Creature
//{
//public:
//	//�θ� Ŭ������ �Լ��� virtual�� ������ ������ �߻��Ѵ�.
//	virtual void Attack() override final
//	{
//		cout << "Player Attack" << endl;
//	}
//};
//
//class Knight : public Player
//{
//public:
//	//������(override)
//	
//	//virtual�� ����� ���
//	//KnightŬ������ Attack�Լ��� ����� �갡 virtual�� ���ʷ� ����Ѱ�����, �θ��Լ����� ���ʷ� ����� ������ �� �� ���� �ȴ�.
//	//�θ� Ŭ������ Attack()�Լ��� final�� �پ��־ ���⼭ Attack�� �������̵� �� �� ����.
//	virtual void Attack() override
//	{
//		cout << "Knight Attack" << endl;
//	}
//
//	//1. �� �Լ��� �θ� class�� Attack�Լ��� �ñ״�ó�� �ٸ���. ����, �������̵� �Ǵ°� �ƴϴ�.
//	//2. const�� �� �Լ� �ȿ��� ��������� ������ �� ������ �ǹ��Ѵ�.
//	virtual void Attack() const //��� override�� �ٿ��ָ�, ������ �ñ״�ó�� ���� �Լ��� �θ�Ŭ������ ���� ������ ������ �߻��Ѵ�.
//	{
//		cout << "Knight Attack" << endl;
//		//_stamina = 100; // �Ұ�
//	}
//
//	//�����ε�(overloading) : �Լ� �̸��� ����
//	/*
//	void Attack(int damage)
//	{
//		cout << "Knight Attack(damage)" << endl;
//	}
//	*/
//private:
//	int _stamina;
//};
//
//int main()
//{
//	//�� ���� virtual�Լ��� �ƴ� ���, �θ� �ڷ����� �Լ��� ȣ���Ѵ�.
//	//������,,, Creature->Player->Knight�� ��Ӱ��迡�� Player�� Attack���� virtual�� �����Ǿ��ִٸ�, 
//	//Creature class�� �� �ڼյ��� ������� ������ �ڷ������� ����ϴµ����� ������ �ִ�.
//	//������ �Ʒ��� ��쿡��, Knight Attack�� ȣ����� �ʰ�, Creature Attack�� ȣ��ȴ�.
//	Creature* p1 = new Knight;
//	p1->Attack();
//
//	//virtual�� �ٿ�����, Attack�Լ��� �ñ״�ó�� �޶�, �������̵� ���� �ʰ�, Player�� attack�� ȣ��Ǵ� ���� �� �� �ִ�.
//	Player* p2 = new Knight;
//	p2->Attack();
//
//	return 0;
//}