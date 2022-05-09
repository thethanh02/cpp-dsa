#include <bits/stdc++.h>
using namespace std;

int v, e, x, y;
bool vs[1005];
vector<vector<int>> adj;
void reinit() {
    adj.clear();
    adj.resize(1005);
    memset(vs, 0, sizeof(vs));  
}
int DFS(int u, int cnt) {
    vs[u] = 1;
    if (cnt == v) return 1;
    for (auto i : adj[u]) {
        if (!vs[i]) {
            if (DFS(i, cnt + 1)) return 1;
            vs[i] = 0;
        }
    }
    return 0;
}
int Hamilton() {
    for (int i = 1; i < adj.size(); i++) {
        memset(vs, 0, sizeof(vs));
        if (DFS(i, 1)) return 1;
    }
    return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        cout << Hamilton() << endl;
    }
}