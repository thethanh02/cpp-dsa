#include <bits/stdc++.h>
using namespace std;
#define ii pair<int, int>
int v, e, x, y, stplt_bandau;
bool vs[1001];
vector<vector<int>> adj;
vector<ii> dinhtru;
void reinit() {
    dinhtru.clear();
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
void DinhTru() {
    int ans = 0;
    for (int i = 1; i <= v; i++) {
        vs[i] = 1;
        int tmp = TPLT();
        if (stplt_bandau < tmp) dinhtru.push_back({tmp, i});
        memset(vs, 0, sizeof(vs));
    }
}
bool cmp(ii a, ii b) {
    if (a.first > b.first) return 1;
    else if (a.first == b.first) {
        if (a.second < b.second) return 1;
        return 0;
    }
    return 0;
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
        stplt_bandau = TPLT();
        DinhTru();
        sort(dinhtru.begin(), dinhtru.end(), cmp);
        if (!dinhtru.empty()) cout << dinhtru[0].second;
        else cout << 0;
        cout << endl;
    }
}