#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, u;
// bool vs[1001];
vector<vector<int>> adj;
int EULER() {
    // 0: k ton tai, 1: duong di euler, 2: chu trinh euler
    int deg_in[v + 1] = {0}, deg_out[v + 1];
    for (int i = 1; i <= v; i++) {
        deg_out[i] = adj[i].size();
        for (auto j : adj[i]) deg_in[j]++;
    }
    for (int i = 1; i <= v; i++) 
        if (deg_in[i] != deg_out[i]) return 0;
    return 1;
}
void reinit() {
    adj.clear();
    // memset(vs, 0, sizeof(vs));
    adj.resize(v + 5);
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
            // adj[y].push_back(x);
        }
        cout << EULER() << endl;
    }
}