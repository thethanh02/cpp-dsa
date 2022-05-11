#include <bits/stdc++.h>
using namespace std;
int v, e, x, y, u, en;
bool vs[1005];
vector<vector<int>> adj;
int truoc[1005];
void reinit() {
    adj.clear();
    adj.resize(v + 5);
    memset(vs, 0, sizeof(vs));
    memset(truoc, 0, sizeof(truoc));
}
void Trace(int u) {
    if (u == 0) return;
    Trace(truoc[u]);
    cout << u << " ";
}
void BFS(int u) {
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()) {
        x = q.front(); q.pop();
        for (int i : adj[x]) {
            if (!vs[i]) {
                truoc[i] = x;
                vs[i] = 1;
                if (i == en) {
                    Trace(en);
                    return;
                }
                q.push(i);
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e >> u >> en;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            adj[x].push_back(y);
        }
        BFS(u);
        if (truoc[en] == 0) cout << -1;
        cout << endl;
    }
}