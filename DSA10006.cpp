#include <bits/stdc++.h>
using namespace std;
#define ii pair<int, int>

int v, e, x, y, u;
bool vs[1001];
vector<vector<int>> adj;
vector<ii> STree;
void reinit() {
    adj.clear();
    adj.resize(v + 1);
    STree.clear();
    memset(vs, 0, sizeof(vs));
}
void DFS(int u) {
    vs[u] = 1;
    for (int i : adj[u]) {
        if (!vs[i]) {
            STree.push_back({u, i});
            DFS(i);
        }
    }
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        cin >> v >> e >> u;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        DFS(u);
        if (STree.size() == v - 1) {
            for (auto i : STree) 
                cout << i.first << " " << i.second << endl;
        } else cout << -1 << endl;
    }
}