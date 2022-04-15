#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[k];
    string v[n];
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < k; i++) a[i] = i;

    int ans = INT_MAX;
    do {
        int mini = INT_MAX, maxi = 0;
        for (int i = 0; i < n; i++) {
            string tmp = "";
            for (int j = 0; j < k; j++) {
                tmp += v[i][a[j]];  
            }
            int temp = stoi(tmp);
            mini = min(mini, temp);
            maxi = max(maxi, temp);
        }
        ans = min(ans, maxi - mini);
    } while (next_permutation(a, a + k));
    cout << ans;
}