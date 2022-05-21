#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
int color[1001];
vector<vector<int>> adj;

void reinit() {
    adj.clear();
    adj.resize(n + 1);
    memset(color, -1, sizeof(color));
}

bool BFS(int st) {
    queue<int> q;
    q.push(st);
    color[st] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (color[v] == -1) {
                color[v] = 1 - color[u];
                q.push(v);
            } else if (color[v] == color[u]) return 0;
        }
    }
    return 1;
}
string Solution() {
    for (int i = 1; i <= n; i++) 
        if (color[i] == -1) 
            if (!BFS(i)) return "NO";
    return "YES";
}

int main() {
    int t, u, v, w;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        reinit();
        while (m--) {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << Solution() << endl;
    }
}