#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii; // X: cuoi, Y: trong so
#define X first
#define Y second

int n, m, ans;
int vs[1001];
vector<vector<ii>> adj;

void reinit() {
    adj.clear();
    adj.resize(n + 1);
    memset(vs, 0, sizeof(vs));
}

bool BFS(int st) {
    queue<ii> q;
    q.push({st, 0});
    vs[st] = 1;
    while (!q.empty()) {
        int u = q.front().X, sum = q.front().Y; q.pop();
        for (ii v : adj[u]) {
            if (!vs[v.X]) {
                vs[v.X] = 1;
                q.push({v.X, sum + v.Y});
            } else if (v.X == st && sum + v.Y < 0) return 1;
        }
    }
    return 0;
}
bool ChuTrinh() {
    for (int i = 1; i <= n; i++) {
        memset(vs, 0, sizeof(vs));
        if (BFS(i)) return 1;
    }
    return 0;
}

int main() {
    int t, u, v, w;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        reinit();
        while (m--) {
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
        }
        cout << ChuTrinh() << endl;
    }
}