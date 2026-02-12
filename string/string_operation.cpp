#include <iostream>
#include <string>
#include <cstring>
int main()
{
  std::string str1 = "Hello World!";
  std::string str2("This is Shivakumar");

  // String length function
  std::cout << "The length of the string 1 is " << str1.size() << std::endl;
  std::cout << "The length of the string 2 is " << str2.length() << std::endl;

  // Search for the character
  char ch = 'e';
  size_t idx = str1.find(ch);

  if (idx != std::string::npos)
  {
    std::cout << "Found " << ch << " at " << idx << std::endl;
  }
  else
  {
    std::cout << "charcter does not exist in the string : " << std::endl;
  }

  // Search for the substring
  std::string pat = "Shiva";
  size_t pos = str2.find(pat);

  if (pos != std::string::npos)
  {
    std::cout << "Found " << pat << " at " << pos << std::endl;
  }
  else
  {
    std::cout << "Substring does not exist in str2 :" << std::endl;
  }

  // Erase the string
  int postinon = 5;
  str1.erase(postinon, 1);
  std::cout << "The modified string is :" << str1 << std::endl;

  // Check for the same string
  if (str1 == str2)
  {
    std::cout << "equal strings" << std::endl;
  }
  else
  {
    std::cout << "Not equal strings " << std::endl;
  }

  // The string concatination
  std::string res = str1 + str2;
  std::cout << "The concatinated string :" << res << std::endl;
  return 0;
}