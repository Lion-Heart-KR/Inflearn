//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
//class Knight
//{
//public:
//	void Test()
//	{
//		cout << "Knight::Test()" << endl;
//	}
//};
//
//Knight* FindKnight()
//{
//	return nullptr;
//}
//
//void Test(int a)
//{
//	cout << "Test(int)" << endl;
//}
//
//void Test(void* a)
//{
//	cout << "void Test(void* a)" << endl;
//}
//
////nullptr����
//class Nullptr_t
//{
//public:
//	template<typename T>
//
//	//ĳ������ ���ش�. T�� ��ü�� �Ҵ��ϰԵǴ� ������ �ڷ����̴�.
//	//const�� ���޵Ǵ� �Ű������� ���� ������� �ʴ� ���� �����ϰڴٴ� �ǹ�
//	operator T* () const //� ������ �����Ͷ� nullptr�� ���Կ����� �����ϵ��� �ϴ� �����̴�. ĳ������ �ϴ� operator�̴�.
//	{
//		return 0;
//	}
//
//	//��ü�� ����Լ�
//	template<typename C, typename T>
//	operator T C::* () const
//	{
//		return 0;
//	}
//
//private:
//	void operator&() const { } //�ּҰ� &�� ���´�. &nullptr�� �Ұ���������.
//	//void operator&() const = delete; //�ּҰ� &�� ���´�.
//
//} _Nullptr;
//
////�������ڸ��� ��ü�� ����� ���
////�� ��� Ŭ���� �̸��� ��� �ȴ�.
////�� ��� ��ü�� �����ϴ�.
//
////const Nullptr_t _Nullptr;
//
///// <summary>
///// 0�̳� NULL�� �ִµ� nullptr�� ����ϴ� ����?
///// [1] NULL�� ��� 0�̴�. #define NULL 0
///// 
///// </summary>
///// <returns></returns>
//
//int main()
//{
//	int* ptr = nullptr;
//
//	//1) �����۹����� ���� NULL��� nullptr�� ����ؾ� �Ѵ�.
//	Test(0); //�̰� int�� �޴� �Լ� ȣ��
//	Test(NULL); //�̰͵� int�� �޴� �Լ� ȣ��
//	Test(nullptr); //�̰� void*�� �޴� �Լ� ȣ��
//	Test(_Nullptr); //�̰� void*�� �޴� �Լ� ȣ��
//
//
//	//2) ������
//	//Knight*�� ��ȯ�� ���ش�.
//	auto knight = FindKnight();
//
//	//�Ʒ� ó�� �񱳸� �ϸ�, knight�� � type�� �������� �ָ�������.
//	if(knight == 0)
//	{
//		//TODO
//	}
//
//	//�̷��� �ϸ�, knight�� Ȯ���� ������ ������� ���� �� �� �ִ�.
//	//if (knight == nullptr)
//	if (knight == _Nullptr)
//	{
//
//	}
//	
//	void(Knight:: * memFunc)();
//	memFunc = &Knight::Test;
//
//	if(memFunc == _Nullptr)
//
//	auto whoAmI = nullptr;
//	nullptr_t WhoAmI = nullptr;
//
//	//�̷��� �ȵ�
//	&nullptr;
//	&_Nullptr;
//
//	return 0;
//}