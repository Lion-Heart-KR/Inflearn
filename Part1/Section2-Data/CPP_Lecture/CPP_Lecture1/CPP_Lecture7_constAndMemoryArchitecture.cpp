#include <iostream>
using namespace std;
#ifdef WORK

//�� �� �������� ���� �ٲ��� ���� ����
//constant�� ������ const�� ���δ�. (����� ������)
//const�� ����� �ʱⰪ�� �ݵ�� ��������� �Ѵ�.
// const�� ����� ���� ������ �� ����.
//����� �빮�ڷ� ���� ����


//�������� : ������ ����
// .data(�ʱⰪ �ִ� ���)
int a = 2;
// .bss(�ʱⰪ�� ���� ���)
int b;

// .rodata(�б����� ������)
const char* msg = "Hello World!";

unsigned char flag;

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3;
const int FEAR = 4;

int main() 
{
	//[stack region]
	int c = 3;

	flag = (1 << STUN);
	flag = (1 << POLYMORPH);
}

#endif