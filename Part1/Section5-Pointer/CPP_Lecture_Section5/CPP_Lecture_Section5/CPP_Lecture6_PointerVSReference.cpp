//#include <iostream>
//using namespace std;
//#define OUT
//
//struct StatInfo {
//	int hp;
//	int attack;
//	int defence;
//};
//
//void PrintStatInfo(const StatInfo& info);
//void PrintStatInfo(StatInfo* info);
//void ChangeInfo(StatInfo& info);
//
//int main() 
//{
//	StatInfo info;
//
//	// ������ vs ����
//	// ���� : ����
//	// ���Ǽ� : ���� ��
//	
//	// 1) ���Ǽ� ����
//	// ���Ǽ��� ���ٴ°� �� ������ �ƴϴ�.
//	// �����ʹ� �ּҸ� �Ѱܼ� ������ �����Ѵٴ� ���� �Լ��� ȣ�� �κп��� Ȯ���ϰ� ������ �� ������
//	// ������ ������ �ѱ�� ���� �Ϲ� ������ �ѱ�� �Ͱ� ������ ������� �̷������ ������ ������ �����ϴ°����� Ȯ���� �������� ���� �� �ִ�.
//	// ������ ������ ����� �Լ��� ȣ���� �� ������ �����ϴ� ������ ���� �ʴ´�.
//
//	// 2) �ʱ�ȭ ����
//	// ����Ÿ���� �ٱ����� 2��° �̸��� �����ִ� ����
//	// -> �����ϴ� ����� ������ �ȵȴ�.
//	// -> �ʱ�ȭ�� �ݵ�� ����� �Ѵ�.
//	// �ݸ� �����ʹ� �׳� � �ּҶ���ǹ��̹Ƿ�, ����� �������� �������� �ִ�.
//	// �����Ϳ��� '����'�� NULL or nullptr�� �־��ָ�ȴ�.
//	// �����͸� �Ű������� �ְ������ �׻� nullptr check�� ������Ѵ�.
//	// ���̴ٺ��� nullptr check�� �̼��ϰ� ������ ���ƸԴ´�.
//	
//	// 3) �׷��� ���� �� ����?
//	// ��������
//	// ������ �����͸� ����Ѵ�.
//	// �𸮾����� ����Ÿ���� ����Ѵ�.
//	// ���� ��츦 ����ؾ��ϸ� pointer
//	// �ٲ��� �ʰ� �д� �뵵��� const type& reference
//	
//	// �� �� �Ϲ������� ref�� ����� �� ���� ����Ǵ� ��Ȳ�̶�� ��� �ϴ°� ������?
//	// (�ϳ��� ��������� �˾Ƴ���)
//	// �̷��� #define OUT�� �����ϰ�, ref type�� ������ �Ѱ��� �� OUT�� �Բ� ������ش�.
//	// �̷���, ������ �����ϴ� �۾��� �߻����� ���������� �˷��ش�.
//	// OUT���� ���� ���� �Ҵ���� �ʾұ⿡, ��ó���� �׳� ���� ���� ��޵ȴ�.
//	ChangeInfo(OUT info);
//
//	StatInfo* ptr; //ptr�� ���� �Ҵ��� ���� �ʾƵ� ������
//	StatInfo& ref=info; //ref���� ���� �Ҵ��� �����
//
//	// �����Ϳ� const
//	// const int* a
//	// a�� ����� �ּҰ��� �ٲ� �� �ִ�.
//	// a�� �ּҸ� ���� ������ ���� �ٲ� �� ����.
//	// int* const a
//	// a�� ����� �ּҰ��� �ٲ� ���� ����.
//	// a�� �ּҸ� ���� ������ ���� �ٲ� �� �ִ�.
//
//	int number1 = 10;
//	int number2 = 20;
//	const int* numPtr1 = &number1;
//	int* const numPtr2 = &number2;
//
//	numPtr1 = &number2;
//	//numPtr2 = &number1; �Ұ���
//
//	//*numPtr1 = 2; �Ұ���
//	*numPtr2 = 3;
//
//	const int& numRef = number1;
//	//numRef = 2; �Ұ���
//
//	PrintStatInfo(&info);
//	PrintStatInfo(info);
//
//
//	//�����ͷ� ����ϴ� ���� ������ �Ѱ��ִ� ���
//	//���� �����͸� �����Ͽ� �丮���� �۾��ϰ� �־��µ� �Լ�ȣ���Ϸ��� ���� �� �ô���, �Ű������� ����Ÿ���� ��츦 ����
//	//�� : PrintByRef(StatInfo& info)
//	//ȣ���� : PrintByRef(*pointer)
//
//	//������ ����ϴ� ���� �����ͷ� �Ѱ��ִ� ���
//	//�� : PrintByPtr(StatInfo* info)
//	//ȣ���� : PrintByPtr(&ref)
//}
//
//void PrintStatInfo(const StatInfo& info) {
//	cout << "----------------------" << endl;
//	cout << "HP : " << info.hp << endl;
//	cout << "Attack : " << info.attack << endl;
//	cout << "Defence : " << info.defence << endl;
//	cout << "----------------------" << endl;
//}
//
//void PrintStatInfo(StatInfo* info) {
//	if(info == nullptr)
//		return;
//
//	cout << "----------------------" << endl;
//	cout << "HP : " << info->hp << endl;
//	cout << "Attack : " << info->attack << endl;
//	cout << "Defence : " << info->defence << endl;
//	cout << "----------------------" << endl;
//}
//
////Ư�� ������ �����ϴ� ���͸� ã�� �Լ�
//StatInfo* FindMonster()
//{
//	StatInfo* info;
//	//ã�Ҵ�!
//	if(true)
//		return info;
//	else
//		return nullptr;
//}
//
//void ChangeInfo(StatInfo& info) {
//	info.hp = 200;
//}