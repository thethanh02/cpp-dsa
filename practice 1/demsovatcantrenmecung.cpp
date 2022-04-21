#include <bits/stdc++.h>
using namespace std;

int col[] = {-1, 0, 1, 0};
int row[] = {0, -1, 0, 1};

void find_around(int i, int j, vector<vector<char>> &a) {
    a[i][j] = '.';
    for (int h = 0; h < 4; h++) {
        int x = i + row[h], y = j + col[h];
        if (a[x][y] == '#') find_around(x, y, a);
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n + 2, vector<char>(m + 2, '.'));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++)
            if (a[i][j] == '#') {
                find_around(i, j, a);
                cnt++;
            }

    cout << cnt << endl;
}