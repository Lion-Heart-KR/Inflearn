//#include <iostream>
//using namespace std;
//
////��������
////1. ���ڿ��� ���̸� ���ϴ� �Լ�
//int StrLen(char* str);
//
////2. ���ڿ� �����Լ�
//char* StrCpy(char* dest, char* src);
//#pragma warning(disable:4996) //4996�� ������ �����Ѵ�
//
////3. ���ڿ� �̾���̱�
//char* StrCat(char* dest, char* src);
//
////4. ���ڿ� ��
//int StrCmp(char* a, char* b);
//
////5. ���ڿ� ������
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
////dest�� src�� �̾���̰�, dest�� ��ȯ�Ѵ�.
//char* StrCat(char* dest, char* src)
//{
//	StrCpy(dest + StrLen(dest), src);
//	return dest;
//}
//
////��Ȯ�� ������ 0�� return
////���������� a�� ���� ������ 0���� ���� ��
////���������� b�� ���� ������ 0���� ū �� ��
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
//	//��� 1
//	/*char temp[100] = {};
//	StrCpy(temp, str);
//	for (int i = 0; i < StrLen(str); i++) {
//		str[i] = temp[StrLen(str)-i-1];
//	}*/
//	
//	//���2
//	for (int i = 0; i < StrLen(str) / 2; i++) {
//		int temp = str[i];
//		str[i] = str[StrLen(str) - i - 1];
//		str[StrLen(str) - i - 1] = temp;
//	}
//}