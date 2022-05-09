#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, u;
// bool vs[1001];
vector<vector<int>> adj;
int EULER() {
    // 0: k ton tai, 1: duong di euler, 2: chu trinh euler
    int cnt_deg = 0;
    for (int i = 1; i <= v; i++) {
        if (adj[i].size() % 2 == 1) {
            cnt_deg++;
            if (cnt_deg > 2) return 0;
        }
    }
    if (cnt_deg == 0) return 2;
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
            adj[y].push_back(x);
        }
        cout << EULER() << endl;
    }
}