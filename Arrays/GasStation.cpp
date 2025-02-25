#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> gas = {1,2,3,4,5}, cost = {3,4,5,1,2};
    int n = gas.size();
    vector<int> res(n);
    int ret = 0, i = 0, j = 0, cnt = 0;

    // Compute net fuel at each station
    for (int i = 0; i < n; i++) {
        res[i] = gas[i] - cost[i];
    }

    // Start checking possible start indices
    while (j < n) {   
        int k = i % n; // Ensure cyclic traversal
        ret += res[k];

        if (ret < 0) { // If fuel becomes negative, reset search
            j = i + 1;
            ret = 0;
            cnt = 0;
        } else {
            cnt++;
        }

        if (cnt == n) { // If we complete a full cycle, break
            break;
        }

        i++;
    }

    cout << (cnt == n ? j : -1);
    return 0;
}
