#include<bits/stdc++.h>
using namespace std;
struct Matrix {
    int x, y; string num;
};
int n;
string a[105][105];
// int di[] = {0, 1};
// int dj[] = {1, 0};
string maxBinarynum() {
    queue<Matrix> q;
    Matrix tmp, rgt, und;
    tmp.x = 0, tmp.y = 0, tmp.num = a[0][0];
    bool c1, c2;
    string ans;
    q.push(tmp);
    while (!q.empty()) {
        tmp = q.front(); q.pop();
        c1 = c2 = 0;
        if (tmp.y + 1 < n) {
            rgt.x = tmp.x + 0, rgt.y = tmp.y + 1, rgt.num = tmp.num + a[rgt.x][rgt.y];
            c1 = 1;
            if (rgt.x == n - 1 && rgt.y == n - 1) ans = max(ans, rgt.num);
        }
        if (tmp.x + 1 < n) {
            und.x = tmp.x + 1, und.y = tmp.y + 0, und.num = tmp.num + a[und.x][und.y];
            c2 = 1;
            if (und.x == n - 1 && und.y == n - 1) ans = max(ans, und.num);
        }
        if (c1 && c2) {
            if (rgt.num > und.num) q.push(rgt);
            else if(rgt.num < und.num) q.push(und);
            else {
                q.push(rgt);
                q.push(und);
            }
        } else if (c1 && !c2) {
            q.push(rgt);
        } else if (!c1 && c2) {
            q.push(und);
        } else break;
    }
    return ans;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) cin >> a[i][j];
    string tmp = maxBinarynum();
    cout << tmp;
}