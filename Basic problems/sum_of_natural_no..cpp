#include <iostream>
int main()
{
  int n, sum;
  std::cout << "Enter the number upto which we need to find the sum:";
  std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  std::cout << "The sum would be :" << sum;
  return 0;
}