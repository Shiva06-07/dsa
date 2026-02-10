#include <bits/stdc++.h>
using namespace std;

/*
 * LeetCode 121 - Best Time to Buy and Sell Stock
 *

 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
int maxProfit(const vector<int> &prices)
{
  int minPrice = INT_MAX;
  int maxProfit = 0;

  for (int price : prices)
  {
    minPrice = min(minPrice, price);              // Best buying price so far
    maxProfit = max(maxProfit, price - minPrice); // Max profit so far
  }

  return maxProfit;
}

int main()
{
  vector<int> prices = {7, 1, 5, 3, 6, 4};

  cout << "Maximum Profit: " << maxProfit(prices) << endl;

  return 0;
}
