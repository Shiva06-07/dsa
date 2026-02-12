#include <bits/stdc++.h>
using namespace std;

/*
 * Program: Palindrome String Check
 *
 * Checks whether a given string is a palindrome
 * using the Two Pointers technique.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
bool isPalindrome(const string &str)
{
  int left = 0;
  int right = str.length() - 1;

  while (left < right)
  {
    if (str[left] != str[right])
    {
      return false;
    }
    left++;
    right--;
  }

  return true;
}

int main()
{
  string str;

  cout << "Enter the string: ";
  cin >> str; // reads without spaces

  if (isPalindrome(str))
  {
    cout << "The given string is a palindrome" << endl;
  }
  else
  {
    cout << "The given string is not a palindrome" << endl;
  }

  return 0;
}
