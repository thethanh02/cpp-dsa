#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, a[1005][1005];
vector<vector<int>> res;
void update(queue<pair<int, int>>& q, int stepx, int stepy) {
    if (res[x + stepx][y + stepy] == -1) {
        res[x + stepx][y + stepy] = res[x][y] + 1;
        q.push({x + stepx, y + stepy});
    }
}
void Solution() {
    res.assign(1005, vector<int> (1005, -1));
    res[1][1] = 0;
    queue<pair<int, int>> q;
    q.push({1, 1});
    while (!q.empty()) {
        x = q.front().first, y = q.front().second;
        q.pop();
        update(q, abs(a[x + 1][y] - a[x][y]), 0);
        update(q, 0, abs(a[x][y + 1] - a[x][y]));
        update(q, abs(a[x + 1][y + 1] - a[x][y]), abs(a[x + 1][y + 1] - a[x][y]));
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