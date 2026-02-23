#include <iostream>
#include <vector>

/*
 * LeetCode 35 - Search Insert Position
 *
 * Given a sorted array and a target value,
 * return the index if found. If not, return
 * the index where it would be inserted.
 *
 * Binary Search
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */

int searchInsert(const std::vector<int> &nums, int target)
{
  int low = 0;
  int high = nums.size() - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (nums[mid] == target)
    {
      return mid;
    }
    else if (nums[mid] < target)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  // Position where target should be inserted
  return low;
}

int main()
{
  std::vector<int> nums = {1, 3, 5, 6};
  int target = 5;

  int result = searchInsert(nums, target);

  std::cout << "Index: " << result << std::endl;

  return 0;
}