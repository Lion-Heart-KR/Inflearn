#pragma once

//헤더파일을 여러번 include하더라도, 구조체, 변수 같은 것들을
//한 번만 정의하는 효과를 보이도록 하는 구문

//선언부
//헤더파일의 목적은 함수 선언목적이다.
void Test_1();
void Test_2();

struct StatInfo {
	int hp;
	int attack;
	int defence;
};

/*
#ifndef A
#define A
#endif

만약 A가 define되지 않았다면, A를 define하고
endif까지의 구문을 실행한다.

그러면 이제 A가 define되어있으므로,
이 헤더파일을 여러번 포함하더라도, 한 번만 포함하는 효과를 갖게 된다.

#pragma once와 같은 효과를 보기위해 사용한다.
#pragma once는 vc컴파일러에서 제공하는 것이다
*/