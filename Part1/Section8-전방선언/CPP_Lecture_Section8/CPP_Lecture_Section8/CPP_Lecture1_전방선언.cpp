#include <iostream>
#include "Player.h"
using namespace std;

/// <summary>
/// 전방선언
/// </summary>
/// <returns></returns>

int main()
{
	//player는 몇 바이트인지 알아야 스택이든 힙이든 할당이 가능하다.
	//int는 2개 = 2*4 = 8byte
	Player p1; //지역 변수
	Player* p2 = new Player; //동적할당

	return 0;
}