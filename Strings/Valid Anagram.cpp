#include <bits/stdc++.h>
using namespace std;
int main()
{
   string st="acc",str2="aac";
   unordered_map<char,int>mp;
   bool flag=true;
   if(st.length()!=str2.length())
   {
    flag=false;
   }
   for(auto x:st)
   {
    mp[x]++;
   }
   for(auto x:str2)
   {
    mp[x]--;
   }
   for(auto x:mp)
   {
    if(x.second!=0)
    {
       flag=false;
    }
   }
   cout<<flag;

}