#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vvll vector<vector<ll>>
#define vll vector<ll>
const int mod = 1e9 + 7;
int n;
vvll one;

void init(vvll &a) {
    vll o(n, 1);
    for (int i = 0; i < n; i++) 
        one.push_back(o);
    vll tmp; ll x;
    for (int i = 0; i < n; i++) {
        tmp.clear();
        for (int j = 0; j < n; j++) {
            cin >> x;
            tmp.push_back(x);
        }
        a.push_back(tmp);
    }
}
vvll multiMatrix(vvll a, vvll b) {
    vvll c(n, vll (n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                c[i][j] = (c[i][j] + (a[i][k] * b[k][j]) % mod) % mod;
    return c;
}
vvll powerMod(vvll a, ll b) {
    if (b == 0) return one;
    if (b == 1) return a;
    vvll x = powerMod(a, b / 2);
    if (b % 2 == 0) return multiMatrix(x, x);
    return multiMatrix(a, (multiMatrix(x, x)));
}
int main() {
    ll t, b;
    cin >> t;
    while (t--) {
        cin >> n >> b;
        vvll a;
        init(a);
        
        vvll res = powerMod(a, b);
        ll ans = 0;
        for (int i = 0; i < n; i++) 
            ans = (ans + res[i][n - 1]) % mod;
        cout << ans << endl;
    }
}
