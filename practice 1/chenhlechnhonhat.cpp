#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<string> ds;
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        ds.push_back(tmp);
    }
    int a[k], ans = INT_MAX;
    for (int i = 0; i < k; i++) a[i] = i;
    do {
        int mini = INT_MAX, maxi = 0;
        for (int i = 0; i < n; i++) {
            string tmp = "";
            for (int j = 0; j < k; j++) {
                tmp += ds[i][a[j]];
            }
            mini = min(mini, stoi(tmp));
            maxi = max(maxi, stoi(tmp));
        }
        ans = min(ans, maxi - mini);
    } while (next_permutation(a, a + k));
    cout << ans;
}