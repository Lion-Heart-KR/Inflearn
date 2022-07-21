#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;


pair<string, string> split(string s)
{
	istringstream iss(s);
	string buffer;

	pair<string, string> result;
	
	getline(iss, buffer, ' ');
	result.first = buffer;
	getline(iss, buffer, ' ');
	result.second = buffer;

	return result;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<int> answer(id_list.size());
	vector<int> reportCount(id_list.size());
	map<string, int> m;
	int i = 0;
	for (auto it = id_list.begin(); it != id_list.end(); ++it, i++)
	{
		m.insert(make_pair(*it, i));
	}

	//for (auto it = m.begin(); it != m.end(); ++it)
	//{
	//	cout << "("<<it->first << "," << it->second << ")" << endl;
	//}
	vector<vector<bool>> reportTable(id_list.size(), vector<bool>(id_list.size(), false));

	for(auto it = report.begin(); it!=report.end(); ++it)
	{
		auto temp = split(*it);
		int firstIdx = m[temp.first];
		int secondIdx = m[temp.second];
		reportTable[firstIdx][secondIdx] = true;
	}

	for (auto i = 0; i < id_list.size(); i++)
	{
		for (auto j = 0; j < id_list.size(); j++)
		{
			if (reportTable[i][j] == true)
				reportCount[j]++;
		}
	}

	for (auto i = 0; i < id_list.size(); i++)
	{
		if (reportCount[i] >= k)
		{
			for (auto j = 0; j < id_list.size(); j++)
			{
				if (reportTable[j][i])
					answer[j]++;
			}
		}
	}


	return answer;
}

int main()
{
	vector<string> id_list({ "muzi", "frodo", "apeach", "neo" });
	vector<string> report({"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"});
	int k = 2;

	auto res = solution(id_list, report, k);
	for (auto it = res.begin(); it != res.end(); ++it)
		cout << *it << ", ";
	cout << endl;




}