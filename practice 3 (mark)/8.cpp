#include <bits/stdc++.h>
using namespace std;
int v, e, x, y, ans;
int vs[1005]; // 0: chua, 1: dang, 2: da tham
vector<vector<int>> adj;
void reinit() {
    adj.clear();
    adj.resize(v + 5);
    memset(vs, 0, sizeof(vs));
}
int DFS(int u) {
    vs[u] = 1;
    for (int i : adj[u]) {
        if (vs[i] == 0) {
            if (DFS(i)) return 1;
        } else if (vs[i] == 1) return 1;
    }
    vs[u] = 2;
    return 0;
}
void Check_ChuTrinh() {
    for (int i = 1; i <= v; i++) {
        memset(vs, 0, sizeof(vs));
        if (DFS(i)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
        }
        Check_ChuTrinh();
    }
}