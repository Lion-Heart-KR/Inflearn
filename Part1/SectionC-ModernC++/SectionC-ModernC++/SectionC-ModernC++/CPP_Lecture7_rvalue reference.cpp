//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// ������(rvalue)������ std::move
///// -- C++11�� �ٽɺ�ȭ
///// 
///// [1] �ް�(lvalue) vs ������(rvalue)
///// - lvalue : ���Ͻ��� �Ѿ ��� ���ӵǴ� ��ü(���� ������ �� �ִ� lvalue���� �մϴ�.)
///// - rvalue : lvalue�� �ƴ� ������(�ӽ� ��, ������, ����, i++ ��)
///// 
///// </summary>
///// <returns></returns>
//
//class Pet
//{
//
//};
//
//class Knight
//{
//public:
//	Knight() { cout << "Knight" << endl; }
//	Knight(const Knight& k) { cout << "const Knight& k" << endl; }
//
//	//�̵� ������
//	Knight(Knight&& knight)
//	{
//		cout << "Knight(Knight&& knight)" << endl;
//	}
//
//	~Knight()
//	{
//		if (_pet)
//			delete _pet;
//	}
//	//������� ������
//	void operator=(const Knight& knight) {
//		cout << "operator=(const Knight& knight)" << endl;
//
//		//�̰� ���� ����
//		//���ο� ��ü��, ���� pet�� �ּҸ� ����Ű�� �ȴ�. pet�� ��������
//		_hp = knight._hp;
//		//_pet = knight._pet; //��������
//
//		if(_pet == nullptr)
//			_pet = new Pet(*(knight._pet));//���� ����. ������ ��ü�� ������, �������� �������� ����� �� �ִ�.
//
//
//
//	}
//
//	//�̵� ���� ������
//	void operator=(Knight&& knight) noexcept
//	{
//		cout << "operator=(Knight&& knight)" << endl;
//
//		//���⼭ ���ڷ� �޴� knight�� ������ ������� �ɰŴϱ� �� �ᵵ ��.
//
//		//�̵� ���� �����ڸ� �̿��ϸ�, �������縦 ���� ����� �� �ִ�.
//		_hp = knight._hp;
//		_pet = knight._pet;
//
//		knight._pet = nullptr;
//	}
//
//	void PrintInfo() const
//	{
//
//	}
//
//public:
//	int _hp = 100;
//	Pet* _pet = nullptr;
//};
//
//void TestKnight_Copy(Knight knight) 
//{
//	//������ ���ؼ��� �ƹ��� ��ȭ�� �Ͼ�� �ʴ´�.
//	//�׸��� ������ �Ѱ��� ��쿡 ������(�޸�)�� �߻��Ѵ�.
//	knight._hp = 200;
//}
//
//void TestKnight_CopyByRef(Knight& knight)
//{
//	//����� �Ͼ�� �ʰ�, ������ ���� ������ ����������.
//	knight._hp = 200;
//}
//
////���⼭�� Knight class�ȿ�����, const��	���� �Լ��� ȣ���� �� �ִ�.
////�Ϲ� �Լ������� Kngiht��ü�� ��������� �����Ͽ� ���� ������ ���ɼ��� �ֱ� �����̴�.
////�ݸ� const�� ���� �Լ������� ��ü�� ��������� ���� ���� ������ �� ���� �����̴�.
//void TestKnight_CopyByConstRef(const Knight& knight)
//{
//	knight.PrintInfo();
//}
//
////������ ������ �޾��ִ� �Լ�
////������ ���� �Լ����� �⺻������ ������ ������ �ް��� �޾Ұ�, �������� �ޱ� ���ؼ��� ������ �� ���ٴ� �ǹ��� const�� �پ�� �����ߴ�.
//// ������ ������ �޴� �Լ��� ���״�� �������� ���� �� �ִ� �� ����.
//void TestKnight_RValueRef(Knight&& knight)
//{
//	//�� ������ �Ǵµ�, �̰� ��� ����
//	//�ϴ� ��� �Լ������� ����� ��ü�ϱ� �� ����� �ᵵ �ȴ�! �ϴ� �ǹ̰� �ִ�. => [�̵� ���]�̶�� ���� ����.
//	//������ �������� �ʾƵ� �� ���� ����
//	//
//	knight._hp = 20;
//	
//}
//
//int main()
//{
//	//[1] �ް�(lvalue) vs ������(rvalue)
//	int a = 3;
//	a = 4; //a�� ��� �����Ǵ� �ް�. �ݸ� 3, 4�� ��� �������� �ʴ� ���� ���̴�.
//	//(a++) = 45; //�������̱⿡ �Ұ�����.
//
//	Knight k1;
//
//	TestKnight_Copy(k1);
//
//	TestKnight_CopyByRef(k1);
//
//	//���⼭ �Ѱ��ִ� ��ü�� �� �� ���� �ӽ÷� �����Ǿ��ٰ� �Լ�ȣ���� ������ ������� �ӽ� ��ü�̴�. = rvalue��.
//	//rvalue�� ���������� �������� �ʱ� ������, �Լ� �ȿ�����... ���� �����Ѵٰų� �� �� ����? �Ѵ��ص� �ƹ��� ��ȭ�� ����?
//	//�׷��� const �������� �ǰ�, �׳� �������� �ȵǴ°Ŵ�
//	//const�� �������� �����ϱ�, �ӽð�ü�� �Ѱ��൵ ��ȿ������ ���Ÿ��� ���� �ʴ´�.
//	//TestKnight_CopyByRef(Knight()); 
//	TestKnight_CopyByConstRef(Knight()); //�̰Ŵ� �� �ȴ�.
//
//	//lvalue�� �� �޴´�.
//	// TestKnight_RValueRef(k1); //�Ұ�
//	
//	//rvalue�� �� �޴´�.
//	TestKnight_RValueRef(Knight());
//
//	//�̷��Ե� �ȴ�. �ٵ� �� �̰ɾ��� �� ����� �ִµ�??
//	////=>
//	TestKnight_RValueRef(static_cast<Knight&&>(k1));
//
//	Knight k2;
//	k2._pet = new Pet();
//	k2._hp = 1000;
//
//	Knight k3;
//	//k2�� ���̻� ����� �ʿ䰡 ����! k2�� �� ��ü�� �������!
//	//������ ������ �ȴ�.
//	//k3 = static_cast<Knight&&>(k2); //move�� ����� �� �ִ�.
//	k3 = move(k2); //��� �̷��� ����.
//
//	//�ٽ�
//	//����� �������� �߻��Ͽ� ���ſ� �� �ִµ�, �̵��� ������ ������ �� �ִ�.
//	//������ ������ ������ �������� �ʰ� ������ ����� �� �ִ�.
//
//	//�� �ϳ��� �����ؾ��ϴ� ������
//	unique_ptr<Knight> uptrKnight = make_unique<Knight>();
//	unique_ptr<Knight> uptrKnight2 = uptrKnight; //�Ұ�
//	uptrKnight2 = move(uptrKnight);//�̰� ����
//
//
//	return 0;
//}