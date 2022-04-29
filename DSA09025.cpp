#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, st, en;
vector<bool> vs;
vector<vector<int>> ls;
int truoc[1005];
void DFS(int st) {
    vs[st] = 1;
    for (int i = 0; i < ls[st].size(); i++) {
        int tmp = ls[st][i];
        if (vs[tmp] == 0) {
            truoc[tmp] = st;
            DFS(tmp);
        }
    }
}
void Trace(int en) {
    if (en == 0) return;
    Trace(truoc[en]);
    cout << en << " ";
}
void reinit() {
    ls.clear();
    vs.clear();
    memset(truoc, 0, sizeof(truoc));
    ls.resize(v + 5);
    vs.assign(v + 5, 0);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e >> st >> en;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            ls[x].push_back(y);
        }
        DFS(st);
        if (truoc[en] == 0) cout << -1;
        else Trace(en);
        cout << endl;
    }
}