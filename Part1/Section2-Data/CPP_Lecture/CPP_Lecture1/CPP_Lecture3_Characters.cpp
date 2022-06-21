#include <iostream>
//#define WORK

#ifdef WORK

using namespace std;

//문자와 문자열
//char도 사실 정수다. 그치만, '문자'를 나타내기 위해 사용한다.

//char : alphabet, number, character
//wchar_t : Unicode 문자


//ASCII(Americal Standard Code for Information Interchange)
//'문자'의 의미로 작은 따옴표를 사용하게 된다.

char ch = 'a';
char ch2 = '1'; //1이라는 문자의 아스키 값 49가 들어가게 된다.
char ch3 = 1; // 1이 들어간다.
char ch4 = 'a' + 1;//b가 저장된다.

//영어만으로는 부족하다.
//전세계 모든 문자에 대해 유일한 코드를 부여해야한다 -> 유니코드
//참고)유니코드에서 가장 많은 번호를 차지하는게 한국어와 중국어다.

//유니코드는 표기 방식이 여러가지가 있는데, 대표적으로 UTF8, UTF16이 있다.
//UTF8
// - 알파벳, 숫자는 1byte, ASCII와 동일한 번호
// - 유럽 지역의 문자는 2byte
// - 한글, 한자 등은 3byte

//UTF16
// - 알파벳, 숫자, 한자, 한글, 등 거의 대부분 문자 2byte
// - 예외적인 고대 문자만 4byte로 표현함(사실상 잘 사용하지 않는 문자들임)
//wchar_t 자료형 사용함

wchar_t wch = L'가'; //앞에 L을 붙여줌으로써, 유니코드임을 알려준다.(형변환임)
//wchar_t wch = 0xac00; //'가'를 유니코드로 나타낸 값이 0xac00이다.

//Escape Sequence
//표기하기 애매한 특수기호들을 표기하는 방법
// \t : tab
// \n : LineFeed
// \r : carriageReturn(커서를 맨 앞으로 이동)
//enter key : \r\n
// \' : 작은 따옴표 하나

// 문자열
// 문자들이 연속되어있는 것.
// 정수는 (1~8바이트) 고정 길이로 나타냈으나, 문장과 같은 가변적인 것을 표현할 필요가 있다.
// Ex)Hello World : 11bytes
// 맨 끝에 Null문자를 통해서 문자열의 끝을 판단한다. '\0' == null
// 끝은 Null (0)

//char str[] = { 'h', 'e', 'l', 'l', 'o' }; 
//전역영역에 선언하면, data영역에 저장되고, 초기화된다. 따라서 null을 배열에 포함시키지 않더라도, 문자열의 끝이 어딘지 안다. 0 == null
char str2[] = "Hello World!"; //자동으로 null이 들어간다.
wchar_t str3[] = L"Hello World!";

int main() {
	char str[] = { 'h', 'e', 'l', 'l', 'o', '\0'};
	//main에 선언하면 스택영역에 데이터가 저장된다 -> 값들이 초기화가 안되어 있어서 null을 통해서 끝을 지정해주지 않으면, 외계어가 나온다.

	//cout << ch4 << endl;

	//cout은 char 전용이다.
	//unicode는 wcout을 사용

	//한국어 표현을 위해서는 이렇게 해줘야함.
	/*wcout.imbue(locale("kor"));

	wcout << wch << endl;*/

	cout << str << endl;
	return 0;
}
#endif