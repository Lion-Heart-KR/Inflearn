//#include <iostream>
//#include <iomanip>
//using namespace std;
//
////달팽이 문제
////2~9 사이의 정수n을 입력받아서 n*n 배열을 출력함
////출력은 시계방향으로 테두리를 채워가는 형식임
///* ex)5*5
//01 02 03 04 05
//16 17 18 19 06
//15 24 25 20 07
//14 23 22 21 08
//13 12 11 10 09
//*/
//
//void makeSnail(int a[][10], int size);
//void PrintSnail(int a[][10], int size);
//
//int main()
//{
//	int size;
//	int a[10][10] = {};
//	cin >> size;
//	makeSnail(a, size);
//	PrintSnail(a, size);
//}
//
//void makeSnail(int a[][10], int size)
//{
//	int cnt = 1;
//	for (int depth = 0; depth <= ceil((float)size / 2)-1; depth++) 
//	{
//		int i = 0, j = 0;
//		for (i = depth; i < size - depth; i++) {
//			a[depth][i] = cnt++;
//		}
//		for (j = depth+1; j < size - depth; j++) {
//			a[j][size - depth - 1] = cnt++;
//		}
//		for (i=size-depth-2; i >= depth; i--) {
//			a[size - depth - 1][i] = cnt++;
//		}
//		for (j=size-depth-2; j > depth; j--) {
//			a[j][depth] = cnt++;
//		}
//	}
//}
//
//void PrintSnail(int a[][10], int size)
//{
//	cout.width(2);
//	cout.fill('0');
//	cout << "-----------------------------------" << endl;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			cout << setfill('0') << setw(2) << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "-----------------------------------" << endl;
//}