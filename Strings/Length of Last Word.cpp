#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s = "Hello World";
  int sum=0,last=0;
  for(int i=0;i<s.length();i++)
  {
      if(!isalnum(s[i]))
      {  if(sum!=0)
        {
            last=sum;
        }
          sum=0;
      }
      else
      {
          sum++;
      }
      if(isalnum(s[i]) && i==s.length()-1)
      {
        last=sum;
      }
  }
  cout<<last;
}