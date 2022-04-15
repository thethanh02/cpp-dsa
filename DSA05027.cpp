#include<bits/stdc++.h>
using namespace std;
int a[1001], c[1001], f[1001][1001], n, v;
int dp() {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= v; j++) {
            if (i == 0 || j == 0) f[i][j] = 0;
            else {
                f[i][j] = f[i - 1][j];
                if(j >= a[i]) f[i][j] = max(f[i][j], f[i - 1][j - a[i]] + c[i]);
            }
        }
    }
    return f[n][v];
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> v;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> c[i];
        cout << dp() << endl;
    }
}