#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
#define X first
#define Y second

int n, x, y, w, st;
vector<vector<int>> a;
vector<int> D;
void reinit() {
    a.clear();
    a.resize(n, vector<int> (n, 1e9));
    D.assign(n, INT_MAX);
}
void Dijkstra(int st) {
    priority_queue<ii, vector<ii>, greater<ii>> q;
    D[st] = 0;
    q.push({0, st});
    while (!q.empty()) {
        int u = q.top().Y;
        q.pop();
        for (int v = 0; v < n; v++) {
            if (a[u][v] != INT_MAX) {
                int d_u_v = a[u][v];
                if (D[u] + d_u_v < D[v]) {
                    D[v] = D[u] + d_u_v;
                    q.push({D[v], v});
                }
            }
        }
    }
    for (int i = 0; i < n; i++) cout << D[i] << " ";
}
int main() {
    cin >> n >> st;
    reinit();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];
    Dijkstra(st);
}
// 7 0
// 0          20         5          17         1000000000 1000000000 1000000000
// 20         0          1000000000 1          1000000000 1000000000 1
// 5          1000000000 0          25         3          10         1000000000
// 17         1          25         0          15         1000000000 1000000000
// 1000000000 1000000000 3          15         0          1          1000000000
// 1000000000 1000000000 10         1000000000 1          0          1
// 1000000000 1          1000000000 1000000000 1000000000 1          0

// 0 11 5 12 8 9 10 
