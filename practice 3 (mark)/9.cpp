#include <bits/stdc++.h>
using namespace std;
int v, e, x, y, stplt_bandau;
bool vs[1001];
vector<vector<int>> adj;
void reinit() {
    adj.clear();
    adj.resize(v + 5);
    memset(vs, 0, sizeof(vs));
}
void DFS(int u) {
    vs[u] = 1;
    for (int i : adj[u]) {
        if (!vs[i]) DFS(i);
    }
}
int TPLT() {
    int ans = 0;
    for (int i = 1; i <= v; i++) {
        if (!vs[i]) {
            ans++;
            DFS(i);
        }
    }
    return ans;
}
int DinhTru() {
    int ans = 0;
    for (int i = 1; i <= v; i++) {
        vs[i] = 1;
        if (stplt_bandau < TPLT()) ans++;
        memset(vs, 0, sizeof(vs));
    }
    return ans;
}
int CanhCau() {
    int ans = 0;
    for (int i = 1; i <= v; i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            memset(vs, 0, sizeof(vs));
            int tmp = adj[i][j];
            adj[i].erase(adj[i].begin() + j);
            if (stplt_bandau < TPLT()) ans++;
            adj[i].insert(adj[i].begin() + j, tmp);
        }
    }
    return ans;
}
int main() {
    cin >> v >> e;
    reinit();
    for (int i = 0; i < e; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    stplt_bandau = TPLT();
    cout << DinhTru() << " " << CanhCau() / 2;
}