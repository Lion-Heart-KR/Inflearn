//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
////default�� 4byte����, ��������� ũ�⸦ �������� �� �ִ�.
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
//	Knight // �Ұ�. �̸��� ��ģ��.
//};
//
//
////enum class
////enum class ObjectType : short
//enum class ObjectType
//{
//	//enum class�� �������� �̸��� �� Ŭ���� �ȿ����� ��ȿ�ϱ⿡, �ٸ� ������ Ŭ�������� ������ �̸��� ����ص� �ȴ�.
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
///// ���� : enum class(scoped enum)
///// [1] �̸����� ���� (scoped) - ����
///// [2] �Ϲ����� ��ȯ ���� - ����
///// 
///// ���� enum�� ������
///// [1] unscopped enum : �̸��� ������ �������̴�. �׷��� �׻� enum�̸��� �տ� ���λ�� �ٿ��� ����Ѵ�.
///// -- Knight�� ����Ѵٸ�, �ٸ� enum������ Knight�� ����� �� ���� �ȴ�.
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
//	//�������� enum�� ��ȯ�� �ȴ�.
//	double value = PT_Knight;
//
//	//enum class�� ��ȯ�� �� �ȴ�.
//	//double value2 = ObjectType::Player;
//
//	//����� ����ȯ�� �����ϴ�.
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
//	//�̰� enum class�� �����̴�.
//	//ObjectType2::Monster�� int�� ���� �� ����.
//	//�񱳽����ֱ� ���ؼ��� casting�� �ʿ��ϴ�.
//	if (choice == static_cast<int>(ObjectType2::Monster))
//	{
//
//	}
//
//	unsigned int bitFlag;
//	bitFlag = (1 << PT_Knight); //�̰� ��
//	//bitFlag == (1 << ObjectType::Player); //�̰� �ȵ�. ĳ���� �������
//
//
//
//	return 0;
//}