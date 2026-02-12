#include <bits/stdc++.h>
using namespace std;

/*
 * Program: Reverse a String in C++
 *
 * Demonstrates two approaches:
 * 1. Two Pointers Technique
 * 2. STL reverse() function
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int main()
{

  // -------- Method 1: Two Pointers --------
  string str = "Hello this is shiva";
  cout << "Original string: " << str << endl;

  int left = 0;
  int right = str.length() - 1;

  while (left < right)
  {
    swap(str[left], str[right]);
    left++;
    right--;
  }

  cout << "Reversed string (Two Pointers): " << str << endl
       << endl;

  // -------- Method 2: STL reverse() --------
  string str1 = "Reversing a string using STL reverse function";
  cout << "Original string: " << str1 << endl;

  reverse(str1.begin(), str1.end());

  cout << "Reversed string (STL): " << str1 << endl;

  return 0;
}
