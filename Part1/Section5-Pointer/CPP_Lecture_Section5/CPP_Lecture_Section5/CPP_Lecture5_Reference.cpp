//#include <iostream>
//using namespace std;
//
//struct StatInfo
//{
//	int hp;
//	int attack;
//	int defence;
//};
//
////Call by address
//void CreateMonster(StatInfo* info)
//{
//	info->hp = 100;
//	info->attack = 8;
//	info->defence = 5;
//}
//
////Call by value : ���� �������� �ʰ�, ���� �б⸸ �ϴ� ����� �������
////���� �����Ϸ��� �Ѵٸ�, �� ������� ����ϸ� �ȵ�.
//void CreateMonster(StatInfo info) 
//{
//	info.hp = 100;
//	info.attack = 8;
//	info.defence = 5;
//}
//
//// 1) �� ���� ���
//void PrintInfoByCopy(StatInfo info) 
//{
//	cout << "--------------------------" << endl;
//	cout << "HP : " << info.hp << endl;
//	cout << "ATT : " << info.attack << endl;
//	cout << "DEF : " << info.defence << endl;
//	cout << "--------------------------" << endl;
//}
//
//// 2) �ּ� ���� ���
//void PrintInfoByPtr(StatInfo* info)
//{
//	cout << "--------------------------" << endl;
//	cout << "HP : " << info->hp << endl;
//	cout << "ATT : " << info->attack << endl;
//	cout << "DEF : " << info->defence << endl;
//	cout << "--------------------------" << endl;
//}
//
//// 3) ���� ���� ���
//void PrintInfoByRef(StatInfo& info) {
//	cout << "--------------------------" << endl;
//	cout << "HP : " << info.hp << endl;
//	cout << "ATT : " << info.attack << endl;
//	cout << "DEF : " << info.defence << endl;
//	cout << "--------------------------" << endl;
//}
//
//void setByValue(int number) {
//	number++;
//}
//
//void setByPtr(int* number) {
//	(*number)++;
//}
//
//void setByRef(int& number) {
//	number++;
//}
//
//// 3) ���������� ����
//
////StatInfo ����ü�� 1000����Ʈ¥�� ���� ����ü���?
//// - �� ���� ��� : 1000����Ʈ�� ����ȴ�.
//// - �ּ� ���� ��� : 4byte or 8byte�� �ּҸ� ����ȴ�.
//// - �������� : StatInfo& �� 4byte or 8byte
//// - �޸� ȿ���� ���̿��� ū ���̰� ���Եȴ�.
//
//int main() 
//{
//	//4byte ������ ����
//	//������ ������ �����ϴ� ������ �̸��� number��� ��.
//	//������ number���� �� �����ų�, number�� �� �ִ´ٰ� �ϸ�
//	//�����Ϸ��� �������� �˾Ƶ��, �ش� �ּҿ� ���� �־��ָ� �ȴ�.
//	int number = 1;
//
//	//* ������ ����
//	//int���� ���� ������ �ּҸ� ��� ����
//	int* pointer = &number;
//	*pointer = 2;
//
//	//������
//	//�ο췹��(�����) �������� ���� �۵� ����� int*�� �Ȱ���.
//	//���� �޸𸮰����� ���ؼ� �ٸ� �̸��� ������ �ο����ִ� �����̴�.
//	//�����Ϳ� ���������� ���纻�� �ƴ� ������ ���� ������ �����ϰ� ���ش�.
//
//	int& reference = number;
//
//	//C++���������� number��� �ٱ��Ͽ� �Ǵٸ� �̸��� �ο��� ��.
//	//number��� ������ reference��� �ٸ� �̸��� ������ ��.
//	//������ reference �ٱ��Ͽ� �� �����ų� ������,
//	//���� number�ٱ��Ͽ� �� ���� �����ų� �ִ°Ͱ� ���� ����� ��Ÿ����.
//
//	reference = 3;
//
//	//�������� �� ����ұ�?
//	//�������� ��뼺�� ����
//	//�������� ��ȿ������ ����
//	//«��ȣ�η� = ������
//
//
//
//
//	StatInfo info = { 100, 2, 5 };
//	CreateMonster(info);
//	PrintInfoByCopy(info);
//	PrintInfoByPtr(&info);
//	PrintInfoByRef(info);
//
//	//int value = 1;
//	//setByPtr(&value);
//	//cout << "after by ptr " << value << endl;
//	//setByValue(value);
//	//cout << "after by value " << value << endl;
//	////�׳� �����Ѱ��ֵ��� �Ѱ��ָ� �ȴ�
//	////���������� �˾Ƽ� �ּҰ� �����ؼ� ����Ѵ�. �����̴�
//	//setByRef(value);
//	//cout << "after by ref " << value << endl;
//
//}