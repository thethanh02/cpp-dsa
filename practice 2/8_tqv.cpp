#include <bits/stdc++.h>
using namespace std;
#define vt vector <int>
#define mt vector <vt>

struct point {
    int x, y;
    point() {}
    point(int a, int b) {
        x = a;
        y = b;
    }
};

int r, c;
mt M;

int bfs() {
    int ans = -1;
    point P;
    mt mark = mt(1001, vt(c, 1001));
    queue <pair <point, int>> Q;
    Q.push({ {0,0}, 0 });
    while (!Q.empty()) {
        P = Q.front().first;
        int cnt = Q.front().second;
        Q.pop();
        if (P.x == r - 1 && P.y == c - 1) return cnt;

        int step;
        // right
        step = M[P.x][P.y] - M[P.x][P.y + 1];
        step = abs(step);
        if (P.y + step >= 0 && P.y + step < c && mark[P.x][P.y + step]) {
            Q.push({ {P.x, P.y + step}, cnt + 1 });
            mark[P.x][P.y + step] = 0;
        }

        // down
        step = M[P.x][P.y] - M[P.x + 1][P.y];
        step = abs(step);
        if (P.x + step >= 0 && P.x + step < r && mark[P.x + step][P.y]) {
            Q.push({ {P.x + step, P.y}, cnt + 1 });
            mark[P.x + step][P.y] = 0;
        }

        step = M[P.x][P.y] - M[P.x + 1][P.y + 1];
        step = abs(step);
        if (P.x + step >= 0 && P.x + step < r && P.y + step >= 0 && P.y + step < c && mark[P.x + step][P.y + step]) {
            Q.push({ {P.x + step, P.y + step}, cnt + 1 });
            mark[P.x + step][P.y + step] = 0;
        }
    }
    return -1;
}

void solution() {
    cin >> r >> c;
    M = mt(1001, vt(1001));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> M[i][j];

    cout << bfs();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solution();
        cout << endl;
    }
}