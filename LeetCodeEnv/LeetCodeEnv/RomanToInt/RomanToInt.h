#pragma once
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int RomanToInt(string s)
{
	unordered_map<char, int> numsMap{ {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
	int num = 0;
	for(int i = 0; i < s.length(); i++)
	{
		int currentNum = numsMap[s[i]];

		if ((i + 1) < s.length())
		{
			if (numsMap[s[i]] < numsMap[s[i + 1]])
			{
				num += numsMap[s[i + 1]] - currentNum;
				i++;
			}

			else
			{
				num += currentNum;
			}
		}
		else
		{
			num += currentNum;
		}
	}
	return num;
}