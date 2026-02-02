// #include <iostream>
// #include <vector>
// #include <algorithm>

// // Problem: Binary Search
// // Requirement: Sorted array
// // Time Complexity: O(log n)
// // Space Complexity: O(1)

// int main()
// {
//   std::vector<int> arr;
//   int n, x;

//   std::cout << "Enter the size of the array: ";
//   std::cin >> n;

//   std::cout << "Enter the array elements: ";
//   for (int i = 0; i < n; i++)
//   {
//     int temp;
//     std::cin >> temp;
//     arr.push_back(temp);
//   }

//   // Binary search requires sorted array
//   sort(arr.begin(), arr.end());

//   std::cout << "Sorted array: ";
//   for (int i = 0; i < n; i++)
//     std::cout << arr[i] << " ";
//   std::cout << std::endl;

//   std::cout << "Enter the element to be found: ";
//   std::cin >> x;

//   int low = 0, high = n - 1;

//   while (low <= high)
//   {
//     int mid = low + (high - low) / 2;

//     if (arr[mid] == x)
//     {
//       std::cout << "Element " << x << " found at index " << mid << std::endl;
//       return 0;
//     }
//     else if (x < arr[mid])
//     {
//       high = mid - 1;
//     }
//     else
//     {
//       low = mid + 1;
//     }
//   }

//   std::cout << "Element not found!" << std::endl;
//   return 0;
// }
// Bineary Search
#include <iostream>
#include <vector>
int binearySearch(std::vector<int> &arr, int key)
{
  int low = 0;
  int high = arr.size() - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}
int main()
{
  std::vector<int> arr;
  int n, key;
  std::cout << "Enter size of the array : ";
  std::cin >> n;
  std::cout << "Enter the array elements in sorted manner :";
  for (int i = 0; i < n; i++)
  {
    int temp;
    std::cin >> temp;
    arr.push_back(temp);
  }
  std::cout << "The array elements are :";
  for (int i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Enter the element to be found : ";
  std::cin >> key;
  int index = binearySearch(arr, key);

  if (index == -1)
  {
    std::cout << "Number not found !!" << std::endl;
  }
  else
  {
    std::cout << "Number found at index :" << index;
  }
  return 0;
}
