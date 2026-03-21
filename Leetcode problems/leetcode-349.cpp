#include <iostream>
#include <vector>
#include <unordered_set>

/*
 * LeetCode 349 - Intersection of Two Arrays
 *
 * Returns the unique intersection of two arrays.
 *
 * Approach: Hash Set
 *
 * Time Complexity: O(n + m)
 * Space Complexity: O(n)
 */

std::vector<int> intersection(const std::vector<int> &nums1, const std::vector<int> &nums2)
{

  std::unordered_set<int> set1(nums1.begin(), nums1.end());
  std::vector<int> result;

  // Iterate over nums2 and check presence in set1
  for (int num : nums2)
  {
    if (set1.count(num))
    {
      result.push_back(num);
      set1.erase(num); // ensures uniqueness in result
    }
  }

  return result;
}

int main()
{
  std::vector<int> nums1 = {1, 2, 2, 1};
  std::vector<int> nums2 = {2, 2};

  std::vector<int> result = intersection(nums1, nums2);

  std::cout << "Intersection: ";
  for (int x : result)
  {
    std::cout << x << " ";
  }

  return 0;
}