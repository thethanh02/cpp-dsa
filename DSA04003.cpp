#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 123456789;
ll powerMod(ll a, ll b) {
    if (b == 0) return 1;
    if (b == 1) return a % mod;
    ll x = powerMod(a, b / 2);
    if (b % 2 == 0) return x * x % mod;
    return a * (x * x % mod) % mod;
}
int main() {
    ll b, t;
    cin >> t;
    while (t--) {
        cin >> b;
        cout << powerMod(2, b - 1) << endl;
    }
}
