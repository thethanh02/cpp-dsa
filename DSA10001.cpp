#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
#define X first
#define Y second
ii st;
int n, m;
vector<vector<bool>> vs;
vector<vector<char>> a;
int di[] = {-1, 0, 1, 0}, dj[] = {0, 1, 0, -1};
void reinit() {
    a.clear();
    a.assign(n + 2, vector<char> (m + 2, '*'));
    vs.clear();
    vs.assign(n + 2, vector<bool> (m + 2, 0));
}
int DFS(int i, int j, int status, int cnt) {
    if (cnt > 3) return 0;
    else if (a[i][j] == 'T') return 1;
    for (int u = 0; u < 4; u++) {
        int x = i + di[u], y = j + dj[u];
        if (!vs[x][y] && a[x][y] != '*') {
            vs[x][y] = 1;
            if (status == u) {
                if (DFS(x, y, u, cnt)) return 1;
            } else if (DFS(x, y, u, cnt + 1)) return 1;
            vs[x][y] = 0;
        }
    }
    return 0;
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        cin >> n >> m;
        reinit();
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 'S') st.X = i, st.Y = j;
            }
        cout << (DFS(st.X, st.Y, -1, 0) ? "YES\n" : "NO\n");
    }
}