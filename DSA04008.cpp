#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
struct Matrix {
    ll f[2][2];
};
Matrix operator* (Matrix a, Matrix b) {
    Matrix c;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c.f[i][j] = 0;
            for (int k = 0; k < 2; k++)
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
        cin >> b;
        Matrix a;
        a.f[0][0] = a.f[0][1] = a.f[1][0] = 1; a.f[1][1] = 0;
        Matrix res = powerMod(a, b);
        cout << res.f[1][0] << endl;
    }
}
