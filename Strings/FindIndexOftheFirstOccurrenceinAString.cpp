#include <bits/stdc++.h>
using namespace std;
int main()
{
  string haystack = "sadbutsad", needle = "sad";
  bool res=false;
  for(int i=0;i<haystack.length()-needle.length();i++)
  {
    if(haystack.substr(i,needle.length())==needle)
    {
        res=true;
        break;
    }
  }
  return res?0:-1;
}