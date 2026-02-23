#include <iostream>
#include <string>

/*
 * LeetCode 13 - Roman to Integer
 *
 * Converts a Roman numeral string into an integer.
 * Handles subtraction cases like IV, IX, XL, XC, CD, CM.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int romanToInt(const std::string &s)
{
  int result = 0;

  for (int i = 0; i < s.size(); i++)
  {

    switch (s[i])
    {

    case 'I':
      if (i + 1 < s.size() && s[i + 1] == 'V')
      {
        result += 4;
        i++;
      }
      else if (i + 1 < s.size() && s[i + 1] == 'X')
      {
        result += 9;
        i++;
      }
      else
        result += 1;
      break;

    case 'V':
      result += 5;
      break;

    case 'X':
      if (i + 1 < s.size() && s[i + 1] == 'L')
      {
        result += 40;
        i++;
      }
      else if (i + 1 < s.size() && s[i + 1] == 'C')
      {
        result += 90;
        i++;
      }
      else
        result += 10;
      break;

    case 'L':
      result += 50;
      break;

    case 'C':
      if (i + 1 < s.size() && s[i + 1] == 'D')
      {
        result += 400;
        i++;
      }
      else if (i + 1 < s.size() && s[i + 1] == 'M')
      {
        result += 900;
        i++;
      }
      else
        result += 100;
      break;

    case 'D':
      result += 500;
      break;

    case 'M':
      result += 1000;
      break;
    }
  }

  return result;
}

int main()
{
  std::string s = "MCMXCIV";

  int value = romanToInt(s);

  std::cout << "Integer value: " << value << std::endl;

  return 0;
}