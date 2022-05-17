#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
#define X first
#define Y second

int n, m;
vector<vector<int>> a, D;
int di[] = {0, 0, 1, -1}, dj[] = {-1, 1, 0, 0};
void reinit() {
    a.clear();
    a.resize(n, vector<int> (m));
    D.assign(n, vector<int> (m, 1e9));
}
void Dijkstra() {
    priority_queue<iii, vector<iii>, greater<iii>> q;
    D[0][0] = a[0][0];
    q.push({D[0][0], {0, 0}});
    while (!q.empty()) {
        int ui = q.top().Y.X, uj = q.top().Y.Y;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int vi = ui + di[i], vj = uj + dj[i], d_u_v;
            if (vi >= 0 && vi < n && vj >= 0 && vj < m) {
                d_u_v = a[vi][vj];
                if (D[ui][uj] + d_u_v < D[vi][vj]) {
                    D[vi][vj] = D[ui][uj] + d_u_v;
                    q.push({D[vi][vj], {vi, vj}});
                }
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        reinit();
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < m; j++) cin >> a[i][j];
        Dijkstra();
        cout << D[n - 1][m - 1] << endl;
    }
}