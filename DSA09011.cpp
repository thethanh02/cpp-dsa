#include <bits/stdc++.h>
using namespace std;
void find_around(int i, int j, vector<vector<int>> &a) {
    a[i][j] = 0;
    for (int x = i - 1; x <= i + 1; x++)
        for (int y = j - 1; y <= j + 1; y++)
            if (a[x][y] == 1) find_around(x, y, a);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n + 2, vector<int>(m + 2, 0));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) cin >> a[i][j];
            
        int count = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                if (a[i][j] == 1) {
                    find_around(i, j, a);
                    count++;
                }
        }
        cout << count << endl;
    }
    return 0;
}
