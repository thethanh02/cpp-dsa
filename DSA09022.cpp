#include <bits/stdc++.h>
using namespace std;

int v, e, x, y, st;
vector<bool> vs;
vector<vector<int>> ls;
void DFS(int st) {
    vs[st] = 1;
    cout << st << " ";
    for (int i = 0; i < ls[st].size(); i++) {
        int tmp = ls[st][i];
        if (vs[tmp] == 0) {
            DFS(tmp);
        }
    }
}
void reinit() {
    ls.clear();
    vs.clear();
    ls.resize(v + 5);
    vs.assign(v + 5, 0);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e >> st;
        reinit();
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            ls[x].push_back(y);
        }
        DFS(st);
        cout << endl;
    }
}