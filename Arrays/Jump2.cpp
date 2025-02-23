#include <bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> v = {2,3,1,1,4};
 int n = v.size()-1;
 int jump=0,crr=0,farthest=0; 
 for(int i=0;i<n;i++)
 {
   farthest=max(farthest,i+v[i]);
   if(i==crr)
   {
    jump++;
    crr=farthest;
   }
 }
 cout<<jump;
}