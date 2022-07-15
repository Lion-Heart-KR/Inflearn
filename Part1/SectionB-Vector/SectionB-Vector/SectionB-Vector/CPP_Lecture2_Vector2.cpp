#include <iostream>
#include <vector>
using namespace std;


/*
Iterator�� ���� �Ʒ��� ���� �����̴�. 
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
    //�ݺ���(Iterator) : �����Ϳ� ������ ����. �����̳��� ����(������)�� ����Ű��, ����/���� ���ҷ� �̵� ����

    //���� �����
    vector<int> v(10);

    for (vector<int>::size_type i = 0; i < v.size(); i++)
        v[i] = i;

    //�ݺ��� �����
    vector<int>::iterator it;
    int* ptr;

    it = v.begin();
    ptr = &v[0];

    //�ݺ����� ���
    cout << (*it) << endl;
    cout << (*ptr) << endl;

    //�ݺ��� ���� : ���� �ּҰ����� �̵���. ����, �������� ++,--��� ����
    it++;
    ptr++;
    it += 2;
    it -= 2;
    ptr += 2;
    ptr -= 2;

    //�ݺ��� ����
    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end(); //������ �ּ��� �� ���� �ּҸ� ����Ű�� �־ �����Ⱚ�� �ִ�.

    cout << *itBegin << endl;
    cout << *(itEnd-1) << endl;

    //++it�� it++���� ������ �̼��ϰ� ����
    //�� ������ ���̴µ� �־���
    //iterator�� vector�Ӹ� �ƴ϶�, �ٸ� �����̳ʿ��� ���������� �ִ� �����̴�.
    //�ٸ� �ڷᱸ�� (ex. list)������ �״�� ����� �� ����
    //�ٸ� �����̳ʴ� v[i]�� ���� �ε��� ������ �� �� �� �ִ�. - ���� �����ؼ��� ���� �Ʒ��� ������ ������� �ʾƵ� �ȴ�.
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << endl;
    }

    //pointer ����
    int* ptrBegin = &v[0];
    //int* ptrBegin = v.begin()._Ptr;
    int* ptrEnd = ptrBegin + v.size();
    //int* ptrEnd = v.end()._Ptr;

    for (int* ptr = ptrBegin; ptr != ptrEnd; ++ptr)
    {
        cout << *ptr << endl;
    }

    //const int* -> �����͸� �������� �ʰ�, ���� ���� �ִ�.
    vector<int>::const_iterator cit1 = v.cbegin();

    //��ٷ� ��� ��ٷ�
    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}