#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 1000033;

vector<ll> fact(MOD);

map <ll, map<ll, ll>> mp;

ll Max = 0;

ll caigithenay(ll l, ll r) {
    if (mp.find(l) != mp.end()) {
        if (mp[l].find(r) != mp[l].end()) {
            return mp[l][r];
        }
        else {
            auto x = mp[l].upper_bound(r);
            advance(x, -1);
            for (ll i = x->first + 1; i <= r; i++) {
                mp[l][i] = mp[l][i - 1] % MOD * fact[i] % MOD;
            }
            return mp[l][r];
        }
    }

    else {
        ll res = 1;
        for (ll i = l; i <= r; i++) {
            res = (res * fact[i]) % MOD;
            mp[i][r] = res;
        }
        return res;
    }
    return 0;
}

void factorial() {
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i <= Max; i++)
        fact[i] = (fact[i - 1] * i) % MOD;
}

ll powerMod(ll a, ll b) {
    if (b == 0) return 1;

    ll x = powerMod(a, b / 2);
    if (b % 2 == 0) return x * x % MOD;
    return a * (x * x % MOD) % MOD;
}

struct f {
    ll l, r, k;

    f(ll l, ll r, ll k) {
        this->l = l;
        this->r = r;
        this->k = k;
    }
};

int main() {
    factorial();
    int t;
    cin >> t;
    while (t--) {
        ll l, r, k, res;
        cin >> l >> r >> k;
        if (r >= MOD) {
            cout << 0 << endl;
        }
        else {
            res = 1;
            for (int i = l; i <= r; i++)
                res = (res * fact[i]) % MOD;
            cout << powerMod(res, k % (MOD - 1)) << endl;
        }
    }
}