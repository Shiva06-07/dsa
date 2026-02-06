#include <bits/stdc++.h>
using namespace std;

// Approach 1: Two-pass method
void zerosToEnd(vector<int> &arr)
{
  int count = 0;

  // Move non-zero elements forward
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] != 0)
    {
      arr[count++] = arr[i];
    }
  }

  // Fill remaining positions with zeros
  while (count < arr.size())
  {
    arr[count++] = 0;
  }
}

// Approach 2: Single traversal using swapping
void zerosToEndSingleTraversal(vector<int> &arr)
{
  int count = 0;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[count]);
      count++;
    }
  }
}

// Optional: main function for local testing
int main()
{
  vector<int> arr = {0, 1, 0, 3, 12};

  zerosToEndSingleTraversal(arr);

  for (int x : arr)
  {
    cout << x << " ";
  }

  return 0;
}
