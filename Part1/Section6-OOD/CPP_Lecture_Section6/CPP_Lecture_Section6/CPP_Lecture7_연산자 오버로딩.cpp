//#include <iostream>
//using namespace std;
//
///// <summary> : 연산자 오버로딩
///// [연산자 vs 함수]
///// - 연산자는 피연산자의 개수와 타입이 고정되어있다.
///// 
///// [연산자 오버로딩]
///// - [연산자 함수]를 정의해야 한다.
///// - 함수도 멤버함수, 전역함수가 존재하는 것처럼 연산자 함수도 두 가지 방식으로 만들 수 있다.
///// 
///// [1] : 멤버 연산자 함수
///// - a op b 형태에서 왼쪽을 기준으로 실행된다.
///// - a가 클래스여야 가능하다. => a를 [기준 피연산자]라고 한다.
///// - 한계 : a가 클래스가 아니면 사용할 수 없다.
///// 
///// [2] : 전역 연산자 함수
///// - a op b 형태라면, a와 b 모두 연산자 함수의 피연산자로 만들어 준다.
///// 
///// [무엇이 더 좋은가?]
///// - 그런거는 없다.
///// - 둘 중 하나의 연산자 함수에서만 가능한 동작들이 있다.
///// - 대입연산자는 전역 연산자 함수로는 구현할 수 없다.
///// 
///// [복사 대입 연산자]
///// 
///// </summary>
///// <returns></returns>
//
//class Position
//{
//public:
//	//pos1 = pos2+pos3; 을 가능하게 해준다.
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
//	//pos1 = pos2+3; 을 가능하게 해준다.
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
//	//대입 연산자 함수는 항상 멤버 연산자 함수로만 만들어지게 된다.
//	//만약 [전역 연산자 함수]로 대입연산자를 구현한다고 해보자
//	// Position& operator=(int arg, Position pos) 
//	// {pos._x = arg; pos._y = arg}
//	// 이렇게 하면?
//	// arg = pos; 라는 코드가 보여지는 것과는 다르게, 왼쪽에서 오른쪽으로 대입되는 형태가 된다.
//	// 그래서 혼란을 방지하기 위해서 대입연산자를 전역 연산자 함수로 오버로딩하는 것을 문법적으로 막아놓은 것이다.
//	Position& operator=(int arg)
//	{
//		_x = arg;
//		_y = arg;
//
//		//this는 자기자신을 가리키는 '포인터' 이다.
//		return *this;
//	}
//
//	//복사 대입 연산자
//	Position& operator=(const Position& arg)
//	{
//		_x = arg._x;
//		_y = arg._y;
//
//		return *this;
//	}
//
//	//전위연산
//	Position& operator++()
//	{
//		_x++;
//		_y++;
//		return *this;
//	}
//
//	//후위연산
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
//	//멤버 연산자 함수로는 아래의 동작을 구현할 수 없다.
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
//	// 위의 경우 pos13에는 pos14를 증가시키기 전의 값을 전해줘야 한다.
//	// [1] 후위연산의 reference값을 리턴해주면, pos13에는 증가된 값이 저장된다.
//	// [2] 그럼 후위연산의 결과는 참조값이 아니라 복사값을 전달해 줘야한다.
//	// [3] 복사값을 전달해주려는데, 대입 연산자 함수는 매개변수로 참조타입을 받는다.
//	// [4] 복사값을 참조타입으로 넘겨받기 위해서는 const 참조타입을 써줘야 한다.
//	// [5] 이해못했따. ㅋ
//	//
//
//	return 0;
//}