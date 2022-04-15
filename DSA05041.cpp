#include <bits/stdc++.h>
using namespace std;
int f[1005][1005];
int dp(string s) {
    int i, j, k, ans = 1, n = s.size();
    memset(f, 1, sizeof(f));
    for (i = 0; i < n; i++) f[i][i] = 1;

    for (k = 1; k < n; k++) {
        for (i = 0; i < n - k; i++) {
            j = i + k;
            if (s[i] == s[j]) {
                if (k > 1) f[i][j] = f[i + 1][j - 1] + 2;
                else f[i][j] = 2;
            } else f[i][j] = max(f[i][j - 1], f[i + 1][j]);
        }
    }
    return f[0][s.size() - 1];
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << s.size() - dp(s) << endl;
    }
}