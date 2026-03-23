#include <iostream>
#include <vector>
#include <unordered_map>

/*
 * LeetCode 169 - Majority Element
 *
 * Finds the element that appears more than ⌊n/2⌋ times.
 *
 * Approach 1: Hash Map
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

int majorityElement(const std::vector<int> &nums)
{

  std::unordered_map<int, int> freq;

  for (int num : nums)
  {
    freq[num]++;
  }

  for (const auto &pair : freq)
  {
    if (pair.second > nums.size() / 2)
    {
      return pair.first;
    }
  }

  return -1; // should never happen (guaranteed majority exists)
}

int main()
{
  std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

  int result = majorityElement(nums);

  std::cout << "Majority Element: " << result << std::endl;

  return 0;
}