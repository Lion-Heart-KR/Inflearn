#include<iostream>
//이렇게 namespace를 선언해주면,
//Test라는 class가 여러개 있을 때 구분할 수 있게 해준다.
//using namespace를 사용해주면, 이 파일에서는 Test는 항상 Lihon의 Test를 의미한다.
//using namespace를 사용하지 않으면, Lihon::Test와 같이 명시적으로 namespace를 알려줘야한다.

namespace Lihon
{
	class Test
	{

	};
}

using namespace Lihon;