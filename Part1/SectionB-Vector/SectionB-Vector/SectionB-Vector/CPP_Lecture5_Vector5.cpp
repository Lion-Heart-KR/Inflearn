//#include <iostream>
//#include <vector>
//using namespace std;
//
//// ������ ����
//
//int main()
//{
//	vector<vector<int>> v2D;
//	vector<int> v1(10);
//	v2D.push_back(v1);
//
//	//v2D�� 1���� �迭�� ���ٸ� size�� capacity��� 1�̴�.
//	cout << "(" << v2D.size() << ", " << v2D.capacity() << ")" << endl;
//
//	//v2D�� �� ���� �������� ���ٸ�, size�� capacity��� 10�̴�?
//	cout << "(" << v2D[0].size() << ", " << v2D[0].capacity() << ")" << endl;
//	
//	for (vector<int>::size_type i = 0; i < v2D[0].size(); i++)
//		cout << v2D[0][i] << endl;
//
//	//v2D�� �� ��° ���� �����ϰ�, �ű⿡ push_back����� �Ѵ�.
//	vector<int> v2;
//	v2D.push_back(v2);
//	for (int i = 0; i < 23; i++)
//		v2D[1].push_back(i);
//
//	//2���� �迭�� ���
//	for (vector<int>::size_type i = 0; i < v2D.size(); i++)
//	{
//		for (vector<int>::size_type j = 0; j < v2D[i].size(); j++)
//		{
//			cout << "(" << i << ", " << j << ") = " << v2D[i][j] << endl;
//		}
//	}
//
//	//2���� �迭�� �� �ٸ� ���� ���
//	//2���� ���͸� �����ϴµ�,
//	//���� 10��
//	//���� 10����, �׸��� �ʱⰪ�� 0���� �����Ѵ�.
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
//	//�Ʒ��� ��� ���� �߰��� ���� ������, ���� �߰��� ���� �ִ�.
//	//�Ʒ��� ���ʹ� 2�� N���� �ȴ�.
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