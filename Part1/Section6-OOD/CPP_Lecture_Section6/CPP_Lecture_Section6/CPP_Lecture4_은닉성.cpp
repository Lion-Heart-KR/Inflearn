//#include <iostream>
//using namespace std;
//
//
/////※
///// <summary>
///// 주제 : 은닉성( = 캡슐화)
///// *개념
///// ▶▶ 몰라도 되는 것은 숨긴다!
///// 
///// *숨기는 이유
///// ▶▶ [1] 건드릴 경우 위험한 에러가 발생할 수 있는 경우
///// ▶▶ [2] 직접적인 접근이 아닌 다른 경로로 접근하길 원하는 경우
///// 
///// *접근 제한자의 종류
///// ▶▶ [1]public : 누구에게나 공개, 누구나 사용 가능
///// ▶▶ [2]protected : 나의 자식 클래스'들'이 사용가능
///// ▶▶ [3]private : 클래스 내부에서만 사용가능
///// 
///// ※상속접근 지정자※
///// ▶▶ 부모클래스로의 함수, 속성을 자식 클래스에게 상속할지, 하지 않을지 결정할 수 있다.
///// 
///// [1] public
///// ▶▶부모클래스의 설계 그대로 사용할 수 있다.
///// ▶▶일반적으로 public으로 상속접근 지정자를 사용한다.
///// [2] protected : 
///// ▶▶부모클래스에서 public으로 선언된 함수나 속성이더라도, 자식 클래스에서는 그 함수와 속성들이
///// ▶▶protected가 되어서, 자식클래스가 아닌 외부에서 멤버변수, 함수를 사용할 수 없다.
///// [3] private :
///// ▶▶ 자식 클래스까지만 멤버변수와 함수를 사용할 수 있고, 그 외에는 사용할 수 없다.
///// ▶▶ default값이다. 지정해주지 않으면, private 상속접근 지정자가 적용된다.
///// 
///// ※캡슐화
///// ▶▶ 연관된 데이터와 함수를 논리적으로 묶어놓은 것.
///// 
///// </summary>
///// <returns></returns>
///// 
//
//class Car 
//{
//public:
//	void MoveHandle() {}
//	void PushPedal() {}
//	void OpenDoor() {}
//
//	void TurnKey() {
//		//...
//		RunEngine();
//	}
//
////private으로 선언해버릴 경우, 자식 클래스에서도 아래의 함수들을 사용할 수 없게된다.
////하지만, 모든 자동차들이 RunEngine이라는 함수를 호출할 수 있기 때문에, 상속받은 자식클래스에서는
////사용할 수 있도록 protected로 선언하는것이 바람직하다.
//protected:
//	void DisassembleCar(){ }
//	void RunEngine() { }
//	void ConnectCircuit() { }
//
//public:
//	char handle;
//	char pedal;
//	char engine;
//	char door;
//	char circuit;
//};
//
//class SuperCar : protected Car
//{
//	void PushRemoteController()
//	{
//		//부모클래스에서 protected로 선언했기때문에 사용 가능
//		//private으로 선언했다면, 사용불가
//		RunEngine();
//	}
//};
//
//class TestCar : private SuperCar
//{
//	void Test() {
//		RunEngine();
//	}
//};
//
//class Berserker
//{
//public:
//	int GetHP() { return _hp; }
//
//	//캐릭터의 체력을 수정하는 함수이다.
//	//버서커 직업의 특성상 체력이 일정수준 이하로 내려가게되면, 더 강해지는데
//	//캐릭터 체력을 public으로 지정하여, 클래스 밖에서 수정할 수 있게 된다면,
//	//누구나 수정을 할 수 있게 되는데, 수정 후 체력이 일정수준 이하인지 확인하고, 버서커모드로
//	//전환시켜주는지 확신할 수 없기 때문에, 체력을 수정할 때 연관된 로직을 함께 적용하기 위해서 
//	//캡슐화시킨 방법이다.
//	void SetHP(int hp) { 
//		_hp = hp; 
//		if (_hp < 50)
//			SetBerserkerMode();
//	}
//private:
//	void SetBerserkerMode() {
//		cout << "버서커 모드 발동!" << endl;
//	}
//
//private:
//	int _hp = 100;
//};
//
//int main()
//{
//	Car car;
//	//car.ConnectCircuit(); //protected로 선언됐기 때문에, 자식클래스가 아닌 외부에서 호출 불가
//
//	return 0;
//}