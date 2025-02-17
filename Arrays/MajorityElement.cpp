// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int>nums={2,2,1,1,1,2,2};
    unordered_map<int,int>mp;
    for(auto x : nums)
    {
     mp[x]++;
    } 
     for(auto x : mp)
    {
     if(x.second>nums.size()/2)
     {
         return x.first;
     }
    } 
    return -1;
}