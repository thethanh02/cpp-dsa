#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, ans;
int color[1001]; // 1: chua tham, 2: dang tham, 3: da tham
vector<vector<int>> ls;
bool DFS(int u) {
    color[u] = 1;
    for (int i : ls[u]) {
        if (color[i] == 0) {
            if (DFS(i)) return 1;
        } else if (color[i] == 1) return 1; // co canh nguoc (i, u)
    }
    color[u] = 2;
    return 0;
}
void ChuTrinh() {
    for (int i = 1; i <= v; i++) {
        memset(color, 0, sizeof(color));
        if (DFS(i)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
void reinit() {
    ls.clear();
    memset(color, 0, sizeof(color));
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
            // ls[y].push_back(x);
        }
        ChuTrinh();
        cout << endl;
    }
}