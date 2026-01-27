#include <iostream>
#include <vector>
int main()
{
  std::vector<int> arr;
  int n, x;
  std::cout << "Enter the size of the array: ";
  std::cin >> n;
  std::cout << "Enter the array elements:";
  for (int i = 0; i < n; i++)
  {
    int temp;
    std::cin >> temp;
    arr.push_back(temp);
  }
  std::cout << "The entered array elements are :";
  for (int i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::
          endl;
  std::cout << "Enter an element to be found in the array:";
  std::cin >> x;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == x)
    {
      std::cout << "Element " << x << " was found at postion " << i << " in the array" << std::endl;
      return 0;
    }
  }
  std::cout << "Element not found" << std::endl;
  return 0;
}
