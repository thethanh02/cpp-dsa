#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int n;
struct Matrix {
    ll f[11][11];
};
Matrix operator* (Matrix a, Matrix b) {
    Matrix c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c.f[i][j] = 0;
            for (int k = 0; k < n; k++)
                c.f[i][j] = (c.f[i][j] + a.f[i][k] * b.f[k][j] % mod) % mod;
        }
    }
    return c;
}
Matrix powerMod(Matrix a, ll b) {   
    if (b == 1) return a;
    Matrix x = powerMod(a, b / 2);
    if (b % 2 == 0) return x * x;
    return a * x * x;
}
int main() {
    ll b, t;
    cin >> t;
    while (t--) {
        cin >> n >> b;
        Matrix a;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) cin >> a.f[i][j];
        Matrix res = powerMod(a, b);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << res.f[i][j] << " ";
            cout << endl;
        }
    }
}
