//#include <iostream>
//#include <map>
//using namespace std;
//
///// <summary>
///// ※ map
///// [1] map이 왜 필요한가?
///// -- vector를 이용한다고 가정해보자. 벡터를 이용하여 접속중인 플레이어 10만명을 관리할 경우, 10만명은 각각 Id로 1부터 10만 까지의 값을 갖게 된다
///// -- 하지만 이 10만명은 항상 동시에 접속해서 동시에 종료하는 것이 아니다. 그러다 보면, 어느 순간에는 플레이어가 6만명이 있을 때가 있을 것이다.
///// -- 근데, 이 6만명은 뒤에서 4만명이 빠진 6만 명이 아니고, Id가 1이거나, 123이거나, 1004이거나 등등 중간 중간 띄엄띄엄 빠진 6만명이다.
///// -- 하지만, 벡터의 특성 때문에, 6만명은 연속된 공간을 자리잡고 있게 된다.
///// 
///// -- 위의 상황에서 플레이어 Id가 10000인 사람을 찾기 위해서는 어떻게 해야할까?
///// -- v[10000]을 하면 되나? 그렇지 않다. iterator 혹은 for문을 통해서, vector의 size()만큼 순회하며, Id를 각각 대조해봐야한다.
///// -- 한 번의 작업이라면, 눈 딱 감고 하면 되지만, 이런 작업이 자주 필요할 경우 성능의 하락을 가져오게 된다.
///// 
///// -- 이렇듯 vector, list와 같은 선형 자료구조는 원하는 조건의 데이터를 찾는데에 오래걸린다는 치명적인 단점이 있다.
///// 
///// [2] map의 특성
///// -- 균형 이진 트리(AVL)를 이용한 컨테이너이다.
///// -- 노드 기반 
///// -- (키, 값)쌍으로 이루어져 있다. 특정 키 값으로 데이터를 빠르게 찾을 수 있다.
///// </summary>
///// <returns></returns>
//
//class Player
//{
//public:
//    Player() : _playerId(0) { }
//    Player(int playerId) : _playerId(playerId) { }
//
//public:
//    int _playerId;
//};
//
//int main()
//{
//    srand(static_cast<unsigned int>(time(0)));
//
//    //AVL트리의 Node는 대충 이런 느낌
//    class Node
//    {
//    public:
//        Node* _left;
//        Node* _right;
//        //data
//        pair<int, Player*> _data;
//        /*int _key;
//        Player* _value;*/
//    };
//
//    //Key, Value형태의 자료구조
//    map<int, int> m;
//
//    //같은 키 값으로 2번 연속 insert
//    //키는 map에서 유일해야한다.
//    pair<map<int, int>::iterator, bool> ok;
//    ok = m.insert(make_pair(1, 100)); //성공
//    ok = m.insert(make_pair(1, 200)); //무시. 값은 여전히 100이다. 값을 변경하고 싶으면 키 값으로 접근해서 수정해야한다.
//    ok.first; // iterator
//    ok.second;// 성공여부 bool값
//
//    //키 값으로 접근해서 값을 바꾸는 방법은?
//    m[1] = 200;
//    
//    //10만명 입장
//    for (int i = 0; i < 100000; i++)
//    {
//        //pair의 자료형은 map의 자료형과 일치해야함.
//        m.insert(pair<int, int>(i, i*100));
//    }
//
//    //5만명 퇴장
//    //for (int i = 0; i < 50000; i++)
//    //{
//    //    int randomValue = rand() % 50000;
//
//    //    //Erase by key.(다양한 버전의 erase가 존재한다)
//    //    m.erase(randomValue);
//    //}
//
//    unsigned int count = 0;
//
//    count = m.erase(10000); //성공시 1
//    count = m.erase(10000); //실패시 0
//
//    //Q) ID가 15000인 Player를 찾고싶다.
//    //A)매우 빠르게 찾을 수 있다.
//    map<int, int>::iterator  findIt = m.find(10000);
//
//    //찾은 경우
//    if (findIt != m.end())
//    {
//        cout << "값을 찾음 " << endl;
//    }
//    //못 찾은 경우 findIt == m.end()
//    else
//    {
//        cout << "못찾음" << endl;
//    }
//
//    //map 순회
//    for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
//    {
//        int key = (*it).first;
//        int value = (*it).second;
//
//        cout << key << " " << value << endl;
//    }
//
//    //없으면 추가, 있으면 수정하기 ver1
//	map<int, int>::iterator  findIt = m.find(10000);
//	//찾은 경우 값을 수정
//	if (findIt != m.end())
//	{
//        findIt->second = 20000;
//	}
//    //못 찾은 경우 추가
//	else
//	{
//        m.insert(make_pair(10000, 1000000));
//	}
//
//    //없으면 추가, 있으면 수정하기 ver2
//
//    //없으면 추가하고, 값을 500으로 셋팅, 있으면 key가 5인곳의 value를 500으로 수정
//    m[5] = 500;
//	//[] 연산자 사용시 주의사항
//	// 대입을 하지 않더라도, (Key/Value)형태의 데이터가 추가된다.
//    // 단순히 m[5]이렇게만 써놓고 특정 값을 할당하지 않더라도, m[5]에는 값이 0으로 할당 됨
//    // 데이터의 존재여부만 확인하기 위해서는 find를 사용하면 된다.
//
//	m.clear();
//	for (int i = 0; i < 10; i++)
//	{
//		cout << m[i] << endl;
//	}
//
//    // 넣기       (insert, [])
//    // 빼기       (erase)
//    // 찾고       (find, [])
//    // 반복자   (mp::iterator) (*it)는 pair<key, value>&를 뱉어준다.
//    //
//
//    return 0;
//}