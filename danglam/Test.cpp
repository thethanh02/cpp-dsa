#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000033;
vector<ll> fact(MOD);
void factorial() {
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i < MOD; i++)
        fact[i] = (fact[i - 1] * i) % MOD;
}

ll powerMod(ll a, ll b) {
    if (b == 0) return 1;

    ll x = powerMod(a, b / 2);
    if (b % 2 == 0) return x * x % MOD;
    return a * (x * x % MOD) % MOD;
}

int main() {
    factorial();
    int t;
    cin >> t;
    while (t--) {
        ll l, r, k, res;
        cin >> l >> r >> k;
        if (r >= MOD) {
            cout << 0 << endl;
        } else {
            ll res = powerMod(fact[l], (r - l)) * fact[r] % MOD;
            cout << powerMod(res, k % (MOD - 1)) << endl;
        }
    }
}