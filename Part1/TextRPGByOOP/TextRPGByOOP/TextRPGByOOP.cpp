#include <iostream>
#include "Game.h"
//cpp파일에서는 전방선언하지않고, 헤더파일을 include 한다.
//큰 따옴표와 꺽쇠의 차이
// - 큰 따옴표 : 프로그래머가 만들어서 추가한 헤더파일
// - 꺽쇠 : CPP공식 라이브러리 헤더파일

using namespace std;


// 오늘의 주제 : TextRPG #4


int main()
{
    srand((unsigned int)time(nullptr));

    Game game;
    game.Init();

    while (true)
    {
        game.Update();
    }

    return 0;
}