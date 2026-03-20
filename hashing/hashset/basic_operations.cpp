#include <iostream>
#include <unordered_set>
using namespace std;

/*
 * Program: Demonstration of unordered_set in C++
 *
 * Features covered:
 * - Declaration
 * - Initialization
 * - Insertion
 * - Iteration
 * - Find
 * - Erase (by value & iterator)
 * - Count
 * - Updation cannot be done for the particular value
 * Average Time Complexity:
 * Insert / Delete / Find → O(1)
 */

int main()
{

  //  Declaration
  unordered_set<int> us;

  //  Initialization
  unordered_set<int> us1 = {1, 2, 3, 4, 5};

  cout << "Initialized set (us1): ";
  for (int value : us1)
  {
    cout << value << " ";
  }
  cout << endl
       << endl;

  //  Inserting new elements
  us.insert(1);
  us.insert(2);
  us.insert(69);
  us.insert(12);

  cout << "Elements in us after insertion: ";
  for (auto it = us.begin(); it != us.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl
       << endl;

  // Accessing element using iterator + next()
  auto it = next(us.begin(), 0);
  cout << "Element at position 0 (unordered): " << *it << endl
       << endl;

  //  Finding an element
  auto found = us1.find(4);
  if (found != us1.end())
  {
    cout << "Element found: " << *found << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  cout << endl;

  // Erasing element by value
  cout << "Deleting element 5 from us1: ";
  us1.erase(5);
  for (int value : us1)
  {
    cout << value << " ";
  }
  cout << endl
       << endl;

  //  Erasing element by iterator
  cout << "Deleting first element (unordered): ";
  us1.erase(us1.begin());
  for (int value : us1)
  {
    cout << value << " ";
  }
  cout << endl
       << endl;

  //  Count (checks existence)
  if (us1.count(4))
  {
    cout << "Element 4 is present in the set" << endl;
  }
  else
  {
    cout << "Element 4 is not present in the set" << endl;
  }

  return 0;
}
