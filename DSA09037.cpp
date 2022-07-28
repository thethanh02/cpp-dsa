#include <bits/stdc++.h>
using namespace std;
int k, n, m;
vector<vector<int>> adj;
vector<int> pos, vs, res;
void BFS(int x) {
    queue<int> q;
    q.push(x);
    vs[x] = 1;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v:adj[u])
            if (!vs[v]) {
                q.push(v);
                vs[v] = 1;
            }
    }
}
void Solution() {
    int ans = 0;
    for (int i:pos) {
        vs.assign(n + 1, 0);
        BFS(i);
        for (int j = 1; j <= n; j++)
            if (vs[j]) res[j]++;
    }
    for (int i:res) if (i == k) ans++;
    cout << ans << endl;
}
int main() {
    cin >> k >> n >> m;
    pos.resize(k);
    adj.resize(n + 1);
    res.assign(n + 1, 0);
    for (int &i:pos) cin >> i;
    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
    }
    Solution();
}
