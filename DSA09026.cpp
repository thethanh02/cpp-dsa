#include <bits/stdc++.h>
using namespace std;
int v, e, x, y, u, en;
bool vs[1005];
vector<vector<int>> ls;
int truoc[1005];
void Trace(int en) {
    if (en == 0) return;
    Trace(truoc[en]);
    cout << en << " ";
}
void BFS(int u) {
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        for (int i : ls[x]) {
            if (!vs[i]) {
                truoc[i] = x;
                vs[i] = 1;
                if (i == en) {
                    Trace(en);
                    return;
                }
                q.push(i);
            }
        }
    }
}
void reinit() {
    ls.clear();
    memset(vs, 0, sizeof(vs));
    memset(truoc, 0, sizeof(truoc));
    ls.resize(v + 5);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e >> u >> en;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            ls[x].push_back(y);
        }
        BFS(u);
        if (truoc[en] == 0) cout << -1;
        cout << endl;
    }
}