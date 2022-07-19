//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//
///// <summary>
///// delete(삭제된 함수) 
///// -- 특정기능을 수행할 수 없도록 할 수 있다.(복사를 못하게 한다거나...)
///// </summary>
///// <returns></returns>
//
//class Knight
//{
//public:
//
//public:
//	//정의되지 않은, 비공개 함수를 private영역에 만든다.
//	//하지만, private로 정의하게 되면, 외부에서는 호출할 수 없지만, 내부에서는 사용가능하다.
//	//내부에서 조차 사용할 수 없게 만들려면? -> delete를 사용한다.(delete는 public에 선언하는것이 관행이다.)
//	void operator=(const Knight& k) = delete;
//	friend class Admin; //Admin이라는 클래스에서는 Knight의 private 멤버에 접근가능하다.
//
//private:
//	int _hp = 100;
//};
//
//class Admin
//{
//public:
//	void CopyKnight(const Knight& k)
//	{
//		Knight k1;
//		k1 = k;
//	}
//
//};
//
//int main()
//{
//	Knight k1;
//	Knight k2;
//
//	//복사연산자를 막고싶다면??
//	//k1 = k2;
//
//	//private는 우회하여 어찌어찌 사용할 수 있기도 하다.
//	Admin admin;
//	admin.CopyKnight(k1);
//
//	//함수의 구현부를 만들지 않고, 시그니처만 선언한 상황에서 함수를 사용하려고 하면
//	//LINK에러가 발생한다.
//	//하지만, 사용하지 않으면, 에러가 발생하지 않는다. -> 언제 에러가 생길지 알 수 없다.
//
//
//
//	return 0;
//}