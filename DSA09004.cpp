#include <bits/stdc++.h>
using namespace std;

bool vs[1001];
vector<vector<int>> ls;
void DFS(int u) {
    vs[u] = 1;
    cout << u << " ";
    for (int i = 0; i < ls[u].size(); i++) {
        int tmp = ls[u][i];
        if (vs[tmp] == 0) DFS(tmp);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ls.clear();
        memset(vs, 0, sizeof(vs));
        int v, e, x, y, u;
        cin >> v >> e >> u;
        ls.resize(v + 5);
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            ls[x].push_back(y);
            ls[y].push_back(x);
        }
        DFS(u);
        cout << endl;
    }
}