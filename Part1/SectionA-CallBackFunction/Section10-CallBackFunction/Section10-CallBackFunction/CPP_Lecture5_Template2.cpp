//#include <iostream>
//using namespace std;
//
///// <summary>
///// Ŭ���� ���ø�
///// </summary>
///// <returns></returns>
//
////Ŭ���� �ȿ��� ����� �ڷ����� template���� ����
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
////���ø� Ư��ȭ
////���⼭�� SIZE�� �⺻���� �� ������ �� ����?
////�Ϲ����� Template�� ������ �⺻���� ���� ������ ���δ�.
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
//    //SIZE�� �⺻���� �־ ���������� �ʾƵ� �ǳ�
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
//    //�� ��� ���ø� �ڷ����� SIZEũ�Ⱑ ��� �����ؾ��� ���� ������ �����ϴ�.
//}