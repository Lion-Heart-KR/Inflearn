#include <iostream>
using namespace std;

//������
//�ʱⰪ�� �ڵ����� �����ȴ�.
//default�� 0���� �����ؼ� +1��

//const�� �޸𸮿� �ö󰡴� ��쵵 ������, �޸𸮿� �ö��� �ʰ�, �ܼ��� ġȯ�ؼ� ����ϴ� ��쵵 �ִ�.
//�ݸ� ���������� �����ϸ�, �޸𸮿� �ö��� �ʰ�, �׻� ġȯ�ؼ� ����Ѵ�. ���� �޸� ���鿡�� �̵��̴�

const int SCISSORS = 1;
const int ROCK = 2;
const int PAPER = 3;

enum ENUM_SRP
{
	E_SCISSORS=1, 
	E_ROCK, 
	E_PAPER
};

// #�� ������ : ��ó�� ���ù�
// 1)��ó�� 2)������ 3)��ũ
// #include <iostream> : iostream�̶�� ������ ã�Ƽ� �ش� ������ �׳� ����!
// �ڵ带 �״�� �����ع�����.
#define DEFINE_TEST 1+2 //3�� �ƴ϶� 1+2�� �����ؼ� �ڵ忡 �־������.
#define D_SCISSORS 1
#define D_ROCK 2
#define D_PAPER 3
#define HELLO_WORLD cout << "Hello World!" << endl;

int main() 
{
	HELLO_WORLD
	auto a = &SCISSORS;

}