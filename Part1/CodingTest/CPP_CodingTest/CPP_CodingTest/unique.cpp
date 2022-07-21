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
	
	//������ ���ؼ� ������ ���ش�.
	sort(v.begin(), v.end());
	printVector(v);

	auto it = v.erase(unique(v.begin(), v.end()), v.end());
	//unique�� ��ȯ ���� ������ ������ ���� �ּҰ� �ȴ�.
	//�״ϱ�,,, �ߺ��� ������ �ڿ� ��Ƴ��µ�, �� ������ �����ּҰ� �ȴ�.
	//����, unique�� ��ȯ������, v.end()���� �����ϸ� �ߺ��� ���� ������ �� �ְ� �Ǵ� ���̴�.
	printVector(v);

	cout << v.size() << endl;	

	return 0;
}