#include <bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>v={3,4,6,1,2};
 vector<int>left(v.size(),1),right(v.size(),1);
int lef=1,rig=1;
for(int i =v.size()-2;i>=0;i--)
{
    rig=rig*v[i+1];
    right[i]=rig;
}
for(int i =1;i<v.size();i++)
{
    lef=lef*v[i-1];
    left[i]=lef;
}
for(int i = 0;i<left.size();i++)
{
    left[i]=left[i]*right[i];
}
for(auto x:left)
{
  cout<<x<<" ,";
}

}