#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, u;
// bool vs[1001];
vector<vector<int>> adj;
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
    }
}