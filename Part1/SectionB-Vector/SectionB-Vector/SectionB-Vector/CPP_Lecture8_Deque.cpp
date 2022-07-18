//#include <iostream>
//#include <vector>
//#include <deque>
//using namespace std;
//
//int main()
//{
//    //시퀀스 컨테이너
//    // 데이터가 삽입 순서대로 나열되는 형태
//    // [1]vector : 동적 배열
//    // [2]list      : 이중 연결 리스트
//    // [3]deque : double-ended queue
//    // -- 공간이 모자랄 때, 리스트처럼 독립된 공간을 새로 만들어준다
//    // -- 하지만, 독립적인 공간은 배열처럼 연속된 공간이다.
//    // 
//    
//    //선언
//    deque<int> dq;
//
//    //삽입
//    dq.push_back(1);
//    dq.push_front(2);
//
//    ////임의 접근
//    cout << dq[1] << endl;
//
//    //deque도 벡터처럼 배열 기반으로 동작하지만, 메모리 할당 정책이 다르다.
//    //vector [               ]  추가1  ]    추가2     ]      추가3      ]
//    //deque [               ] [  추가1  ]  [  추가2  ] ...
//
//    //vector vs deque
//    vector<int> v(3, 1);
//    deque<int> d(3, 1);
//
//    v.push_back(2);
//    v.push_back(2);
//    d.push_back(2);
//    d.push_back(2);
//    d.push_front(3);
//    d.push_front(3);
//
//    // - deque의 동작 원리
//    // - 중간 삽입/삭제 -> 벡터와 마찬가지로, 중간에 빈 칸이 있으면 안된다. 복사비용이 발생한다.(BAD/BAD)
//    // -- 애초에 double ended queue인데, 중간 삽입/삭제가 좋을리 없다.
//    // - 처음/끝 삽입/삭제 (good/good)
//    // - 임의 접근 -> Good
//    // - 임의 접근은 몇 번째 블록인지 알아내고, 그 블록의 몇 번째 칸에 있는지 알아내는 방식으로 동작한다.
//    // - 인덱스를 넘겨주면, 인덱스를 바탕으로 몇 번째 블록인지 계산, 인덱스를 데크 사이즈로 나눈 나머지를 각 블록에서의 위치로 계산
//    // - 그거를... map이라는 테이블? 으로 관리함. map을 알아야한다...
//
//    cout << "--------------------------------------" << endl;
//
//    deque<int> dq1;
//
//    for (int i = 0; i < 5; i++)
//        dq1.push_back(i);
//
//    dq1.pop_front();
//    dq1.pop_back();
//    
//    for (deque<int>::reverse_iterator it = dq1.rbegin(); it!=dq1.rend(); ++it)
//        cout << *it << endl;
//}