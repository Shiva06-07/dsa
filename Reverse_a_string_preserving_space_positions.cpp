#include <bits/stdc++.h>
using namespace std;

/*
 * Function: reverseStringIgnoreSpaces
 * -----------------------------------
 * Reverses a string while ignoring spaces.
 * Spaces remain in their original positions.
 *
 * Example:
 * Input : "Hello World"
 * Output: "dlroW olleH"
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
void reverseStringIgnoreSpaces(string &s)
{
  int start = 0;
  int end = s.length() - 1;

  while (start < end)
  {
    if (s[start] == ' ')
    {
      start++;
    }
    else if (s[end] == ' ')
    {
      end--;
    }
    else
    {
      swap(s[start], s[end]);
      start++;
      end--;
    }
  }
}

int main()
{
  string s = "Hello! This is Shivakumar ";

  reverseStringIgnoreSpaces(s);

  cout << "The string is: " << s << endl;

  return 0;
}
