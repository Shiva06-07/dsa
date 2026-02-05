#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
  // -------- Sorting a std::vector --------
  std::vector<int> vec = {10, 2, 7, 8, 9, 10};

  std::sort(vec.begin(), vec.end());

  std::cout << "Sorted vector: ";
  for (int value : vec)
  {
    std::cout << value << " ";
  }
  std::cout << "\n\n";

  // -------- Sorting a built-in array --------
  int arr[] = {2, 10, 3, 8, 9, 6};
  int n = sizeof(arr) / sizeof(arr[0]); // number of elements

  std::cout << "Original array: ";
  for (int i = 0; i < n; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";

  // -------- Sorting a specific range in the array --------
  // Sort elements from index 1 to index 3 (1-based exclusive end)
  std::sort(arr + 1, arr + 4);

  std::cout << "Array after partial sort (index 1 to 3): ";
  for (int i = 0; i < n; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";

  return 0;
}
