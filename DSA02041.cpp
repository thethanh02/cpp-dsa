#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
#define X first
#define Y second
int BFS(int n) {
    vector<bool> vs(n, 0);
    queue<ii> q;
    q.push({n, 0});
    while (!q.empty()) {
        ii u = q.front(); q.pop();
        if (u.X == 1) return u.Y;
        if (u.X % 3 == 0) q.push({u.X / 3, u.Y + 1});
        if (u.X % 2 == 0) q.push({u.X / 2, u.Y + 1});
        if (u.X > 1) q.push({u.X - 1, u.Y + 1});
    }
    return 0;
}
int oo = 100001;
vector<int> dp(oo);
void Pre() {
    dp[1] = 0, dp[2] = dp[3] = 1;
    for (int i = 4; i < oo; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }
}
int main() {
    Pre();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << dp[n] << endl;
    }
}