#include <bits/stdc++.h>
using namespace std;
int v, e, x, y, u;
vector<vector<int>> adj;
void reinit() {
    adj.clear();
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
        }
    }
}