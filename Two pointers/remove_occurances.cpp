#include <iostream>
#include <vector>

/*
 * Removes all occurrences of a given element from the vector.
 * Returns the count of remaining elements.
 */
int removeOccurrences(std::vector<int> &arr, int element)
{
  int k = 0;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] != element)
    {
      arr[k] = arr[i];
      k++;
    }
  }

  return k;
}

int main()
{
  std::vector<int> arr;
  int n, element;

  std::cout << "Enter the size of the array: ";
  std::cin >> n;

  std::cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    int value;
    std::cin >> value;
    arr.push_back(value);
  }

  std::cout << "Enter the element to remove: ";
  std::cin >> element;

  int newSize = removeOccurrences(arr, element);

  std::cout << "New size after removal: " << newSize << "\n";
  std::cout << "Array after removal: ";

  for (int i = 0; i < newSize; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";

  return 0;
}
