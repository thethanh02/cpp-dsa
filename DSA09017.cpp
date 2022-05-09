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
        } else if (truoc[u] != i) return 1;
    }
    return 0;
}
string Check_Tree() {
    for (int i = 1; i <= v; i++) {
        memset(vs, 0, sizeof(vs));
        if (DFS(i)) return "NO";
    }
    return "YES";
}
void reinit() {
    adj.clear();
    adj.resize(v + 5);
    memset(truoc, 0, sizeof(truoc));
    memset(vs, 0, sizeof(vs));
    e = v - 1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        cout << Check_Tree() << endl;
    }
}