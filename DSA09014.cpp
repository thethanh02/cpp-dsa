#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, ans;
bool vs[1001];
vector<vector<int>> ls;
bool DFS(int u, int par) {
    vs[u] = 1;
    for (int i : ls[u]) {
        if (!vs[i]) {
            if (DFS(i, u)) return 1;
        } else if (i != par) return 1; // co canh nguoc (i, u)
    }
    return 0;
}
void ChuTrinh() {
    for (int i = 1; i <= v; i++) {
        memset(vs, 0, sizeof(vs));
        if (DFS(i, 0)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
        ChuTrinh();
        cout << endl;
    }
}