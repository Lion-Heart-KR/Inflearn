//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
//class knight
//{
//public:
//public:
//	int _hp;
//	 
//};
//
///// <summary>
///// ※ auto 
///// -- 자료형을 컴파일러가 알아서 적절히 정해준다.
///// </summary>
///// <returns></returns>
//
//int main()
//{
//	/*int a = 3;
//	float b = 3.14f;
//	double c = 1.23;
//	knight k = knight();
//	const char* a = "lihon";*/
//
//	//auto는 일종의 조커카드다. template처럼...
//	//형식 연역(type deduction)
//	// -> 컴파일러에게 알아서 말이 되게 잘 맞춰달라고 하는 것.
//	// 추론 규칙은 생각보다 복잡해질 수 있다.
//	//
//	auto a = 3;
//	auto b = 3.14f;
//	auto c = 1.23;
//	auto k = knight();
//	auto d = "lihon";
//	auto f = &k;
//	const auto test1 = b; //float을 const float에 넣어주는 것은 문제가 없다.
//	auto* test2 = d; //뭐 이것도 된다...
//	//auto* test3 = a; //이건 안됨 a는 정수형이므로,,, 포인터 변수에 넣을 수 없다. 상식선에서 ㅇㅇ
//
//	// 주의사항!
//	// 기본 auto는 const, &를 무시한다.
//	int& ref = a;
//	const int cst = a;
//
//	auto test3 = ref; //참조타입이 아니라 그냥 정수형이 된다.
//	auto test4 = cst; //const type이 아니라 그냥 정수형이 된다.
//
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//
//	for (auto i = 0; i < v.size(); i++)
//	{
//		//이건 안됨
//		auto item2 = v[i];
//
//		//이러면 됨
//		auto& item = v[i];
//
//		item = 100;
//	}
//
//	// ??? : 이제 기존의 타입은 잊어버리고 auto만 사용할래요 ㅎㅎ
//	// 호~ 불호가 갈리긴 하는데 추천하는 방법은 아니다.
//	// [1] 타이핑이 길어지는 경우는 auto를 쓰는 것이 편하긴 하다.(ex. pair<map<int, int>::iterator, map<int, int>::iterator> 이런거...
//	// [2] 가독성 측면에서는 자료형을 명시해주는 것이 좋다.(특히 일반 자료형)
//	
//	//auto가 나은 경우1
//	map<int, int> m;
//	pair<map<int, int>::iterator, bool> ok = m.insert(make_pair(1, 100)); //이런건 auto가 낫다.
//	auto ok = m.insert(make_pair(1, 100));
//
//	//auto가 나은 경우2
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it);
//	for (auto it = m.begin(); it != m.end(); ++it);
//
//	 
//	return 0;
//}