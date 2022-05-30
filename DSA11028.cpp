#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int height() {
    queue<pair<int, int>> q;
    int ans = 0;
    q.push({1, 0});
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        ans = max(ans, y);
        for (int i : adj[x]) q.push({i, y + 1});
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, u, v;
        cin >> n;
        adj.clear();
        adj.resize(n + 1);
        n--;
        while (n--) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        cout << height() << endl;
    }
}