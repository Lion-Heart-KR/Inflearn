#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
	string answer = "";

	for (auto i = 0; i < phone_number.size(); i++)
	{
		if (i < phone_number.size() - 4)
			answer.push_back('*');
		else
			answer.push_back(phone_number[i]);
	}


	return answer;
}

int main()
{
	string phone_number = "01048187685";
	string res = solution(phone_number);
	cout << res << endl;

	return 0;
}