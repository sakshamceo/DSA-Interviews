#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,3,5};
  int n = v.size();
  int MOD = 1e9 + 7;
int count = 0;

vector<int> prefix(n + 1, 0);
for (int i = 0; i < n; i++) {
  prefix[i + 1] = prefix[i] + v[i];
}
int even=1,odd=0,res=0;
for (int i = 1; i < prefix.size(); i++) {
 if(prefix[i]%2!=0)
 {
    res=res+even;
    odd++;
 } //ODD
 else   
 {
    res=res+odd;
    even++;
 }            //EVEN
}

cout<< res%MOD;

}