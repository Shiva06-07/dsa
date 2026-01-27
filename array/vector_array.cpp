#include <iostream>
#include <vector>
int main()
{
  int n;
  int x;
  std::cout << "enter the size of the vector: ";
  std::cin >> n;
  std::vector<int> arr; // another method is std::vector<int> arr(n)
  std::cout << "enter the vector elements " << std::endl;
  for (int i = 0; i < 5; i++)
  {
    std::cin >> x;
    arr.push_back(x); // no push back needed  cin>>arr[i] is enough
  }
  std::cout << "The vector elements are :" << std::endl;
  for (int i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }
  return 0;
}