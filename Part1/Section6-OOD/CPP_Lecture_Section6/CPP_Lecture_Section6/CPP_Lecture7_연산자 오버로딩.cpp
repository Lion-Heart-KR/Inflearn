//#include <iostream>
//using namespace std;
//
///// <summary> : ������ �����ε�
///// [������ vs �Լ�]
///// - �����ڴ� �ǿ������� ������ Ÿ���� �����Ǿ��ִ�.
///// 
///// [������ �����ε�]
///// - [������ �Լ�]�� �����ؾ� �Ѵ�.
///// - �Լ��� ����Լ�, �����Լ��� �����ϴ� ��ó�� ������ �Լ��� �� ���� ������� ���� �� �ִ�.
///// 
///// [1] : ��� ������ �Լ�
///// - a op b ���¿��� ������ �������� ����ȴ�.
///// - a�� Ŭ�������� �����ϴ�. => a�� [���� �ǿ�����]��� �Ѵ�.
///// - �Ѱ� : a�� Ŭ������ �ƴϸ� ����� �� ����.
///// 
///// [2] : ���� ������ �Լ�
///// - a op b ���¶��, a�� b ��� ������ �Լ��� �ǿ����ڷ� ����� �ش�.
///// 
///// [������ �� ������?]
///// - �׷��Ŵ� ����.
///// - �� �� �ϳ��� ������ �Լ������� ������ ���۵��� �ִ�.
///// - ���Կ����ڴ� ���� ������ �Լ��δ� ������ �� ����.
///// 
///// [���� ���� ������]
///// 
///// </summary>
///// <returns></returns>
//
//class Position
//{
//public:
//	//pos1 = pos2+pos3; �� �����ϰ� ���ش�.
//	Position() : _x(0), _y(0){ }
//	Position(int x, int y)
//	{
//		_x = x;
//		_y = y;
//	}
//
//	Position operator+(const Position& arg)
//	{
//		Position pos;
//		pos._x = _x + arg._x;
//		pos._y = _y + arg._y;
//		return pos;
//	}
//
//	//pos1 = pos2+3; �� �����ϰ� ���ش�.
//	Position operator+(int arg)
//	{
//		Position pos;
//		pos._x = _x + arg;
//		pos._y = _y + arg;
//		return pos;
//	}
//
//	bool operator==(const Position& arg)
//	{
//		return ((_x == arg._x) && (_y == arg._y));
//	}
//
//	//���� ������ �Լ��� �׻� ��� ������ �Լ��θ� ��������� �ȴ�.
//	//���� [���� ������ �Լ�]�� ���Կ����ڸ� �����Ѵٰ� �غ���
//	// Position& operator=(int arg, Position pos) 
//	// {pos._x = arg; pos._y = arg}
//	// �̷��� �ϸ�?
//	// arg = pos; ��� �ڵ尡 �������� �Ͱ��� �ٸ���, ���ʿ��� ���������� ���ԵǴ� ���°� �ȴ�.
//	// �׷��� ȥ���� �����ϱ� ���ؼ� ���Կ����ڸ� ���� ������ �Լ��� �����ε��ϴ� ���� ���������� ���Ƴ��� ���̴�.
//	Position& operator=(int arg)
//	{
//		_x = arg;
//		_y = arg;
//
//		//this�� �ڱ��ڽ��� ����Ű�� '������' �̴�.
//		return *this;
//	}
//
//	//���� ���� ������
//	Position& operator=(const Position& arg)
//	{
//		_x = arg._x;
//		_y = arg._y;
//
//		return *this;
//	}
//
//	//��������
//	Position& operator++()
//	{
//		_x++;
//		_y++;
//		return *this;
//	}
//
//	//��������
//	Position& operator++(int)
//	{
//		Position ret = *this;
//		_x++;
//		_y++;
//		return ret;
//	}
//	
//
//public:
//	int _x;
//	int _y;
//};
//
//Position operator+(int a, Position b)
//{
//	Position ret;
//
//	ret._x = a + b._x;
//	ret._y = a + b._y;
//
//	return ret;
//}
//
//int main()
//{
//	Position pos1;
//	Position pos2(1, 1);
//	Position pos3(2, 4);
//
//	pos1 = pos2 + pos3;
//	pos1 = pos2.operator+(pos3);
//	cout << "(" << pos1._x << ", " << pos1._y << ")" << endl;
//
//	pos1 = pos1 + 3;
//	cout << "(" << pos1._x << ", " << pos1._y << ")" << endl;
//
//	//��� ������ �Լ��δ� �Ʒ��� ������ ������ �� ����.
//	Position pos4;
//	Position pos5(2, 3);
//	pos4 = 3 + pos5;
//	cout << "(" << pos4._x << ", " << pos4._y << ")" << endl;
//
//	Position pos6(1, 1);
//	Position pos7(1, 2);
//	Position pos8;
//	pos8 = pos8 + 1;
//
//	cout << "pos6 == pos7 : " << (pos6 == pos7) << endl;
//	cout << "pos6 == pos8 : " << (pos6 == pos8) << endl;
//
//	Position pos9(9, 9);
//	Position pos10(10, 10);
//
//	pos9 = pos10;
//	pos10 = pos10 + 1;
//	cout << "(" << pos9._x << ", " << pos9._y << ")" << endl;
//
//	Position pos11(11, 11);
//	++pos11;
//	cout << "(" << pos11._x << ", " << pos11._y << ")" << endl;
//
//	Position pos12(12, 12);
//	pos12++;
//	cout << "(" << pos12._x << ", " << pos12._y << ")" << endl;
//
//	Position pos13;
//	Position pos14(14, 14);
//	pos13 = pos14++;
//	cout << "(" << pos13._x << ", " << pos13._y << ")" << endl;
//	cout << "(" << pos14._x << ", " << pos14._y << ")" << endl;
//	pos13++;
//	pos14++;
//	cout << "(" << pos13._x << ", " << pos13._y << ")" << endl;
//	cout << "(" << pos14._x << ", " << pos14._y << ")" << endl;
//
//	// ���� ��� pos13���� pos14�� ������Ű�� ���� ���� ������� �Ѵ�.
//	// [1] ���������� reference���� �������ָ�, pos13���� ������ ���� ����ȴ�.
//	// [2] �׷� ���������� ����� �������� �ƴ϶� ���簪�� ������ ����Ѵ�.
//	// [3] ���簪�� �������ַ��µ�, ���� ������ �Լ��� �Ű������� ����Ÿ���� �޴´�.
//	// [4] ���簪�� ����Ÿ������ �Ѱܹޱ� ���ؼ��� const ����Ÿ���� ����� �Ѵ�.
//	// [5] ���ظ��ߵ�. ��
//	//
//
//	return 0;
//}