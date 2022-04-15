#include <bits/stdc++.h>
using namespace std;
int a[505][505], c[505][505], n, m;
int dp() {
    memset(c, 0, sizeof(c));
    int i, j, ans = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (a[i][j] == 1) 
                c[i][j] = min(c[i - 1][j], min(c[i][j - 1], c[i - 1][j - 1])) + 1;
            else c[i][j] = 0;
            ans = max(ans, c[i][j]);
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) cin >> a[i][j];
        cout << dp() << endl;
    }
}