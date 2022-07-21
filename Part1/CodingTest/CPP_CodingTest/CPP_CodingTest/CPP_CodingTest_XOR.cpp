#include <string>
#include <vector>
#include <bitset>
#include <iostream>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
	vector<long long> answer;
	
	for (auto i = 0; i<numbers.size(); i++)
	{
		long long item = numbers[i];
		long long temp = item;
		bool flag = true;

		while (1)
		{
			//item보다 큰 temp를 item과 xor한다.
			temp++;
			long long res_xor = temp ^ item;

			//bitset 어케씀?
			//string s = to_string(res_xor);
			bitset<64> bit(res_xor);
			if (bit.count() == 1 || bit.count() == 2)
				break;
		}
		answer.push_back(temp);
	}

	return answer;
}

int main()
{
	auto answer = solution(vector<long long>({ 2, 7 }));
	
	for (auto it = answer.begin(); it != answer.end(); ++it)
	{
		cout << *it << endl;
	}

	return 0;
}