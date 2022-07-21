#include <string>
#include <vector>
#include <math.h>
//#include <iostream>

using namespace std;

bool solution(int x) {
	bool answer = false;
	int temp = x;
	int sum = 0;

	do
	{
		sum += static_cast<int>(remainder(temp, 10));
		temp = temp / 10;
	} while (temp != 0);

	if (sum == 0)
		answer == false;
	else if (x % sum == 0)
		answer = true;

	return answer;
}

int main()
{
	bool res = solution(345);
	
	return 0;
}