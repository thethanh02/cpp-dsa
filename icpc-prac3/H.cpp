#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// [0; R)
ll counterOneEachRow(ll R, ll mod) {
    ll x = R % mod, y = 0;
    if (x > mod / 2) 
        y = (x - mod / 2) % mod; // dem so 1 trong phan thua`
    return (R - x) / 2 + y; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll L, R;
        cin >> L >> R;
        ll ans = 0;
        ll mod = 1;
        while (1) {
            mod *= 2;
            ll oneR1 = counterOneEachRow(R + 1, mod);
            ll oneL = counterOneEachRow(L, mod);
            ans = max(ans, oneR1 - oneL);
            if (oneR1 == 0) break;
        }
        cout << (R + 1 - L) - ans << endl;
    }
}