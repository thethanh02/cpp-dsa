#include<bits/stdc++.h>
using namespace std;
struct Matrix {
    int x, y; string num;
};
int n;
string a[105][105];
bool vs[105][105];
void update(Matrix A, queue<Matrix>& q2, string& maxi, int i, int j) {
    Matrix tmp;
    if (A.x + i < n && A.y + j < n) {
        tmp.x = A.x + i, tmp.y = A.y + j, tmp.num = A.num + a[tmp.x][tmp.y];
        if (tmp.num > maxi) {
            maxi = tmp.num;
            vs[tmp.x][tmp.y] = 1;
            q2.push(tmp);
        } else if (tmp.num == maxi && !vs[tmp.x][tmp.y]) {
            q2.push(tmp);
            vs[tmp.x][tmp.y] = 1;
        }
    }
}
string maxBinarynum() {
    queue<Matrix> q1;
    Matrix A, rgt, und;
    A.x = 0, A.y = 0, A.num = a[0][0];
    bool c1, c2;
    string ans, maxi;
    q1.push(A);
    while (1) {
        queue<Matrix> q2;
        while (!q1.empty()) {
            A = q1.front(); q1.pop();
            update(A, q2, maxi, 0, 1);
            update(A, q2, maxi, 1, 0);
        }
        while (!q2.empty()) {
            A = q2.front();
            if (A.num < maxi) q2.pop();
            else {
                q1 = q2;
                break;
            }
        }
        A = q1.front();
        if (A.x == n - 1 && A.y == n - 1) break; 
    }
    return maxi;
}
int main() {
	// freopen("test.inp", "r", stdin);
	// freopen("test.out", "w", stdout);
    cin >> n;
    memset(vs, 0, sizeof(vs));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) cin >> a[i][j];
    string A = maxBinarynum();
    cout << A;
}