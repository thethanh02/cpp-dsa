#include <bits/stdc++.h>
using namespace std;
void find_around(int i, int j, vector<vector<char>> &a) {
    a[i][j] = '.';
    for (int x = i - 1; x <= i + 1; x++)
        for (int y = j - 1; y <= j + 1; y++)
            if (a[x][y] == 'W') find_around(x, y, a);
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n + 2, vector<char>(m + 2, '.'));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];
        
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            if (a[i][j] == 'W') {
                find_around(i, j, a);
                count++;
            }
    }
    cout << count << endl;
}
