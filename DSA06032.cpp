#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<ll> v(n);
        long long cnt = 0;
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                ll tmp = v[i] + v[j];
                ll idx = lower_bound(v.begin() + j + 1, v.end(), m - tmp) - v.begin() - j - 1;
                cnt += idx;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}