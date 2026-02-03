#include <bits/stdc++.h>
int partition(std::vector<int> &arr, int low, int high)
{

  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++)

  {
    if (arr[j] < pivot)
    {
      i++;
      std::swap(arr[i], arr[j]);
    }
  }
  std::swap(arr[i + 1], arr[high]);
  return i + 1;
}
void quick_sort(std::vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int part = partition(arr, low, high);
    quick_sort(arr, low, part - 1);
    quick_sort(arr, part + 1, high);
  }
}
int main()
{
  std::vector<int> arr;
  int n;
  std::cout << "Enter size of the array elements :";
  std::cin >> n;
  std::cout << "Enter the array elements :";
  for (int i = 0; i < n; i++)
  {
    int temp;
    std::cin >> temp;
    arr.push_back(temp);
  }
  std::cout << "Array elements before sort : ";
  for (int i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  quick_sort(arr, 0, arr.size() - 1);
  std::cout << "Array elements after sorting :";
  for (int i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }
}