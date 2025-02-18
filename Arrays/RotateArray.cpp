#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>arr={1,2,3,4,5,6,7};
  int n=arr.size(),k=3;
  k %= n;
  for (int i = 0; i < n / 2; i++) {
    swap(arr[i], arr[n - i - 1]);
}

// Step 2: Reverse the first k elements.
for (int i = 0; i < k / 2; i++) {
    swap(arr[i], arr[k - i - 1]);
}

// Step 3: Reverse the last n-k elements.
for (int i = k, j = n - 1; i < j; i++, j--) {
    swap(arr[i], arr[j]);

}
   for(auto x: arr)
   {
    cout<<x;
   }
}