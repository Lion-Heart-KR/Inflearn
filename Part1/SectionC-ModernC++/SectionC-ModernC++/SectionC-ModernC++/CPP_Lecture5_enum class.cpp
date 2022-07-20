//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
////default는 4byte지만, 명시적으로 크기를 지정해줄 수 있다.
////enum PlayerType : char
//enum PlayerType
//{
//	PT_Knight=3,
//	PT_Archer,
//	PT_Mage
//};
//
//enum MonsterType
//{
//	Knight // 불가. 이름이 겹친다.
//};
//
//
////enum class
////enum class ObjectType : short
//enum class ObjectType
//{
//	//enum class는 열거자의 이름이 각 클래스 안에서만 유효하기에, 다른 열거자 클래스에서 동일한 이름을 사용해도 된다.
//	Player,
//	Monster, 
//	Projectile
//};
//
//enum class ObjectType2
//{
//	Player,
//	Monster,
//	Projectile
//};
//
///// <summary>
///// 주제 : enum class(scoped enum)
///// [1] 이름공간 관리 (scoped) - 장점
///// [2] 암묵적인 변환 금지 - 단점
///// 
///// 고전 enum의 문제점
///// [1] unscopped enum : 이름의 범위가 전역적이다. 그래서 항상 enum이름을 앞에 접두사로 붙여서 사용한다.
///// -- Knight만 사용한다면, 다른 enum에서는 Knight를 사용할 수 없게 된다.
///// </summary>
///// <returns></returns>
//
//
//
//int main()
//{
//	cout << sizeof(PlayerType::PT_Archer) << endl;
//	cout << sizeof(PlayerType) << endl;
//
//	//고전적인 enum은 변환이 된다.
//	double value = PT_Knight;
//
//	//enum class는 변환이 안 된다.
//	//double value2 = ObjectType::Player;
//
//	//명시적 형변환은 가능하다.
//	double value2 = static_cast<double>(ObjectType::Player);
//
//	int choice;
//	cin >> choice;
//
//	if (choice == PT_Knight)
//	{
//
//	}
//
//
//	//이건 enum class의 단점이다.
//	//ObjectType2::Monster를 int와 비교할 수 없다.
//	//비교시켜주기 위해서는 casting이 필요하다.
//	if (choice == static_cast<int>(ObjectType2::Monster))
//	{
//
//	}
//
//	unsigned int bitFlag;
//	bitFlag = (1 << PT_Knight); //이건 됨
//	//bitFlag == (1 << ObjectType::Player); //이게 안됨. 캐스팅 해줘야함
//
//
//
//	return 0;
//}