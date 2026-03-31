#include <iostream>
#include <vector>

/*
 * LeetCode 167 - Two Sum II (Input Array is Sorted)
 *
 * Given a 1-indexed sorted array, find two numbers
 * such that they add up to a specific target.
 *
 * Return indices (1-based).
 *
 * Approach: Two Pointers
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

std::vector<int> twoSum(const std::vector<int> &numbers, int target)
{

  int left = 0;
  int right = numbers.size() - 1;

  while (left < right)
  {
    int sum = numbers[left] + numbers[right];

    if (sum == target)
    {
      return {left + 1, right + 1}; // 1-based indexing
    }
    else if (sum < target)
    {
      left++; // increase sum
    }
    else
    {
      right--; // decrease sum
    }
  }

  return {}; // no solution (though problem guarantees one)
}

int main()
{
  std::vector<int> numbers = {2, 7, 11, 15};
  int target = 9;

  std::vector<int> result = twoSum(numbers, target);

  std::cout << "Indices: ";
  for (int x : result)
  {
    std::cout << x << " ";
  }

  return 0;
}