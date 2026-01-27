#include <iostream>
int main()
{
  int num;
  std::cout << "Enter a number to know whether its odd or even :";
  std::cin >> num;
  if ((num & 1) == 0)
  {
    std::cout << "The given number " << num << " is even" << std::endl;
  }
  else
  {
    std::cout << "The given number " << num << " is odd " << std::endl;
  }
  return 0;
}