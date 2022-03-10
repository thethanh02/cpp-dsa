#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod  = 1e9 + 7;
ll powerMod(ll a, ll b) {
    if(b == 0) return 1;
    ll x = powerMod(a, b/2);
    if(b % 2 == 0) return x*x % mod;
    return a*(x*x % mod) % mod;
}
int main() {
    ll a, b;
    while(1) {
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        cout << powerMod(a, b) << endl;
    }
}
