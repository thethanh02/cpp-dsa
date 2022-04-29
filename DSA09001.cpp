#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int v, e, x, y;
        cin >> v >> e;
        vector<vector<int>> res(v + 1);
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            res[x].push_back(y);
            res[y].push_back(x);
        }
        for (int i = 1; i <= v; i++) {
            cout << i << ": ";
            for (auto j : res[i]) cout << j << " ";
            cout << endl;
        }
    }
}