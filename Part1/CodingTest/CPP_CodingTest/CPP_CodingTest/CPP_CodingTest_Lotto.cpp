#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
	vector<int> answer;
	int matchCount = 0;
	int zeroCount = static_cast<int>(count(lottos.begin(), lottos.end(), 0));

	//번호를 정렬
	sort(lottos.begin(), lottos.end());
	sort(win_nums.begin(), win_nums.end());

	//정렬된 번호들을 대상으로 일치하는 개수를 count
	for (int i = 0, j = 0; i < 6 && j < 6;)
	{
		if (lottos[i] == win_nums[j])
		{
			matchCount++;
			i++;
			j++;
		}
		else if (lottos[i] > win_nums[j])
			j++;
		else if (lottos[i] < win_nums[j])
			i++;
	}

	//1~5등은 맞춘개수+등수 = 7이다.
	int minRank = 7 - matchCount;
	int maxRank = 7 - (matchCount + zeroCount);

	//근데 7등은 없다.
	if (minRank == 7)
		minRank = 6;
	if (maxRank == 7)
		maxRank = 6;

	answer.push_back(maxRank);
	answer.push_back(minRank);

	return answer;
}

int main()
{
	vector<int> lottos1({44, 1, 0, 0, 31, 25});
	vector<int> lottos2({ 0, 0, 0, 0,0, 0 });
	vector<int> lottos3({ 31, 10, 1, 6,19, 45 });
	vector<int> win_nums({31, 10, 45, 1, 6, 19});
	vector<int> answer;

	answer = solution(lottos3, win_nums);
	
	cout << answer[0] << endl;
	cout << answer[1] << endl;

	return 0;
}