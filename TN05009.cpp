#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, st, en;
vector<vector<int>> adj;
int truoc[1005], vs[1005];
int DFS(int u) { 
    vs[u] = 1;
    for (auto i : adj[u]) {
        if (vs[i] == 0) {
            truoc[i] = u;
            if (DFS(i)) return 1;
        } else {
            if (i == st && truoc[u] != i) {
                en = u;
                return 1;
            }
        }
    }
    return 0;
}
void Trace(int en) {
    if (en == 0) return;
    Trace(truoc[en]);
    cout << en << " ";
}
void reinit() {
    adj.clear();
    adj.resize(v + 5);
    memset(truoc, 0, sizeof(truoc));
    memset(vs, 0, sizeof(vs));
    st = 1;
    en = 0;
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
        for (int i = 1; i <= v; i++) 
            sort(adj[i].begin(), adj[i].end());
        if (!DFS(st)) cout << "NO";
        else {
            Trace(en);
            cout << st;
        }
        cout << endl;
    }
}