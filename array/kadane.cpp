#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/*
 * Kadane's Algorithm
 * Finds the maximum sum of a contiguous subarray
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
int maxSubarraySum(const vector<int> &arr)
{
  int currSum = 0;
  int maxSum = INT_MIN;

  for (int x : arr)
  {
    currSum += x;
    maxSum = max(maxSum, currSum);

    // Reset if current sum becomes negative
    if (currSum < 0)
      currSum = 0;
  }
  return maxSum;
}

int main()
{
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int result = maxSubarraySum(arr);
  cout << "Maximum subarray sum is: " << result << endl;

  return 0;
}
