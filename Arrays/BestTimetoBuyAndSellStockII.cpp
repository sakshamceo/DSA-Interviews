// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

// Find and return the maximum profit you can achieve.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.
// Example 2:

// Input: prices = [1,2,3,4,5]
// Output: 4
// Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
// Total profit is 4.
// Example 3:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.

// PEAK WALA LOGIC!!!!! 
// TESTCASE [1,9,6,9,1,7,1,1,5,9,9,9]

#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,9,6,9,1,7,1,1,5,9,9,9};
  int i=1,sum=0;
  if(v.size()==2)
  {
      return v[0]<=v[1]?v[1]-v[0]:0;
  }
  if(v.size()==1)
  {
      return v[0];
  }
  while(i<v.size()-1)
  {int pit=0,peak=0;
      if(v[i-1]<=v[i] && v[i+1]<v[i])
    {
        int j=i;
        while(j>=1 && v[j]>=v[j-1])
        {
            j--;
        }
        pit=v[j];
        peak=v[i];
    }
    sum=sum+(peak-pit);
  i++;
  }
  if (v[i] >= v[i - 1])
  { int pit=0,peak = v[i];
    int j = i;
    while (j >= 1 && v[j] >= v[j - 1])
    {
      j--;
    }
    pit=v[j];
    sum=sum+(peak-pit);
  }
  cout<<sum;
}