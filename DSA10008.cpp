#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
#define X first
#define Y second

int v, e, x, y, w, st;
vector<vector<ii>> adj;
vector<int> D, par;
void reinit() {
    adj.clear();
    adj.resize(v + 1);
    D.assign(v + 1, 1e9);
    par.assign(v + 1, -1);
}
void Dijkstra(int st) {
    priority_queue<ii, vector<ii>, greater<ii>> q;
    D[st] = 0;
    q.push({0, st});
    while (!q.empty()) {
        int u = q.top().Y;
        q.pop();
        for (ii i : adj[u]) {
            int d_u_v = i.X, v = i.Y;
            if (D[u] + d_u_v < D[v]) {
                D[v] = D[u] + d_u_v;
                // par[v] = u;
                q.push({D[v], v});
            }
        }
    }
    for (int i = 1; i <= v; i++) cout << D[i] << " ";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e >> st;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y >> w;
            adj[x].push_back({w, y});
            adj[y].push_back({w, x});
        }
        Dijkstra(st);
        cout << endl;
    }
}