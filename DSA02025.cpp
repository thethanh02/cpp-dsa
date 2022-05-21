#include <bits/stdc++.h>
using namespace std;

int c[15][15], vs[15], n, ans = INT_MAX; 
void Try(int i, int sum, int u) {
    vs[u] = 1;
    if (i == n) {
        ans = min(ans, sum);
        return;
    }
    for (int v = 0; v < n; v++) {
        if (!vs[v] && sum + c[u][v] < ans) {
            Try(i + 1, sum + c[u][v], v);
            vs[v] = 0;
        }
    }
}
int main() {
    memset(c, 0, sizeof(c));
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n - 1; i++) {
        vector<int> mark(26, 0);
        for (int j = 0; j < v[i].size(); j++) mark[v[i][j] - 'A']++;
        for (int j = i + 1; j < n; j++) {
            for (int x = 0; x < v[j].size(); x++)
                if (mark[v[j][x] - 'A'] == 1) c[i][j]++, c[j][i]++;
        }
    }
    for (int u = 0; u < n; u++) {
        memset(vs, 0, sizeof(vs));
        Try(1, 0, u);
    }
    cout << ans;
}