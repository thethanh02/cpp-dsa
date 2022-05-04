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
        if (vs[tmp] == 0) DFS(tmp);
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
        ans = 0;
        for (int i = 1; i <= v; i++) 
            if (!vs[i]) DFS(i), ans++;
        cout << ans << endl;
    }
}