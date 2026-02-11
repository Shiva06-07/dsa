#include <iostream>
#include <string>
int findCharacterIndex(const std::string &str, char ch)
{
  size_t idx = str.find(ch);
  if (idx != std::string::npos)
  {
    return idx;
  }
  else
  {
    return -1;
  }
}
int main()
{
  std::string s = "geeksforgeeks";
  char ch = 'k';

  int index = findCharacterIndex(s, ch);
  std::cout << index << std::endl;

  return 0;
}