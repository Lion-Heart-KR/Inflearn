//#include <iostream>
//
//using namespace std;
//
///// <summary>
///// *new/delete
///// - C++에서 추가되었음.
///// - malloc/free에 대응됨. new/delete는 연산자다(operator)
///// 
///// *new[] / delete[]
///// - new/malloc 에 비해서 좋긴 한데, 배열과 같이 N개의 데이터를 동시에 할당할 때 사용한다.
///// 
///// * malloc/free vs new/delete
///// - 사용 편의성 : new/delete가 편리
///// - 타입에 상관없이, 특정한 크기의 메모리 영역을 할당 받기 위해서는 malloc/free를 사용할 수 밖에 없다.
///// - 가장 근본적인 차이는, new/delete는 생성 타입이 클래스일 경우 생성자와 소멸자를 호출해준다.
///// - malloc/free는 생성자 소멸자를 호출해주지 않는다.
///// - new/delete가 객체지향과 더 잘어울리는 문법이다.
///// </summary>
///// <returns></returns>
//
//class Monster
//{
//public:
//	Monster()
//	{
//		cout << "Monster()" << endl;
//	}
//
//	~Monster()
//	{
//		cout << "~Monsters()" << endl;
//	}
//public:
//	int _hp;
//	int _x;
//	int _y;
//};
//
//int main()
//{
//	//malloc과 free와 동일한 것임.
//	//동적할당에서의 버그는 그대로 발생한다.
//	Monster* m1 = new Monster;
//	m1->_hp = 100;
//	m1->_x = 2;
//	m1->_y = 3;
//	delete m1;
//
//	//객체를 여러개 만들고 싶을 때 new[]/delete[]
//	Monster* monsters = new Monster[5];
//	monsters[1]._hp = 200;
//
//	Monster* m2 = monsters + 1;
//	cout << m2->_hp << endl;
//
//	//소멸자가 5번 호출됨
//	delete[] monsters;
//
//	int* i = new int;
//	*i = 3;
//	cout << *i << endl;
//	delete i;
//
//	////malloc, free는 생성자, 소멸자를 호출하지 않는다.
//	//Monster* m1 = (Monster*)malloc(sizeof(Monster));
//	//free(m1);
//
//	////new, delete는 생성자와 소멸자를 호출해준다.
//	//Monster* m2 = new Monster;
//	//delete m2;
//
//
//
//	return 0;
//}