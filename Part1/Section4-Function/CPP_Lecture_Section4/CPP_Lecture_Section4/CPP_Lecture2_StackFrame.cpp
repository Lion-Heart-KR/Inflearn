#include <iostream>
#ifdef WORK

using namespace std;

//������ ���� : �Լ�(���ν���, �޼ҵ�, �Լ�, ��ƾ)

/*
* input���� ������ ������
* output���� ������ ������ �����ش�.
*
* ��ȯŸ�� �Լ��̸�([�Ű�����...])
* {
*   �Լ�����
*   ...
*   return
* }
*/

//Hello World�� �ֿܼ� ����ϴ� �Լ��� ������!
//input : ���� / output : ����
//Ÿ�� : int float double char void

void printHello() {
    cout << "�� ���� �ʴ� ���� ��������" << endl;
}

//������ �Է¹޾Ƽ�, �ֿܼ� ����ϴ� �Լ��� ������
void printNumber(int a) {
    cout << "�Ѱ��� ���ڴ� " << a << "�Դϴ�." << endl;
}

//�Է¹��� ������ 2�� ���ؼ� ��ȯ�ϴ� �Լ�
int MulByTwo(int a) {
    return a * 2;
}

//�� ���ڸ� ���ؼ� ������� ��� �Լ�
int MulByTwoParams(int a, int b) {
    printNumber(a);
    printNumber(b);
    return a * b;
}


int main()
{
    //printHello();
    //printNumber(321);
    //cout << MulByTwo(21) << endl;
    cout << MulByTwoParams(919, 99) << endl;
}

#endif