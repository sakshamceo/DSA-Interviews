// You are given a 0-indexed integer array nums.
// A pair of indices (i, j) is a bad pair if i < j and j - i != nums[j] - nums[i].
// Return the total number of bad pairs in nums.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={1,3,9,10};
    unordered_map<int,int>mp;
    int count=0,combination=1,n=nums.size();
    combination=(n*(n-1))/2;
    for(int i=0; i<nums.size();i++)  //j-i==numsj-numsi => j-numsj==i-numsi
    {
       if(mp.find(i-nums[i])!=mp.end())
       {
        count=mp[i-nums[i]]+count;
       }
       mp[i-nums[i]]++;
    }
    cout<<combination-count<<endl;

}