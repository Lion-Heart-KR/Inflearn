//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// delete(������ �Լ�) 
///// -- Ư������� ������ �� ������ �� �� �ִ�.(���縦 ���ϰ� �Ѵٰų�...)
///// </summary>
///// <returns></returns>
//
//class Knight
//{
//public:
//
//public:
//	//���ǵ��� ����, ����� �Լ��� private������ �����.
//	//������, private�� �����ϰ� �Ǹ�, �ܺο����� ȣ���� �� ������, ���ο����� ��밡���ϴ�.
//	//���ο��� ���� ����� �� ���� �������? -> delete�� ����Ѵ�.(delete�� public�� �����ϴ°��� �����̴�.)
//	void operator=(const Knight& k) = delete;
//	friend class Admin; //Admin�̶�� Ŭ���������� Knight�� private ����� ���ٰ����ϴ�.
//
//private:
//	int _hp = 100;
//};
//
//class Admin
//{
//public:
//	void CopyKnight(const Knight& k)
//	{
//		Knight k1;
//		k1 = k;
//	}
//
//};
//
//int main()
//{
//	Knight k1;
//	Knight k2;
//
//	//���翬���ڸ� ����ʹٸ�??
//	//k1 = k2;
//
//	//private�� ��ȸ�Ͽ� ������� ����� �� �ֱ⵵ �ϴ�.
//	Admin admin;
//	admin.CopyKnight(k1);
//
//	//�Լ��� �����θ� ������ �ʰ�, �ñ״�ó�� ������ ��Ȳ���� �Լ��� ����Ϸ��� �ϸ�
//	//LINK������ �߻��Ѵ�.
//	//������, ������� ������, ������ �߻����� �ʴ´�. -> ���� ������ ������ �� �� ����.
//
//
//
//	return 0;
//}