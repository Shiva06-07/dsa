#include <bits/stdc++.h>
using namespace std;

/*Fixed size window example:
 * Function: maxSumSubarray
 * -----------------------
 * Finds the maximum sum of a subarray of size k
 * using the Sliding Window technique.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
int maxSumSubarray(const vector<int> &arr, int k)
{
  int n = arr.size();

  if (k > n || k <= 0)
  {
    return -1; // invalid case
  }

  int windowSum = 0;

  // Calculate sum of first window
  for (int i = 0; i < k; i++)
  {
    windowSum += arr[i];
  }

  int maxSum = windowSum;

  // Slide the window
  for (int i = k; i < n; i++)
  {
    windowSum += arr[i];     // add next element
    windowSum -= arr[i - k]; // remove previous element

    maxSum = max(maxSum, windowSum);
  }

  return maxSum;
}

int main()
{
  int n, k;
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

  cout << "Enter the size of the subarray: ";
  cin >> k;

  int result = maxSumSubarray(arr, k);

  if (result == -1)
  {
    cout << "Invalid subarray size!" << endl;
  }
  else
  {
    cout << "The maximum sum is: " << result << endl;
  }

  return 0;
}
