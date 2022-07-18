//#include<iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	srand(static_cast<unsigned int>(time(0)));
//	vector<int> v;
//	
//	for (int i = 0; i < 100; i++)
//	{
//		int num = rand() % 100;
//		v.push_back(num);
//	}
//
//	//아래의 문제들을 인덱스 i로 만든다면, list로 자료형이 바뀔 경우, 사용할 수 없게 된다.
//	//따라서, 인덱스 i보다는 iterator를 사용하는게... 낫나?
//
//	//Q1) number라는 숫자가 벡터에 있는지 체크하는 기능(return : bool or 첫 등장 iterartor)
//	{
//		int number = 50;
//		bool found = false;
//
//		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) == number) {
//				found = true;
//				break;
//			}
//		}
//
//		if (found)
//			cout << number << " 가 존재합니다." << endl;
//		else
//			cout << number << " 가 없습니다." << endl;
//	}
//	//Q2) 11로 나누어지는 숫자가 벡터에 있는지 체크하는 기능 (bool or iterator)
//	{
//		bool found = false;
//		vector<int>::iterator it;
//
//		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) % 11 == 0)
//			{
//				found = true;
//				break;
//			}
//		}
//		if (found)
//			cout << "11로 나누어지는 수가 존재합니다." << endl;
//		else
//			cout << "11로 나누어지는 수가 없습니다." << endl;
//	}
//	//Q3)홀수인 숫자의 개수(int count)
//	{
//		int count = 0;
//		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		{
//			if ((*it) % 2 == 1)
//			{
//				count++;
//			}
//			(*it) *= 3;
//		}
//
//		cout << "홀수의 수는 " << count << "개 입니다." << endl;
//	}
//	//Q4)벡터에 들어가 있는 모든 숫자들에 3을 곱해준다.
//	{
//		for (vector<int>::size_type i = 0; i<v.size(); i++)
//		{
//			/*int item& = v[i];
//			item *= 3;
//			v[i] = item;*/
//			v[i] *= 3;
//		}
//	}
//
//	return 0;
//}