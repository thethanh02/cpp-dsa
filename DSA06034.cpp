#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Solution() {
    ll n, k, cnt = 0;
    cin >> n >> k;
    ll a[n];
    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    
    ll x = k / 2;
    map<ll, ll>::iterator i;
    for (i = m.begin(); i != m.end(); i++) {
        ll tmp = i->first;
        if (tmp != x) cnt += m[tmp] * m[k - tmp];
    }
    if (k % 2 == 0) {
        cnt /= 2;
        cnt += m[x] * (m[x] - 1) / 2;
    } else {
        cnt += m[x] * m[k - x];
        cnt /= 2;
    }
    cout << cnt << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}
