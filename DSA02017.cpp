#include <bits/stdc++.h>
using namespace std;

int n = 8, a[15], c[15][15], ans;
bool b[15], xuoi[21], nguoc[21];
void update() {
    int t = 0;
    for (int i = 1; i <= n; i++)
        t += c[i][a[i]];
    ans = max(ans, t); 
}
void Try(int i) {
    int j;
    for (j = 1; j <= 8; j++) {
        if (!b[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]) {
            a[i] = j;
            b[j] = xuoi [i - j + n] = nguoc[i + j - 1] = 1;
            if (i == n) update();
            else Try(i + 1);
            b[j] = xuoi[i - j + 8] = nguoc[i + j - 1] = 0;
        }
    }
}
int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        ans = 0;
        memset(b, 0, sizeof(b));
        memset(xuoi, 0, sizeof(xuoi));
        memset(nguoc, 0, sizeof(nguoc));
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= n; j++) cin >> c[i][j];
        Try(1);
        cout << ans << endl;
    }
}
