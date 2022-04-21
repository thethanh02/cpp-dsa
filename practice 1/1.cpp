#include <bits/stdc++.h>
using namespace std;
#define ll long long
string dp(ll n, ll a[], ll k) {
    ll f[n + 1] = {0};
    int j = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + a[i - 1];
        if (f[i] > k){
            while (j < i - 1) {
                f[i] -= a[j++];
                if (f[i] <= k) break;
            }
        }
        if (f[i] == k) return "YES";
    }
    return "NO";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << dp(n, a, k) << endl;
        // dp(n, a, k);
        // cout << endl;
    }
}