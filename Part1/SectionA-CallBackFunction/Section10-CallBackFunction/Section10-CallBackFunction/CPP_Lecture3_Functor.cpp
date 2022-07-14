//#include <iostream>
//using namespace std;
//
///// <summary>
///// 함수 객체
///// -- 함수 포인터의 단점을 보완한 것이다.
///// 함수 포인터의 단점
///// [1] 시그니처가 맞지 않으면 사용할 수 없다.
///// [2] 상태를 가질 수 없다.
///// 
///// -- 함수 객체는 함수처럼 사용한다 -> 상태를 가질 수 있다.
///// [1] 생성과 처리시간을 독립적으로 관리할 수 있다.
///// [2] 연산자 오버로딩이 필요하다.
///// 
///// MMO에서 함수 객체를 사용하는 예시
///// [1] 클라이언트 <-> 서버
///// [2] 서버 : 클라이언트가 보내준 패킷을 받아서 처리
///// [3] 클라 : 내 캐릭터를 (5, 0)으로 이동시켜줘!
///// [4] 서버 : 현재 처리해야할 패킷이 많아
///// --- 함수 객체를 사용할 경우, 클라이언트의 요청을 객체로 생성하여 작업큐에 넣어놓고 차례대로 꺼내서 작업을 처리한다.
///// --- 작업의 생성과 처리시간을 독립시킬 수 있어서 효율적이다
///// 
///// </summary>
//
//class Functor
//{
//public:
//    void operator()()
//    {
//        cout << "Functor Test1 : " << endl;
//        cout << _value << endl;
//    }
//    bool operator()(int num)
//    {
//        cout << "Functor Test2 : " << endl;
//        cout << num << endl;
//        return true;
//    }
//
//private:
//    int _value = 12;
//};
//
//class MoveTask
//{
//public:
//    void operator()()
//    {
//        cout << "해당 좌표로 플레이어 이동" << endl;
//    }
//public:
//    int _playerId;
//    int _posX;
//    int _posY;
//};
//
//int main()
//{
//    Functor functor;
//    functor();
//    bool res = functor(4);
//    
//    //task생성
//    MoveTask mt;
//    mt._playerId = 10110101;
//    mt._posX = 5;
//    mt._posY = 1;
//
//    //다른 task 처리중...
//
//    //작업 처리
//    mt();
//
//
//    return 0;
//}