#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void printVector(vector<T> v)
{
	cout << "*********************************" << endl;
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << "*********************************" << endl;
}

int main()
{
	vector<string> v({ "python", "java", "html","java", "cpp", "ruby", "visual basic", "ruby"});
	
	//범위에 대해서 정렬을 해준다.
	sort(v.begin(), v.end());
	printVector(v);

	auto it = v.erase(unique(v.begin(), v.end()), v.end());
	//unique의 반환 값은 쓰레기 값들의 시작 주소가 된다.
	//그니까,,, 중복된 값들을 뒤에 모아놓는데, 그 값들의 시작주소가 된다.
	//따라서, unique의 반환값부터, v.end()까지 삭제하면 중복된 값을 삭제할 수 있게 되는 것이다.
	printVector(v);

	cout << v.size() << endl;	

	return 0;
}