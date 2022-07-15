#include <iostream>
#include <vector>
using namespace std;


/*
Iterator는 대충 아래와 같은 개념이다. 
class MyIterator
{

};

class MyVector
{
public:
    typedef MyIterator iterator;
};
*/

int Test(int a, int b)
{
    return a;
}

int main()
{
    //반복자(Iterator) : 포인터와 유사한 개념. 컨테이너의 원소(데이터)를 가리키고, 다음/이전 원소로 이동 가능

    //벡터 선언부
    vector<int> v(10);

    for (vector<int>::size_type i = 0; i < v.size(); i++)
        v[i] = i;

    //반복자 선언부
    vector<int>::iterator it;
    int* ptr;

    it = v.begin();
    ptr = &v[0];

    //반복자의 사용
    cout << (*it) << endl;
    cout << (*ptr) << endl;

    //반복자 연산 : 다음 주소값으로 이동함. 전위, 후위연산 ++,--모두 가능
    it++;
    ptr++;
    it += 2;
    it -= 2;
    ptr += 2;
    ptr -= 2;

    //반복자 응용
    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end(); //마지막 주소의 그 다음 주소를 가리키고 있어서 쓰레기값이 있다.

    cout << *itBegin << endl;
    cout << *(itEnd-1) << endl;

    //++it가 it++보다 성능이 미세하게 좋다
    //더 복잡해 보이는데 왜쓰냐
    //iterator는 vector뿐만 아니라, 다른 컨테이너에도 공통적으로 있는 개념이다.
    //다른 자료구조 (ex. list)에서도 그대로 사용할 수 있음
    //다른 컨테이너는 v[i]와 같은 인덱스 접근이 안 될 수 있다. - 벡터 한정해서는 굳이 아래의 문법을 사용하진 않아도 된다.
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << endl;
    }

    //pointer 버전
    int* ptrBegin = &v[0];
    //int* ptrBegin = v.begin()._Ptr;
    int* ptrEnd = ptrBegin + v.size();
    //int* ptrEnd = v.end()._Ptr;

    for (int* ptr = ptrBegin; ptr != ptrEnd; ++ptr)
    {
        cout << *ptr << endl;
    }

    //const int* -> 데이터를 수정하지 않고, 읽을 수만 있다.
    vector<int>::const_iterator cit1 = v.cbegin();

    //까꾸루 출력 까꾸루
    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}