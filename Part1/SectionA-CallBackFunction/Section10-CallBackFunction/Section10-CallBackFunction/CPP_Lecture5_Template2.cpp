//#include <iostream>
//using namespace std;
//
///// <summary>
///// 클래스 템플릿
///// </summary>
///// <returns></returns>
//
////클래스 안에서 사용할 자료형을 template으로 정의
//template<typename T, int SIZE=10>
//class RandomBox
//{
//public:
//    T GetRandomData()
//    {
//        return _data[rand() % SIZE];
//    }
//public:
//    T _data[SIZE];
//};
//
////템플릿 특수화
////여기서는 SIZE의 기본값을 왜 설정할 수 없지?
////일반적인 Template과 동일한 기본값을 갖는 것으로 보인다.
//
//template<int SIZE>
//class RandomBox<double, SIZE>
//{
//public:
//    double GetRandomData()
//    {
//        cout << "I'm Double" << endl;
//        return _data[rand() % SIZE];
//    }
//public:
//    double _data[SIZE];
//};
//
//int main()
//{
//    srand(static_cast<unsigned int>(time(nullptr)));
//
//    //SIZE는 기본값이 있어서 정의해주지 않아도 되네
//    RandomBox<int> rb1;
//    for (int i = 0; i < 10; i++)
//    {
//        rb1._data[i] = i;
//    }
//    cout << rb1.GetRandomData() << endl;
//
//    RandomBox<float> rb2;
//    for (int i = 0; i < 10; i++)
//    {
//        rb2._data[i] = i + 0.5f;
//    }
//    cout << rb2.GetRandomData() << endl;
//
//    RandomBox<double> rb3;
//    for (int i = 0; i < 10; i++)
//    {
//        rb3._data[i] = i + 0.5;
//    }
//    cout << rb3.GetRandomData() << endl;
//
//    //이 경우 템플릿 자료형과 SIZE크기가 모두 동일해야지 대입 연산이 가능하다.
//}