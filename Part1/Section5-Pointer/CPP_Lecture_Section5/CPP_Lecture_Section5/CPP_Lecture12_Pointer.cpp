//#include <iostream>
//using namespace std;
//
//// 1) ������ vs �迭
//// 2) ���ǻ���
//
////�Ʒ��� �ڵ�� �Լ� ���ο��� ���������� �����ϰ�, �� ���������� �ּҰ��� ��ȯ�ϴ� �Լ���.
////�Լ� �ȿ� ����� ���������� �Լ��� ����ǰ� ���� ������� ������, �Ʒ��� �Լ��� �����ϴ�.
////�Լ� �ȿ����� �Ͻ������� �����ϴ� ������ �ּҸ� �ٷ�� ���� �����ϴ�.
//int* TestPointer() {
//	int a = 10;
//	return &a;
//}
//
//void TestWrong(int* ptr)
//{
//	int a[100] = {};
//	a[99] = 0xaaaaaaaa;
//	*ptr = 0x1234;
//}
//
//int main()
//{
//	int arr2D[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	// ���������ʹ� �����ͺ����� �ּҰ��� �����ϴ� ������.
//	// 
//	// 1���� �迭�� ��� �����ͺ����� �迭�̸��� �־������ν�, �� �迭�� �����ּҸ� ������ �� �־�����
//	// 2���� �迭�̶���ؼ� ���������Ϳ� �迭�̸��� �־��ִ� ���� �ƴϴ�.
//	// 
//	// 2���� �迭�� �޸𸮻󿡼� 1�����迭�� �ٸ��پ���.
//	// ���� 2���� �迭�� �̸��� �ܼ��� ù ������ �ּҸ� ��Ÿ�� ���̴�.
//	// 
//	// int** arr2dPtr = arr2D //�Ұ���
//
//	//
//	//int(*ptr)[5] = arr2D;
//	int* ptrs[2] = { arr2D[0], arr2D[1] };
//
//	/*for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << ptrs[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	int* a = TestPointer();
//	TestWrong(a);
//
//	cout << *a << endl;
//
//}