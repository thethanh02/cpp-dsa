#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef pair<ii, ii> iiii;
#define X first
#define Y second
ii st, en;
int n, ans;
vector<vector<bool>> vs;
vector<vector<char>> a;
void reinit() {
    a.clear();
    a.resize(n, vector<char> (n));
    vs.clear();
    vs.assign(n, vector<bool> (n, 0));
}
int BFS() {
    queue<iiii> q;
    q.push({st, {-1, 0}});
    vs[st.X][st.Y] = 1;
    while (!q.empty()) {
        iiii u = q.front(); q.pop();
        int i = u.X.X, j = u.X.Y,  cnt = u.Y.Y, status = u.Y.X;
        // cout << i << " " << j << " " << status << " " << cnt << endl;
        if (i == en.X && j == en.Y) return cnt;
        for (int v = i + 1; v < n; v++) {
            ii p;
            p.X = v, p.Y = j;
            if (a[p.X][p.Y] == 'X') break;
            if (!vs[p.X][p.Y] && a[p.X][p.Y] == '.') {
                vs[p.X][p.Y] = 1;
                if (status != 1) q.push({p, {1, cnt + 1}});
                else q.push({p, {1, cnt}});
            }
        }
        for (int v = i - 1; v >= 0; v--) {
            ii p;
            p.X = v, p.Y = j;
            if (a[p.X][p.Y] == 'X') break;
            if (!vs[p.X][p.Y] && a[p.X][p.Y] == '.') {
                vs[p.X][p.Y] = 1;
                if (status != 1) q.push({p, {1, cnt + 1}});
                else q.push({p, {1, cnt}});
            }
        }
        for (int v = j + 1; v < n; v++) {
            ii p;
            p.X = i, p.Y = v;
            if (a[p.X][p.Y] == 'X') break;
            if (!vs[p.X][p.Y] && a[p.X][p.Y] == '.') {
                vs[p.X][p.Y] = 1;
                if (status != 0) q.push({p, {0, cnt + 1}});
                else q.push({p, {0, cnt}});
            }
        }
        for (int v = j - 1; v >= 0; v--) {
            ii p;
            p.X = i, p.Y = v;
            if (a[p.X][p.Y] == 'X') break;
            if (!vs[p.X][p.Y] && a[p.X][p.Y] == '.') {
                vs[p.X][p.Y] = 1;
                if (status != 0) q.push({p, {0, cnt + 1}});
                else q.push({p, {0, cnt}});
            }
        }
    }
    return -1;
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        cin >> n;
        reinit();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) cin >> a[i][j];
        cin >> st.X >> st.Y >> en.X >> en.Y;
        cout << BFS() << endl;
    }
}