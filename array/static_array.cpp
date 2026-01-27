#include <iostream>
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  std::cout << "These are the array elements:" << std::endl;
  for (int i = 0; i < 5; i++)
  {
    std::cout << i << " = " << arr[i] << "  " << std::endl;
  }
  std::cout << "end of array elements";
  return 0;
}