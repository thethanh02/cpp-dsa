#include <bits/stdc++.h>
using namespace std;

int n, c[20][20], vs[20], ans = INT_MAX;
void Try(int i, int sum, int u) {
    vs[u] = 1;
    if (i == n) {
        ans = min(ans, sum + c[u][0]);
        return;
    }
    for (int v = 1; v < n; v++) {
        if (!vs[v] && sum + c[u][v] < ans) {
            Try(i + 1, sum + c[u][v], v);
            vs[v] = 0;
        }
    }
}
int main() {
    memset(vs, 0, sizeof(vs));
    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) cin >> c[i][j];
    Try(1, 0, 0);
    cout << ans;
}
