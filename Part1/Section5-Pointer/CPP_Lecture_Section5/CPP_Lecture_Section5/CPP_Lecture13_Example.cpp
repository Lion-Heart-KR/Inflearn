//#include <iostream>
//using namespace std;
//
////연습문제
////1. 문자열의 길이를 구하는 함수
//int StrLen(char* str);
//
////2. 문자열 복사함수
//char* StrCpy(char* dest, char* src);
//#pragma warning(disable:4996) //4996번 에러를 무시한당
//
////3. 문자열 이어붙이기
//char* StrCat(char* dest, char* src);
//
////4. 문자열 비교
//int StrCmp(char* a, char* b);
//
////5. 문자열 뒤집기
//void RevStr(char* str);
//
//int main()
//{
//	const int BUF_SIZE = 100;
//	char a[BUF_SIZE] = "abcdefg";
//	char b[BUF_SIZE] = {};
//	char c[BUF_SIZE] = "World!";
//	char d[BUF_SIZE] = "Hello";
//
//	//******strlen******
//	//cout << strlen(a) << endl;
//	//cout << StrLen(a) << endl;
//
//	//******strcpy******
//	//strcpy(b, a);
//	/*StrCpy(b, a);
//	cout << b << endl;*/
//
//	//******strcat******
//	//cout << StrCat(a, c) << endl;
//	//strcat_s(a, c);
//	//cout << a << endl;
//
//	//******strcmp******
//	/*cout << strcmp(a, d) << endl;
//	cout << StrCmp(a, d) << endl;*/
//
//	RevStr(a);
//	cout << a << endl;
//}
//
//int StrLen(char* str)
//{
//	int i;
//	for (i = 0; str[i]; i++);
//	return i;
//}
//
//char* StrCpy(char* dest, char* src)
//{
//	int i;
//	for (i = 0; src[i]; i++)
//		dest[i] = src[i];
//
//	dest[i] = '\0';
//
//	return dest;
//}
//
////dest에 src를 이어붙이고, dest를 반환한다.
//char* StrCat(char* dest, char* src)
//{
//	StrCpy(dest + StrLen(dest), src);
//	return dest;
//}
//
////정확히 같으면 0을 return
////사전순으로 a가 먼저 나오면 0보다 작은 값
////사전순으로 b가 먼저 나오면 0보다 큰 값 값
//int StrCmp(char* a, char* b)
//{
//	for (int i = 0; a[i] || b[i]; i++)
//	{
//		if (a[i] > b[i])
//			return 1;
//		else if(a[i] < b[i])
//			return -1;
//	}
//	return 0;
//}
//
//void RevStr(char* str)
//{
//	//방법 1
//	/*char temp[100] = {};
//	StrCpy(temp, str);
//	for (int i = 0; i < StrLen(str); i++) {
//		str[i] = temp[StrLen(str)-i-1];
//	}*/
//	
//	//방법2
//	for (int i = 0; i < StrLen(str) / 2; i++) {
//		int temp = str[i];
//		str[i] = str[StrLen(str) - i - 1];
//		str[StrLen(str) - i - 1] = temp;
//	}
//}