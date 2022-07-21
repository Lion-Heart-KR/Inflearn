#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <sstream>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) 
{
	vector<int> answer;
	map<string, string> m;
	map<string, int> m_temp;
	
	for (auto it = records.begin(); it != records.end(); ++it)
	{
		string InOut;
		string time;
		string carNumber;
		string buffer;

		istringstream iss(*it);

		getline(iss, buffer, ' ');
		time = buffer;
		getline(iss, buffer, ' ');
		carNumber = buffer;
		getline(iss, buffer, ' ');
		InOut = buffer;

		if (InOut.compare("IN") == 0)
			m[carNumber] = time;
		else // out
		{
			istringstream intimestr(m[carNumber]);
			istringstream outtimestr(time);

			string inHour;
			string inMinute;
			string outHour;
			string outMinute;

			getline(intimestr, inHour, ':');
			getline(intimestr, inMinute, ':');
			getline(outtimestr, outHour, ':');
			getline(outtimestr, outMinute, ':');

			int inHour_i = stoi(inHour);
			int inMinute_i = stoi(inMinute);
			int outHour_i = stoi(outHour);
			int outMinute_i = stoi(outMinute);


			int wholeTime;
			if (outMinute_i < inMinute_i)
			{
				wholeTime = (outHour_i - inHour_i - 1) * 60 + (60 + outMinute_i - inMinute_i);
			}
			else
			{
				wholeTime = (outHour_i - inHour_i) * 60 + (outMinute_i - inMinute_i);
			}

			m_temp[carNumber] += wholeTime;
		}
	}
	return answer;
}

int main()
{
	vector<string> records({ "05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT" });
	solution(records);

	return 0;
}