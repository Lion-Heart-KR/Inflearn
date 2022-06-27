#include <iostream>
using namespace std;

//연습문제
//1. 문자열의 길이를 구하는 함수
int StrLen(char* str);

//2. 문자열 복사함수
char* StrCpy(char* dest, char* src);
#pragma warning(disable:4996) //4996번 에러를 무시한당

//3. 문자열 이어붙이기
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

//src에 dest를 이어붙이고, src를 반환한다.
char* StrCat(char* dest, char* src)
{
	StrCpy(src + StrLen(src), dest);
	return src;
}