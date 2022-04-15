#include <bits/stdc++.h>
#define M 101
using namespace std;
int n, a[M][M], check;
int row[] = {1, 0, 0, -1};
int col[] = {0, -1, 1, 0};
string ch = "DLRU";
char ans[100];
bool vis[M][M];
vector<string> res;

void Init() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            vis[i][j] = false;
        }
}
int Test(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < n && a[x][y] && !vis[x][y])
        return true;
    return false;
}
void DFS(int x, int y, int i) {
    vis[x][y] = true;
    if(x == n - 1 && y == n - 1) {
        string tmp = "";
        for (int k = 0; k < i; k++) tmp += ans[k];
        res.push_back(tmp);
        check = 1;
    }
    for (int k = 0; k < 4; k++)
        if (Test(x + row[k], y + col[k])) {
            ans[i] = ch[k];
            DFS(x + row[k], y + col[k], i + 1);
            vis[x + row[k]][y + col[k]] = false;
        }
}
void Solution() {
    res.clear();
    check = 0;
    if (a[0][0]) {
        DFS(0, 0, 0);
        if (!check) cout << -1;
        else {
            cout << res.size();
            for (int i = 0; i < res.size(); i++) cout << " " << res[i];
        }
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