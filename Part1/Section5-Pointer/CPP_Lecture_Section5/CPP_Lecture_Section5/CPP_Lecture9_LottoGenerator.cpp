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
//	// 1단계
//	// Swap(a, b)함수 만들기
//	int a = 1;
//	int b = 2;
//	SWAP(a, b);
//	//cout << "a : " << a << '\t' << "b : " << b << endl;
//
//	// 2단계
//	// 정렬 함수 만들기 (오름차순)
//	//{1, 25, 6, 33, 45, 8}
//	int numbers[6] = {};
//	//Sort1(numbers, sizeof(numbers)/sizeof(*numbers))
//
//	// 3단계
//	// 로또 번호 생성
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
//	//1~45 사이의 숫자 6개를 골라주데용.
//	//중복은 없어야 해용
//	//정렬해서 출력해주데용
//	srand((unsigned)time(0));
//
//	//이미 나온 숫자면 1, 아직 나오지 않았으면 0
//	bool flag[46] = {};
//
//	//방법 1. 45칸짜리 배열을 flag로 사용한다. 공간복잡도는 높겠지만 빠르다.
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
//	//방법 2. 6칸짜리 배열에 대해서 순회를 하며 중복여부를 판단한다. 공간복잡도는 낮지만, 속도가... 느린가? 겨우 6갠데. 그거를 5번하면 30번인데... ㄱㅊ?
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