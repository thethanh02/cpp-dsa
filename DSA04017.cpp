#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<ll> a, b;
void Init() {
    ll tmp;
    cin >> n;
    a.clear(), b.clear();
    for (ll i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (ll i = 0; i < n - 1; i++) {
        cin >> tmp;
        b.push_back(tmp);
    }
}
void Bsearch(ll l, ll r) {
    ll m = (r + l) / 2;
    while (l != m && m != r) {
        if (a[m] != b[m]) r = m;
        else l = m;
        m = (l + r) / 2;
    }
    if(a[m] != b[m]) cout << m + 1;
    else cout << m + 2;
    cout << endl;
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        Init();
        Bsearch(0, n - 1);
    }
}
