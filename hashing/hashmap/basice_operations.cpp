#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map<int, string> um;

  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter key and value (space separated):\n";
  for (int i = 0; i < n; i++)
  {
    int key;
    string value;
    cin >> key >> value;

    um[key] = value; // better than insert
  }

  cout << "\nMap elements:\n";
  for (auto &p : um)
  {
    cout << p.first << " : " << p.second << endl;
  }

  // Update
  int updatekey;
  cout << "\nEnter key to update: ";
  cin >> updatekey;

  if (um.find(updatekey) != um.end())
  {
    string newvalue;
    cout << "Enter new value: ";
    cin >> newvalue;
    um[updatekey] = newvalue;
  }
  else
  {
    cout << "Key not found\n";
  }

  // After update
  cout << "\nAfter update:\n";
  for (auto &p : um)
  {
    cout << p.first << " : " << p.second << endl;
  }

  // Delete
  int del;
  cout << "\nEnter key to delete: ";
  cin >> del;

  if (um.erase(del))
    cout << "Deleted successfully\n";
  else
    cout << "Key not found\n";

  return 0;
}