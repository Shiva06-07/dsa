#include <bits/stdc++.h>
// #include<vector>
int main()
{
  std::vector<int> arr;
  int n;
  std::cout << "Enter the size of the array: ";
  std::cin >> n;
  std::cout << "Enter the elmeents of the array: ";
  for (int i = 0; i < n; i++)
  {
    int temp;
    std::cin >> temp;
    arr.push_back(temp);
  }
  std::cout << "The elements of the array before sorting : ";
  for (int i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  for (int i = 0; i < arr.size(); i++)
  {
    int min_idx = i;
    for (int j = i + 1; j < arr.size(); ++j)
    {
      if (arr[j] < arr[min_idx])
      {
        min_idx = j;
      }
    }
    std::swap(arr[i], arr[min_idx]);
  }
  std::cout << "The elements of the array after sorting : ";
  for (int i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }
  return 0;
}