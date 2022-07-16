//#include <iostream>
//#include <vector>
//using namespace std;
//
////반복자(Iterator) : 포인터와 유사한 개념. 컨테이너의 원소를 카리키고, 순회할 수 있도록 도와준다.
////벡터는 배열처럼 v[i]이렇게 사용할 수 있지만, list 혹은 다른 컨테이너에서도 iterator를 사용할 수 있다.
//
//int main()
//{
//	srand(static_cast<unsigned int>(time(0)));
//	//벡터 선언부
//	vector<int> v;
//
//	//반복자 선언부
//	vector<int>::iterator it;
//
//
//	for (int i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	//반복자에 값 할당(포인터처럼 사용할 수 있음)
//	//it = v.begin(); //첫 값의 주소를 갖는다.
//	//int* ptr_begin = &v[0];
//	//it = v.end(); //마지막 값의 '다음 주소'를 갖는다.
//	//int* ptr_end = &v[0] + v.size();
//
//	//반복자의 사용
//	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << (*it) << endl;
//	}
//
//	//반복자에도 종류가 다양하다.
//	 
//	//const_iterator : 데이터를 수정하지 않는 경우
//	vector<int>::const_iterator cit;
//
//	//reverse_iterator : 뒤에서부터 순회하는 반복자
//	for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit)
//		cout << *rit << endl;
//
//
//	return 0;
//}