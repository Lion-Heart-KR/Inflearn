#include <iostream>
using namespace std;

//��������
//1. ���ڿ��� ���̸� ���ϴ� �Լ�
int StrLen(char* str);

//2. ���ڿ� �����Լ�
char* StrCpy(char* dest, char* src);
#pragma warning(disable:4996) //4996�� ������ �����Ѵ�

//3. ���ڿ� �̾���̱�
char* StrCat(char* dest, char* src);

int main()
{
	const int BUF_SIZE = 100;
	char a[BUF_SIZE] = "Hello";
	char b[BUF_SIZE] = {};
	char c[BUF_SIZE] = "World!";

	//strlen
	//cout << strlen(a) << endl;
	cout << StrLen(a) << endl;

	//strcpy(b, a);
	/*StrCpy(b, a);
	cout << b << endl;*/

	cout << StrCat(c, a) << endl;
	//strcat_s(a, c);
	cout << a << endl;
}

int StrLen(char* str)
{
	int i;
	for (i = 0; str[i]; i++);
	return i;
}

char* StrCpy(char* dest, char* src)
{
	int i;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return dest;
}

//src�� dest�� �̾���̰�, src�� ��ȯ�Ѵ�.
char* StrCat(char* dest, char* src)
{
	StrCpy(src + StrLen(src), dest);
	return src;
}