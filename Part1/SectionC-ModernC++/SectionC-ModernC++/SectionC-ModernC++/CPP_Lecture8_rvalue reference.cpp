//#include <iostream>
//#include <vector>
//using namespace std;
//
///// <summary>
///// ������(rvalue)������ std::move
///// 
///// [1] lvalue�� rvalue
///// -- lvalue : ���Ͻ��� �Ѿ, ��� ���ӵǴ� ��ü(ex. ���� ������ �� �ִ� lvalue���� �մϴ�.)
///// -- rvalue : lvalue�� �ƴ� ������(�ӽ� ��, ������, ����, i++ ��)
///// 
///// [2] �̵����
///// -- rvalue��� ��.
///// -- �� ��ü�� ������� �����ص� �ȴ�. ������ �����ص� �ȴ�! ������ ��������ϱ�
///// </summary>
///// <returns></returns>
//
//class Pet{};
//class Knight 
//{
//public:
//	Knight() { cout << "Knight" << endl; }
//	Knight(const Knight& k) { cout << "Knight(const Knight& k)" << endl; }
//	Knight(Knight&& k)
//	{
//		cout << "Knight(Knight&& k)" << endl;
//	}
//	~Knight()
//	{
//		if (_pet)
//			delete _pet;
//	}
//
//	//������� ������
//	Knight& operator=(const Knight& k)
//	{
//		cout << "������� ������" << endl;
//		_hp = k._hp;
//
//		//�̰� ��������. ��� knight��ü�� �ϳ��� ���� �����ϰ� �ȴ�. 
//		//_pet = k._pet;
//
//		//���� ����. ������ knight�� ������ pet�� ���� ������, �������� ����� �� �ִ�.
//		if (_pet == nullptr)
//		{
//			_pet = new Pet(*(k._pet));
//		}
//
//		return *this;
//	}
//
//	//�̵� ���� ������
//	Knight& operator=(Knight&& k)
//	{
//		cout << "�̵� ���� ������" << endl;
//
//		_hp = k._hp;
//		//�̵� ���縦 ����ϸ�, ���� ���縦 ����ص� �ȴ�.
//		//������ �Ѱܹ޴� ���� rvalue�̹Ƿ�, �� ������ ȣ���� ������ �Ҹ�� ��ü�̴�.
//		//����,,, �Ҹ�� �ְ� �����Ÿ� �Ѱܹ޾Ƶ� ������ ����.
//		_pet = k._pet;
//		k._pet = nullptr;
//
//		return *this;
//	}
//public:
//	int _hp = 100;
//	Pet* _pet = nullptr;
//};
//
//void TestKnightCopy(Knight k)
//{
//	k._hp = 200;
//}
//
//void TestKnightCopyByRef(Knight& k)
//{
//	k._hp = 200;
//}
//
//void TestKnightCopyByConstRef(const Knight& k)
//{
//	//�� ���, knight�� ����Լ� �߿����� const�� ���� �Լ��� ȣ�� �����ϴ�.
//	//const �� ���� �Լ���, ��ü�� ���� �ǵ帮�� �ʰڴٰ� ����� �Լ���� �����ϸ� �ȴ�.
//	cout << "in function : " << k._hp << endl;
//}
//
//void TestKnight_Rvalue(Knight&& k)
//{
//	//�������� �ޱ� ���ؼ��� const�� ���� �Լ����� �����ߴµ�,
//	//�� ��쿡�� const�� ���� �Լ�����, �������� �޾��ش�.
//	k._hp = 200;
//}
//
//int main()
//{
//	//[1]�ް� vs ���� ��
//	int a = 3;
//	//a�� �ް��̴�. ������ �� �ִ� ��
//	//3�� �������̴�. lvalue�� �ƴϱ� �����̴�. 
//
//	cout << "Case1 : ���翡 ���ؼ� ��ü�� �����ϱ�" << endl;
//	{
//		Knight k1;
//		cout << k1._hp << endl;
//		TestKnightCopy(k1);
//		TestKnightCopy(Knight());  //����?
//		cout << k1._hp << endl;
//	}
//	//��� : ������ ���� �ƹ��� ��ȭ�� ����. ���� ������ �Ѱ��ִ� �������� �������� �߻��Ѵ�.
//	//�Ű������� �Ѱ��ִ� ��ü�� ��򰡿� ����� �ʿ䰡 ���� ��ȸ�� ��ü�̴�. \
//	//���� rvalue�� ������ �� �ִ�.
//
//	cout << endl;
//	cout << "Case2 : ������ ���޿� ���ؼ� ��ü�� �����ϱ�" << endl;
//	{
//		Knight k1;
//		cout << k1._hp << endl;
//		TestKnightCopyByRef(k1);
//		//TestKnightCopyByRef(Knight()); //�Ұ���
//		cout << k1._hp << endl;
//	}
//	//��� : ������ ���� ��ȭ�� �ִ�. � �����ڷ� �����ϴ� ����...?
//	//�� ���� �Ű������� �Ѱ��� ��ü�� ������ ������ ��ģ��.
//	//�׷��� rvalue�� �Ѱ��ְ� �Ǹ�, �Լ����� �� ������ ����� ��ü�� ������� ���������� �ȴ�.
//	//�̷� ��ȿ������ ���� ��������� �ǹ�����, �����Ϸ��� �����Ѵ�.
//
//	cout << endl;
//	cout << "Case3 : const Knight& knight ȣ��" << endl;
//	{
//		Knight k1;
//		cout << k1._hp << endl;
//		TestKnightCopyByConstRef(k1);
//		TestKnightCopyByConstRef(Knight());
//		cout << k1._hp << endl;
//	}
//	//��� : ������ ���� ��ȭ�� ���� �� ����. const�ڷ����̱� �����̴�.
//	//���������� const�� �Ѱܹ����� ������ ���� ������ ���� ������, rvalue�� �޴´�.
//
//	cout << endl;
//	cout << "Case4 : �������� �޴� �Լ��� ȣ��" << endl;
//	{
//		Knight k1;
//		cout << k1._hp << endl;
//		//TestKnight_Rvalue(k1); //�Ұ�. k1�� lvalue�̴�. 
//		TestKnight_Rvalue(Knight()); //����
//		TestKnight_Rvalue(static_cast<Knight&&>(k1)); //�̷��� ������ ������ ���� ������ �Ͼ��!!
//		cout << k1._hp << endl;
//	}
//	//��� : ������ ���� ��ȭ��... ������ �ֱ��ѵ� �װ� �ǹ̴� ����. ������ ����� ���̱� �����̴�.
//	// rvalue�� �Ѱ��شٴ� ����, ������ �������� �ʾƵ� �ȴ�! ���� ������ �ȴ�! [�̵� ���]�̴�! �ϴ� ���̴�.
//	
//	cout << endl;
//	{
//		Knight k2;
//		k2._pet = new Pet;
//		k2._hp = 150;
//
//		Knight k3;
//
//		//k2�� ���̻� ����� �ʿ䰡 ����!
//		//k2�� �� ��ü�� �������!
//
//		k3 = k2; //���� ���� ������
//		k3 = static_cast<Knight&&>(k2); // �̵� ���� ������
//		k3 = move(k2); //�̰͵� �̵� ���� �����ڸ� ����Ѵ�
//	}
//	//���
//	//[1] ������ ��� �������� �߻��Ͽ� ���ſ� �� �ִµ�, �̵��� ������ ������ �� �ִ�.
//	//[2] ������ ������ ������ �������� �ʰ�, ������ ����� �� �ִ�.
//
//	//������ : unique pointer
//	//��ü�� ���� �����Ͱ� �����ؾ��Ѵ�.
//
//	unique_ptr<Knight> uptr1 = make_unique<Knight>();
//	//Knight* ptr = uptr1; //�Ұ���
//	//auto* ptr2 = uptr1; //�Ұ���
//	//unique_ptr<Knight> uptr2 = uptr1; //�Ұ���	
//	unique_ptr<Knight>uptr2 = move(uptr1); //�̰� ����. ������, uptr1�� ���̻� ��� �Ұ�
//
//	cout << uptr2->_hp << endl;
//	//cout << uptr1->_hp << endl; //uptr1���� ���̻� knight��ü�� �������� �ʴ�.
//
//
//}