#include <bits/stdc++.h>
using namespace std;
#define ii pair<int, int>

int v, e, x, y, u;
vector<bool> vs;
vector<vector<int>> adj;
vector<ii> STree;
void reinit() {
    adj.clear();
    adj.resize(v + 1);
    STree.clear();
    vs.assign(v + 1, 0);
}
void BFS(int u) {
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        for (int i : adj[x]) {
            if (!vs[i]) {
                vs[i] = 1;
                STree.push_back({x, i});
                q.push(i);
            }
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
        BFS(u);
        if (STree.size() == v - 1) {
            for (auto i : STree) 
                cout << i.first << " " << i.second << endl;
        } else cout << -1 << endl;
    }
}