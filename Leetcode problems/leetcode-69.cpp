#include <iostream>

/*
 * LeetCode 69 - Sqrt(x)
 *
 * Returns the integer square root of x.
 * The result is truncated (floor value).
 *
 * Binary Search on Answer
 *
 * Time Complexity: O(log x)
 * Space Complexity: O(1)
 */

int mySqrt(int x)
{
  if (x <= 1)
    return x;

  long long low = 1;
  long long high = x;
  long long ans = 0;

  while (low <= high)
  {
    long long mid = low + (high - low) / 2;

    if (mid * mid == x)
    {
      return mid;
    }
    else if (mid * mid < x)
    {
      ans = mid; // possible answer
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  return ans;
}

int main()
{
  int x = 8;

  int result = mySqrt(x);

  std::cout << "Square root: " << result << std::endl;

  return 0;
}