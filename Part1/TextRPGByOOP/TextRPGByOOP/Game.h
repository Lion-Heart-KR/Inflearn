#pragma once //헤더파일을 여러번 include 하지 않도록...

//전방선언
//아직 Player class가 완성되진 않았는데, 나중에 완성될꺼니까 쓰게해줘~
//include 하지 않더라도 사용가능하다.
class Player;
class Field;

//Is-A관계
//Has-A관계 : Game - Player

class Game
{
public:
	Game();
	~Game();

	void Init();
	void Update();
	void CreatePlayer();

private:
	//Player _player; (X) 
	//Player는 자식 클래스들보다 더 작기 때문에, 자식 클래스 변수의 모든 정보를 담을 수 없다.
	//Player.h와 Game.h를 서로 include 할 때 순환문제가 발생한다.
	//근데이건,,, 아래의 경우도 마찬가진데?
	//전방선언을 해서 해결을 한다.

	Player* _player; 
	//4~8 byte 고정크기
	Field* _field;
};
