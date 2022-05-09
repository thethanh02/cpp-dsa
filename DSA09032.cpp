#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, cnt;
bool vs[100005];
vector<vector<int>> adj;
void reinit() {
    adj.clear();
    adj.resize(v + 5);
    memset(vs, 0, sizeof(vs));
}
void DFS(int u) {
    vs[u] = 1;
    cnt++;
    for (int i : adj[u]) {
        if (!vs[i]) DFS(i);
    }
}
int Result() {
    int ans = 0;
    for (int i = 1; i <= v; i++) {
        cnt = 0;
        if (!vs[i]) DFS(i);
        ans = max(cnt, ans);
    }
    return ans;
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
        cout << Result() << endl;
    }
}