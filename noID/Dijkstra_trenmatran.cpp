#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
#define X first
#define Y second

int n, st;
// vector<vector<int>> a;
// vector<int> D, par;
// void reinit() {
//     a.clear();
//     a.resize(n + 1, vector<int> (n + 1, 1e9));
//     D.assign(n + 1, 1e9);
//     par.assign(n + 1, -1);
// }
int a[100][100], D[100], par[100];
void Dijkstra(int st) {
    for (int i = 0; i <= n; i++) {
        D[i] = 1e9;
        par[i] = -1;
    }

    priority_queue<ii, vector<ii>, greater<ii>> q;
    D[st] = 0;
    q.push({0, st});
    while (!q.empty()) {
        int u = q.top().second;
        q.pop();
        for (int v = 1; v <= n; v++) {
            if (a[u][v] != 1e9) {
                int d_u_v = a[u][v];
                if (D[u] + d_u_v < D[v]) {
                    D[v] = D[u] + d_u_v;
                    par[v] = u;
                    q.push({D[v], v});
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) cout << D[i] << " ";
}
int main() {
    cin >> n >> st;
    // reinit();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    Dijkstra(st);
}
// 7 1
// 0          20         5          17         1000000000 1000000000 1000000000
// 20         0          1000000000 1          1000000000 1000000000 1
// 5          1000000000 0          25         3          10         1000000000
// 17         1          25         0          15         1000000000 1000000000
// 1000000000 1000000000 3          15         0          1          1000000000
// 1000000000 1000000000 10         1000000000 1          0          1
// 1000000000 1          1000000000 1000000000 1000000000 1          0

// 0 11 5 12 8 9 10 
