#include <iostream>
#include <iomanip>
using namespace std;

void printBoard(int a[][10], int size);
void SetBoard(int board[][10], int n);

//게임스럽게 문제를 풀었다.

enum DIR
{
	RIGHT, DOWN, LEFT, UP
};
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

int main() 
{
	int a[10][10] = {};
	int n;
	cin >> n;

	SetBoard(a, n);
	printBoard(a, n);
}

bool CanGo(int x, int y, int a[][10], int n) {
	if (x < 0 || x >= n)
		return false;
	if (y < 0 || y >= n)
		return false;
	if (a[x][y] != 0)
		return false;

	return true;
}

void SetBoard(int board[][10], int n)
{
	int dir = RIGHT;
	int x = 0, y = 0;
	int cnt = 1;

	while (true) {
		board[x][y] = cnt;
		if (cnt == n * n)
			break;

		int nextX;
		int nextY;

		 
		nextX = x + dx[dir];
		nextY = y + dy[dir];

		/*switch (dir)
		{
		case RIGHT:
			nextX = x;
			nextY = y+1;
			break;
		case DOWN :
			nextX = x+1;
			nextY = y;
			break;
		case LEFT :
			nextX = x;
			nextY = y-1;
			break;
		case UP:
			nextX = x-1;
			nextY = y;
			break;
		default:
			break;
		}*/

		if (CanGo(nextX, nextY, board, n)) {
			x = nextX;
			y = nextY;
			cnt++;
		}
		else {
			dir = (dir + 1) % 4;
		}
	}
}

void printBoard(int a[][10], int size) {
	cout << "-----------------------------------" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << setfill('0') << setw(2) << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-----------------------------------" << endl;
}