//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 다차원 벡터
//
//int main()
//{
//	vector<vector<int>> v2D;
//	vector<int> v1(10);
//	v2D.push_back(v1);
//
//	//v2D를 1차원 배열로 본다면 size와 capacity모두 1이다.
//	cout << "(" << v2D.size() << ", " << v2D.capacity() << ")" << endl;
//
//	//v2D의 한 행을 기준으로 본다면, size와 capacity모두 10이다?
//	cout << "(" << v2D[0].size() << ", " << v2D[0].capacity() << ")" << endl;
//	
//	for (vector<int>::size_type i = 0; i < v2D[0].size(); i++)
//		cout << v2D[0][i] << endl;
//
//	//v2D의 두 번째 행을 선언하고, 거기에 push_back해줘야 한다.
//	vector<int> v2;
//	v2D.push_back(v2);
//	for (int i = 0; i < 23; i++)
//		v2D[1].push_back(i);
//
//	//2차원 배열의 출력
//	for (vector<int>::size_type i = 0; i < v2D.size(); i++)
//	{
//		for (vector<int>::size_type j = 0; j < v2D[i].size(); j++)
//		{
//			cout << "(" << i << ", " << j << ") = " << v2D[i][j] << endl;
//		}
//	}
//
//	//2차원 배열의 또 다른 선언 방법
//	//2차원 벡터를 선언하는데,
//	//행은 10개
//	//열은 10개로, 그리고 초기값은 0으로 선언한다.
//	vector<vector<int>> v2DArray(10, vector<int>(10, 0));
//	cout << "(" << v2DArray.size() << ", " << v2DArray.capacity() << ")" << endl;
//
//	cout << "------------------------------------------" << endl;
//
//	for(int i = 0 ; i<v2DArray.size(); i++)
//		cout << "(" << v2DArray[i].size() << ", " << v2DArray[i].capacity() << ")" << endl;
//
//	cout << "------------------------------------------" << endl;
//
//	//아래의 경우 행을 추가할 수는 없지만, 열을 추가할 수는 있다.
//	//아래의 벡터는 2행 N열이 된다.
//	vector<int> v2DRow[] = { {0, 1}, {2, 3} };
//	
//	srand(static_cast<unsigned int>(time(nullptr)));
//	for (int i = 0; i < 100; i++)
//	{
//		int randVal = rand() % 100;
//		if (randVal % 12 == 0)
//			break;
//		v2DRow[0].push_back(randVal);
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		int randVal = rand() % 100;
//		if (randVal % 15 == 0)
//			break;
//		v2DRow[1].push_back(randVal);
//	}
//
//	cout << "(" << v2DRow[0].size() << ", " << v2DRow[0].capacity() << ")" << endl;
//	cout << "(" << v2DRow[1].size() << ", " << v2DRow[1].capacity() << ")" << endl;
//	
//
//
//	
//
//
//	return 0;
//}