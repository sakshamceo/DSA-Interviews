#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=height.size(),maxi=0,sum=0;
    vector<int>left(n,0),right(n,0);
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,height[i]);
        left[i]=maxi;
    }
        maxi=0;
        for(int i=n-1;i>=0;i--)
    {
        maxi=max(maxi,height[i]);
        right[i]=maxi;
    }
    for(int i=0;i<n;i++)
    {
        left[i]=min(left[i],right[i]);
        sum=sum+(left[i]-height[i]);
        
    }
   cout<<sum;

}