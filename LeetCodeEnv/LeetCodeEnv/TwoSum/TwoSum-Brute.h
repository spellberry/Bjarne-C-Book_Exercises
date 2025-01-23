#pragma once
#include <vector>
#include <unordered_map>

class Brute
{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		std::unordered_map<int, int> numMap;
		size_t n = nums.size();

		// Build the hash table
		for (int i = 0; i < n; i++) {
			numMap[nums[i]] = i;
		}

		// Find the complement
		for (int i = 0; i < n; i++) {
			int complement = target - nums[i];
			if (numMap.count(complement) && numMap[complement] != i) {
				return { i, numMap[complement] };
			}
		}

		return {}; // No solution found
	}
};