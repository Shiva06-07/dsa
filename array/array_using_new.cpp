#include <iostream>
int main()
{
  int n;
  std::cout << "enter the size of the array :";
  std::cin >> n;
  int *arr = new int[n];
  std::cout << "enter the array elements:" << std::endl;
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }
  std::cout << "The array elements are :" << std::endl;
  for (int i = 0; i < n; i++)
  {
    std::cout << i << " = " << arr[i] << std::endl;
  }
  std::cout << "end of array elements" << std::endl;
  delete[] arr;
  return 0;
}