#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> prices = {7, 1, 2, 3, 7};
  int low = INT_MAX, profit = 0;
  for (auto x : prices)
  {
    if (low > x)
    {
      low = x;
    }
    if (profit < x - low)
    {
      profit = x - low;
    }
  }
  cout << profit;
}