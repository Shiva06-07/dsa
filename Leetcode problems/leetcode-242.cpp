#include <iostream>
#include <string>
#include <unordered_map>

/*
 * LeetCode 242 - Valid Anagram
 *
 * Given two strings s and t, return true if t is an anagram of s.
 *
 * Approach: Frequency Map
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1) (since max 26 chars for lowercase)
 */

bool isAnagram(const std::string &s, const std::string &t)
{

  // Optimization: if lengths differ → cannot be anagram
  if (s.size() != t.size())
  {
    return false;
  }

  std::unordered_map<char, int> freq;

  // Count characters in s
  for (char c : s)
  {
    freq[c]++;
  }

  // Subtract using t
  for (char c : t)
  {
    freq[c]--;
  }

  // Check all counts are zero
  for (const auto &pair : freq)
  {
    if (pair.second != 0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  std::string s = "anagram";
  std::string t = "nagaram";

  if (isAnagram(s, t))
  {
    std::cout << "Valid Anagram" << std::endl;
  }
  else
  {
    std::cout << "Not an Anagram" << std::endl;
  }

  return 0;
}