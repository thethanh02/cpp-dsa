#include <bits/stdc++.h>
#define M 101
using namespace std;
int n, m, a[M][M], check, cnt;
int row[] = {1, 0};
int col[] = {0, 1};
string ch = "DR";
char ans[100];

void Init() {
    check = 0;
    cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) cin >> a[i][j];
}
int Test(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m)
        return true;
    return false;
}
void DFS(int x, int y, int i) {
    if(x == n - 1 && y == m - 1) {
        cnt++;
        check = 1;
    }
    for (int k = 0; k <= 1; k++)
        if (Test(x + row[k], y + col[k])) {
            ans[i] = ch[k];
            DFS(x + row[k], y + col[k], i + 1);
        }
}
void Solution() {
    if (a[0][0]) {
        DFS(0, 0, 0);
        if (!check) cout << -1;
        else cout << cnt;
    } else cout << -1;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        Init();
        Solution();
        cout << endl;
    }
}
