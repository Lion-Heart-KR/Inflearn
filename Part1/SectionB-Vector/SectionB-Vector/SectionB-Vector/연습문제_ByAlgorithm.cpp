//#include<iostream>
//#include <vector>
//#include <algorithm>
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
//	//연습문제를 더 효율적인 방법으로 구현해보자.
//	//자료구조 : 데이터를 저장하는 구조
//	//알고리즘 : 데이터를 어떻게 사용할 것인가?
//	
//	//find
//	//find_if
//
//	//count
//	//count_if
//	
//	//all_of
//	//any_of
//	// none_of
//	// for_each
//	
//	// remove
//	// remove_if
//	
//
//	//Q1) number라는 숫자가 벡터에 있는지 체크하는 기능(return : bool or 첫 등장 iterartor)
//	int number = 50;
//
//	//이 코드는 list 에서도, map 에서도 잘 동작한다.
//	vector<int>::iterator itFind = find(v.begin(), v.end(), number); //(시작 iterator, 끝 iterator, 찾으려는 값)
//	if (itFind == v.end())
//		cout << "못 찾음" << endl;
//	else
//		cout << "찾음" << endl;
//	
//
//
//	//Q2) 11로 나누어지는 숫자가 벡터에 있는지 체크하는 기능 (bool or iterator)
//	struct CanDivideBy11
//	{
//		bool operator()(int n)
//		{
//			return (n % 11 == 0);
//		}
//	};
//	vector<int>::iterator itFindIf1 = find_if(v.begin(), v.end(), CanDivideBy11()); //(시작, 끝, 조건함수(bool을 반환하는 람다식이나 함수객체나...))
//	vector<int>::iterator itFindIf2 = find_if(v.begin(), v.end(), [](int n) {return (n % 11 == 0); });
//	if (itFindIf1 == v.end())
//		cout << "못 찾음" << endl;
//	else
//		cout << "찾음" << endl;
//	
//	//Q3)홀수인 숫자의 개수(int count)
//	struct IsOdd
//	{
//		bool operator()(int n)
//		{
//			return (n % 2 == 1);
//		}
//	};
//	int countif = count_if(v.begin(), v.end(), IsOdd());
//
//	//모든 데이터가 홀수인가?
//	bool b1 = all_of(v.begin(), v.end(), IsOdd());
//
//	//홀수인 데이터가 하나라도 있는가?
//	bool b2 = any_of(v.begin(), v.end(), IsOdd());
//
//	//모든 데이터가 홀수가 아닌가?
//	bool b3 = none_of(v.begin(), v.end(), IsOdd());
//	
//	//Q4)벡터에 들어가 있는 모든 숫자들에 3을 곱해준다.
//	struct MultiplyBy3
//	{
//		void operator()(int& n)
//		{
//			n = n * 3;
//		}
//	};
//	for_each(v.begin(), v.end(), MultiplyBy3());
//
//	//remove, remove_if
//	//Q5)홀수인 데이터를 일괄 삭제
//
//	//문제 1 : 항상 ++it 해주면 안된다.
//	//문제 2 : it 에 v.erase의 반환값을 재할당 해줘야한다.
//	/*for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		if ((*it) % 2 == 1)
//			v.erase(it);
//	}*/
//	v.clear();
//	v.push_back(1);
//	v.push_back(9);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(11);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(6);
//	v.push_back(7);
//	v.push_back(8);
//
//	//값이 4인걸 삭제
//	//remove(v.begin(), v.end(), 4);
//
//	//값이 홀수인 것을 삭제
//	vector<int>::iterator itRemove = remove_if(v.begin(), v.end(), IsOdd()); //삭제를 시작할 위치의 iterator를 반환해준다.
//	v.erase(itRemove, v.end());
//
//	//remove는 삭제해야할 것을 삭제하는 것이 아니라, 남겨둬야 하는 것을 남겨두는 방식으로 동작한다.
//	/*
//	따라서, 위의 경우 삭제전 벡터는
//	1  9  2  3  11  4  5  6  7  8
//	이며, 홀수인 것을 삭제하는 remove_if를 실행한 후에는
//	2  4  6  8  11  4  5  6  7  8
//	이 된다.
//	[1] 벡터 전체를 순회를 하는데
//	[2] 삭제 대상이 아닌 것들을 앞으로 옮겨준다(덮어쓴다)
//	이게 끝이다. 그렇다 보니 11부터는 그대로 남아있는거다.
//
//	하지만 size가 변하지 않고 그대로이다. 
//
//	리턴값은 11을 가리키고 있는 iterator이므로
//	리턴 값 부터는 삭제하면 된다.
//	*/
//
//	return 0;
//}