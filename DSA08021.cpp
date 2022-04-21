#include<bits/stdc++.h>
using namespace std;

int n, m;
int res[1001][1001], a[1001][1001];
void Solution() {
    memset(res, -1, sizeof(res));
    res[1][1] = 0;
    queue<pair<int, int>> q;
    q.push({1, 1});
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        if (res[x + a[x][y]][y] == -1) {
            res[x + a[x][y]][y] = res[x][y] + 1;
            q.push({x + a[x][y], y});
        }
        if (res[x][y + a[x][y]] == -1) {
            res[x][y + a[x][y]] = res[x][y] + 1;
            q.push({x, y + a[x][y]});
        } 
        if (res[n][m] != -1) return;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) cin >> a[i][j];
        Solution();
        cout << res[n][m] << endl;
    }
}