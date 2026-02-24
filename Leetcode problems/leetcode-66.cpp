#include <iostream>
#include <vector>

/*
 * LeetCode 66 - Plus One
 *
 * Given a non-empty array of digits representing a non-negative integer,
 * increment the integer by one.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1) (except possible insertion)
 */

std::vector<int> plusOne(std::vector<int> &digits)
{

  for (int right = digits.size() - 1; right >= 0; right--)
  {

    // If digit is not 9 → just add 1 and return
    if (digits[right] != 9)
    {
      digits[right] += 1;
      return digits;
    }

    // If digit is 9 → becomes 0 and carry moves left
    digits[right] = 0;
  }

  // If all digits were 9 → add 1 at beginning
  digits.insert(digits.begin(), 1);
  return digits;
}

int main()
{
  std::vector<int> digits = {9, 9, 9};

  std::vector<int> result = plusOne(digits);

  std::cout << "Result: ";
  for (int d : result)
  {
    std::cout << d << " ";
  }

  return 0;
}