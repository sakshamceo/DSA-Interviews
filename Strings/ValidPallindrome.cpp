//after converting all uppercase letters into lowercase letters
// and removing all non-alphanumeric characters, it reads the same forward and backward.
// Alphanumeric characters include letters and numbers.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string phrase="A man, a plan, a canal: Panama";
    bool flag=true;
    int low=0,high=phrase.size() - 1;
    while(low<high)
    {   
        while(low < high && !isalnum(phrase[low]))
        {
            low++;
        }
        while(low < high && !isalnum(phrase[high]))
        {
            high--;
        }
        if(tolower(phrase[low])!=tolower(phrase[high]))
        {
            flag=false;
            break;
    
        }
            low++;
            high--;

    }
    if(flag)cout<<"YES";
    else cout<<"NO";

}