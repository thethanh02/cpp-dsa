#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> par, res;
void Trace(int v) {
    if (v == 0) return;
    Trace(par[v]);
    cout << v << " ";
}
void BFS() {
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        if (adj[x].empty()) res.push_back(x);
        else {
            for (int i : adj[x]) {
                q.push(i);
                par[i] = x;
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, u, v;
        cin >> n;
        res.clear();
        adj.clear();
        adj.resize(n + 1);
        par.assign(n + 1, 0);
        n--;
        while (n--) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        BFS();
        sort(res.begin(), res.end());
        for (int i : res) {
            Trace(i);
            cout << endl;
        }
    }
}