#include <iostream>
#include <vector>
#include <unordered_set>

/*
 * LeetCode 217 - Contains Duplicate
 *
 * Given an integer array nums, return true if any value appears
 * at least twice in the array, and return false if every element is distinct.
 *
 * Approach: Hash Set
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

bool containsDuplicate(const std::vector<int> &nums)
{

  std::unordered_set<int> seen(nums.begin(), nums.end());

  return seen.size() != nums.size();
}

int main()
{
  std::vector<int> nums = {1, 2, 3, 1};

  bool result = containsDuplicate(nums);

  if (result)
  {
    std::cout << "Contains duplicate" << std::endl;
  }
  else
  {
    std::cout << "No duplicates found" << std::endl;
  }

  return 0;
}