//#include <iostream>
//#define SWAP(A, B) {int temp=A; A=B; B=temp;}
//using namespace std;
//
//void Sort1(int numbers[], int size);
//void Sort2(int numbers[], int size);
//void PrintArray(int numbers[], int size);
//void ChooseLotto(int numbers[]);
//
//int main()
//{
//	// 1�ܰ�
//	// Swap(a, b)�Լ� �����
//	int a = 1;
//	int b = 2;
//	SWAP(a, b);
//	//cout << "a : " << a << '\t' << "b : " << b << endl;
//
//	// 2�ܰ�
//	// ���� �Լ� ����� (��������)
//	//{1, 25, 6, 33, 45, 8}
//	int numbers[6] = {};
//	//Sort1(numbers, sizeof(numbers)/sizeof(*numbers))
//
//	// 3�ܰ�
//	// �ζ� ��ȣ ����
//	ChooseLotto(numbers);
//	PrintArray(numbers, sizeof(numbers) / sizeof(*numbers));
//}
//
//void Sort1(int numbers[], int size)
//{
//	int i;
//	int j;
//	for (i = 1; i < size; i++) {
//		int pivot = numbers[i];
//		for (j = i - 1; j >= 0; j--) {
//			if (numbers[j] > pivot) {
//				numbers[j + 1] = numbers[j];
//			}
//			else {
//				break;
//			}
//		}
//		numbers[j + 1] = pivot;
//	}
//}
//
//void Sort2(int numbers[], int size)
//{
//	for (int i = 0; i < size - 1; i++) {
//		int best = i;
//		for (int j = i + 1; j < size; j++) {
//			if (numbers[j] < numbers[best])
//				best = j;
//		}
//		SWAP(numbers[i], numbers[best]);
//	}
//}
//
//void PrintArray(int numbers[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << numbers[i] << endl;
//	}
//}
//
//void ChooseLotto(int numbers[])
//{
//	//1~45 ������ ���� 6���� ����ֵ���.
//	//�ߺ��� ����� �ؿ�
//	//�����ؼ� ������ֵ���
//	srand((unsigned)time(0));
//
//	//�̹� ���� ���ڸ� 1, ���� ������ �ʾ����� 0
//	bool flag[46] = {};
//
//	//��� 1. 45ĭ¥�� �迭�� flag�� ����Ѵ�. �������⵵�� �������� ������.
//	for (int i = 0; i < 6; i++) {
//		int random = rand() % 45 + 1;
//		if (!flag[random]) {
//			numbers[i] = random;
//			flag[random] = true;
//		}
//		else {
//			i--;
//			cout << "i = " << i << "\tduplicated : " << random << endl;
//		}
//	}
//
//	//��� 2. 6ĭ¥�� �迭�� ���ؼ� ��ȸ�� �ϸ� �ߺ����θ� �Ǵ��Ѵ�. �������⵵�� ������, �ӵ���... ������? �ܿ� 6����. �װŸ� 5���ϸ� 30���ε�... ����?
//	/*int j;
//	for (int i = 0; i < 6; i++) {
//		int random = rand() % 45 + 1;
//
//		for (j = 0; j < i; j++) {
//			if (numbers[j] == random)
//			{
//				cout << "i = " << i << "\tduplicated : " << random << endl;
//				i--;
//				break;
//			}
//		}
//
//		if(j == i)
//			numbers[i] = random;
//	}*/
//
//	Sort1(numbers, 6);
//}