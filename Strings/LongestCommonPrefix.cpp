#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> st = {"flower", "flow", "flight"};
    string mini = st[0],prefix=""; 
    int mmini=INT_MAX; 
    for (int i = 0; i < st.size(); i++) {
        mini = (mini.length() >= st[i].length()) ? st[i] : mini;
    }
    for (int i = 0; i < st.size(); i++) {
        string current=st[i];
        int cnt=0;
        for (int j = 0; j < mini.length(); j++) {
           if(current[j]!=mini[j])
           {
            break;
           }
           cnt++;
        }
        mmini=min(cnt,mmini);
    }
    for(int i=0 ; i<mmini;i++)
    {
        prefix=prefix+mini[i];
    }
    cout<<prefix;
    
}
