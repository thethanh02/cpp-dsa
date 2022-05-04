#include <bits/stdc++.h>
using namespace std;
int v, e, x, y, u, en;
bool vs[1005];
vector<vector<int>> ls;
string BFS(int u, int en) {
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        for (int i : ls[x]) {
            if (!vs[i]) {
                vs[i] = 1;
                if (i == en) {
                    return "YES";
                }
                q.push(i);
            }
        }
    }
    return "NO";
}
void reinit() {
    ls.clear();
    memset(vs, 0, sizeof(vs));
    ls.resize(v + 5);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            ls[x].push_back(y);
            ls[y].push_back(x);
        }
        int q;
        cin >> q;
        while (q--) {
            memset(vs, 0, sizeof(vs));
            cin >> u >> en;
            cout << BFS(u, en) << endl;
        }
    }
}