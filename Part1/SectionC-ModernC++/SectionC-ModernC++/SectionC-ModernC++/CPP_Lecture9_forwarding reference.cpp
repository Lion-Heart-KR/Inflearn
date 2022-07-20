//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// ���� ����(forwarding reference = ��������, universal reference)
///// </summary>
///// <returns></returns>
//
//class Knight
//{
//public:
//	Knight() { cout << "�⺻ ������" << endl; }
//	Knight(const Knight&) { cout << "���� ������" << endl; }
//	Knight(Knight&&) { cout << "�̵� ������" << endl; }
//
//};
//
//void Test_RValueRef(Knight&& k)
//{
//
//}
//
//void Test_Copy(Knight k){}
//
//template<typename T>
////void Test_forwardingRef(const T&& param)�̷��� �Ǹ� ���������� �ƴ϶�, ������������.
//void Test_forwardingRef(T&& param)
//{
//	//�ް��� �־��ָ� �ް� ����
//	//�������� �־��ָ� ������ ����
//
//	//���� ������ �ް� ������� ���� Test_Copy(param)
//	//������ ������ �������, move�� ����ؼ� �������� �Ѱ��ش�. �̵������� Test_Copy(move(param))
//
//	//�ް� ���� Ȥ�� ������ ������ ������ �Ѱ��ش�.
//	//�ް��̸� ����, �������̸� �̵�
//	Test_Copy(std::forward<T>(param));
//
//	//���⼭ Test_Copy(param)�� ȣ���ϸ�, �̵� �����ڰ� �ƴ϶� ��������ڰ� ȣ��ȴ�. param�� �ް��̱� �����̴�.
//	//�̵������ڰ� ȣ��Ǳ� ���ؼ��� move(param)�� ���ڷ� �־�����Ѵ�.
//}
//
//
//int main()
//{
//	//������ ���� : && -> ������ ����
//	//���� ���� : 
//
//	Knight k1;
//	Test_RValueRef(std::move(k1)); //������ ���� ����
//	Test_forwardingRef(move(k1)); //������ ���� ����
//	Test_forwardingRef(k1);            //�ް� ����... ���!?
//
//	//����? k1�� �ް��ε�!?
//	auto&& k2 = k1;
//
//	//����? move�� �������ε�!?
//	auto&& k3 = std::move(k1);
//
//	//������ : ���� ����(type deduction, ���� �߷� : auto, template)�� �Ͼ �� ���� ������ �߻��Ѵ�.
//
//	//------------------------------------------------------------------------------------------------------------
//	//���������� ���� ����
//	//template ������ 2������, ����� ���� 4���� ��. ���������� ������ �Լ� 4�� ������ ��. ���� ����?? 
//
//	Knight& k4 = k1; //�ް� ����
//	Knight&& k5 = std::move(k1); //������ ����
//
//	//������ : �ް��� �ƴ� �� => ���ϽĿ��� ����� ���Ұ����� �͵� => k5�� ��� ����� �� �ִ�.
//	//������ ���� : �������� ������ �� �ִ� ���� Ÿ�� => 
//	//k5�� Ÿ���� ������ ����Ÿ���̱� ������, k5�� �ް��̴�. ����...
//	//Test_RValueRef(move(k5));
//
//	//�̰� �������� �Ѱ��ִ°Ŵ�.
//	//������, �� �Լ��� �̰Ÿ� �ް����� �޴´�. �ֳĸ�...
//	//param�̶�� �Լ��� �Ű������� ������ �� �ֱ� �����̴�.
//	cout << "************************************" << endl;
//	Test_forwardingRef(move(k1)); //�̵� ������
//	Test_forwardingRef(k1); //���� ������
//
//	return 0;
//}