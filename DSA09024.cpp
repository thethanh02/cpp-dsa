#include <bits/stdc++.h>
using namespace std;
int v, e, x, y, u;
bool vs[1001];
vector<vector<int>> ls;
void BFS(int u) {
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        cout << x << " ";
        for (int i : ls[x]) {
            if (!vs[i]) {
                vs[i] = 1;
                q.push(i);
            }
        }
    }
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
        cin >> v >> e >> u;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            ls[x].push_back(y);
        }
        BFS(u);
        cout << endl;
    }
}