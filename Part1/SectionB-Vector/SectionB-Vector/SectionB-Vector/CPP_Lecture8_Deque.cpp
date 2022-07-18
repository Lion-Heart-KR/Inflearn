//#include <iostream>
//#include <vector>
//#include <deque>
//using namespace std;
//
//int main()
//{
//    //������ �����̳�
//    // �����Ͱ� ���� ������� �����Ǵ� ����
//    // [1]vector : ���� �迭
//    // [2]list      : ���� ���� ����Ʈ
//    // [3]deque : double-ended queue
//    // -- ������ ���ڶ� ��, ����Ʈó�� ������ ������ ���� ������ش�
//    // -- ������, �������� ������ �迭ó�� ���ӵ� �����̴�.
//    // 
//    
//    //����
//    deque<int> dq;
//
//    //����
//    dq.push_back(1);
//    dq.push_front(2);
//
//    ////���� ����
//    cout << dq[1] << endl;
//
//    //deque�� ����ó�� �迭 ������� ����������, �޸� �Ҵ� ��å�� �ٸ���.
//    //vector [               ]  �߰�1  ]    �߰�2     ]      �߰�3      ]
//    //deque [               ] [  �߰�1  ]  [  �߰�2  ] ...
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
//    // - deque�� ���� ����
//    // - �߰� ����/���� -> ���Ϳ� ����������, �߰��� �� ĭ�� ������ �ȵȴ�. �������� �߻��Ѵ�.(BAD/BAD)
//    // -- ���ʿ� double ended queue�ε�, �߰� ����/������ ������ ����.
//    // - ó��/�� ����/���� (good/good)
//    // - ���� ���� -> Good
//    // - ���� ������ �� ��° �������� �˾Ƴ���, �� ������ �� ��° ĭ�� �ִ��� �˾Ƴ��� ������� �����Ѵ�.
//    // - �ε����� �Ѱ��ָ�, �ε����� �������� �� ��° �������� ���, �ε����� ��ũ ������� ���� �������� �� ���Ͽ����� ��ġ�� ���
//    // - �װŸ�... map�̶�� ���̺�? ���� ������. map�� �˾ƾ��Ѵ�...
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