#include <bits/stdc++.h>
using namespace std;
string res="";
void  OccurenceString(string &str,string &part)
{ 
  for(int i=0;i<str.length();)
  {
    if(str.substr(i,part.length())==part)
    {
      str.erase(i,part.length());
      i=0;
    }
    else{
        res=res+str[i];
        i++;
    }
  }
  cout<<res;
}
int main() {
    string str = "daabcbaabcbc", part = "abc";
    int low =0;
    OccurenceString(str,part);
}
