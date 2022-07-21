#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
	vector<int> answer;
	int matchCount = 0;
	int zeroCount = static_cast<int>(count(lottos.begin(), lottos.end(), 0));

	//��ȣ�� ����
	sort(lottos.begin(), lottos.end());
	sort(win_nums.begin(), win_nums.end());

	//���ĵ� ��ȣ���� ������� ��ġ�ϴ� ������ count
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

	//1~5���� ���ᰳ��+��� = 7�̴�.
	int minRank = 7 - matchCount;
	int maxRank = 7 - (matchCount + zeroCount);

	//�ٵ� 7���� ����.
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