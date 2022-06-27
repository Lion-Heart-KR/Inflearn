//#include <iostream>
//
//using namespace std;
//
//int main() {
//	//2행 5열의 배열
//	int Array2D[2][5] = { {1,2,3,4,5}, {6,7,8,9,10}};
//
//	/*for (int floor = 0; floor < 2; floor++){
//		for (int room = 0; room < 5; room++) {
//			cout << Array2D[floor][room] << " ";
//		}
//		cout << endl;
//	}
//
//	int Array1D[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int floor = 0; floor < 2; floor++) {
//		for (int room = 0; room < 5; room++) {
//			int index = floor * 5 + room;
//			cout << Array1D[index] << " ";
//		}
//		cout << endl;
//	}*/
//	
//	//2차원 배열은 언제 사용할까? 2D map을 그릴 때 사용한다.
//	int map[5][5] = {
//		{1, 1, 1, 1, 1},
//		{1, 0, 1, 1, 1},
//		{1, 0, 0, 0, 0},
//		{1, 1, 0, 0, 0},
//		{1, 1, 1, 1, 0}
//	};
//
//	for (int y = 0; y < 5; y++) {
//		for (int x = 0; x < 5; x++) {
//			cout << map[y][x] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}