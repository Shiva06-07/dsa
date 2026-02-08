#include <bits/stdc++.h>
using namespace std;

/*
 * Function: minSubArrayLen
 * -----------------------
 * Finds the minimum length of a contiguous subarray
 * whose sum is greater than or equal to target.
 *
 * Sliding Window (Variable Size)
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
int minSubArrayLen(const vector<int> &arr, int target)
{
  int n = arr.size();
  int sum = 0;
  int left = 0;
  int minLen = INT_MAX;

  for (int right = 0; right < n; right++)
  {
    sum += arr[right];

    // Shrink window while condition is satisfied
    while (sum >= target)
    {
      minLen = min(minLen, right - left + 1);
      sum -= arr[left];
      left++;
    }
  }

  return (minLen == INT_MAX) ? 0 : minLen;
}

int main()
{
  int n, target;
  vector<int> arr;

  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    int value;
    cin >> value;
    arr.push_back(value);
  }

  cout << "Enter the target sum: ";
  cin >> target;

  int result = minSubArrayLen(arr, target);

  if (result == 0)
  {
    cout << "Subarray does not exist!" << endl;
  }
  else
  {
    cout << "The minimum subarray size is: " << result << endl;
  }

  return 0;
}
