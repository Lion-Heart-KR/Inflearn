#pragma once //��������� ������ include ���� �ʵ���...

//���漱��
//���� Player class�� �ϼ����� �ʾҴµ�, ���߿� �ϼ��ɲ��ϱ� ��������~
//include ���� �ʴ��� ��밡���ϴ�.
class Player;
class Field;

//Is-A����
//Has-A���� : Game - Player

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
	//Player�� �ڽ� Ŭ�����麸�� �� �۱� ������, �ڽ� Ŭ���� ������ ��� ������ ���� �� ����.
	//Player.h�� Game.h�� ���� include �� �� ��ȯ������ �߻��Ѵ�.
	//�ٵ��̰�,,, �Ʒ��� ��쵵 ����������?
	//���漱���� �ؼ� �ذ��� �Ѵ�.

	Player* _player; 
	//4~8 byte ����ũ��
	Field* _field;
};
