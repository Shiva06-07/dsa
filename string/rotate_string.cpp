#include <bits/stdc++.h>
using namespace std;

/*
 * Program: Rotate a String by K Positions
 *
 * Uses the Reversal Algorithm:
 * 1. Reverse first k characters
 * 2. Reverse remaining characters
 * 3. Reverse the entire string
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int main()
{
  string str = "Hello World!";
  int k = 2;

  cout << "Original string: " << str << endl;

  int n = str.length();

  // Handle cases where k >= length of string
  k = k % n;

  // Step 1: Reverse first k characters
  reverse(str.begin(), str.begin() + k);

  // Step 2: Reverse remaining characters
  reverse(str.begin() + k, str.end());

  // Step 3: Reverse entire string
  reverse(str.begin(), str.end());

  cout << "String after rotation: " << str << endl;

  return 0;
}
