#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, ans;
bool vs[1001];
vector<vector<int>> ls;
void DFS(int u) {
    vs[u] = 1;
    // cout << u << " ";
    for (int i = 0; i < ls[u].size(); i++) {
        int tmp = ls[u][i];
        if (!vs[tmp]) DFS(tmp);
    }
}
void canhcau() {
    for (int i = 1; i <= v; i++) {
        for (int u = 0; u < ls[i].size(); u++) {
            int j = ls[i][u];
            ls[i].erase(ls[i].begin() + u);
            DFS(i);
            bool check = 0;
            for (int k = 1; k <= v; k++) if (!vs[k]) check = 1;
            if (check && i < j) cout << i << " " << j << " ";
            ls[i].insert(ls[i].begin() + u, j);
            memset(vs, 0, sizeof(vs));
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
        cin >> v >> e;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            ls[x].push_back(y);
            ls[y].push_back(x);
        }
        canhcau();
        cout << endl;
    }
}