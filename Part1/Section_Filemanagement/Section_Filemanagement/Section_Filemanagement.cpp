#include <iostream>

//헤더파일에 #pragma once가 있으면 헤더파일을 여러번 선언해도 상관없다.
//#include "Test1.h"
//#include "Test2.h"


using namespace std;

//파일 분할 관리
//하나의 폴더안에, 함수 선언부는 같은 것이 여러개 나와도 되지만
//동일한 함수 구현부가 여러번 나와서는 안된다.


int main()
{
	StatInfo info;
	Test_1();
}