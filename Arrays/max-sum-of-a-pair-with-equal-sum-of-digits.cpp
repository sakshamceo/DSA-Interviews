// Example 1:

// Input: nums = [18,43,36,13,7]
// Output: 54
// Explanation: The pairs (i, j) that satisfy the conditions are:
// - (0, 2), both numbers have a sum of digits equal to 9, and their sum is 18 + 36 = 54.
// - (1, 4), both numbers have a sum of digits equal to 7, and their sum is 43 + 7 = 50.
// So the maximum sum that we can obtain is 54.
// Example 2:

// Input: nums = [10,12,19,14]
// Output: -1
// Explanation: There are no two numbers that satisfy the conditions, so we return -1.


#include <bits/stdc++.h>
using namespace std;
int SumOfDigit(int num)
{ int sum=0;
  while(num!=0)
  {
    sum=sum+num%10;
    num=num/10;
  }
  return sum;
}
int main()
{
 vector<int>v={36,43,18,13,7,90,81};
 unordered_map<int,int>mp;
 int maxi=-1;

 for(int i=0;i<v.size();i++)
 { 
    //  cout<<SumOfDigit(v[i])<<endl;
    if(mp.find(SumOfDigit(v[i]))!=mp.end())
    {
        maxi=maxi>mp[SumOfDigit(v[i])]+v[i]?maxi:mp[SumOfDigit(v[i])]+v[i];

        mp[SumOfDigit(v[i])]= mp[SumOfDigit(v[i])]<v[i]?v[i]:mp[SumOfDigit(v[i])];
      
    }
    else{
        mp[SumOfDigit(v[i])]=v[i];
     }
  
 } 
 cout<<maxi;
}