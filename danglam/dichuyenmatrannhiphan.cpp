#include<bits/stdc++.h>
using namespace std;
struct Matrix {
    int x, y; string num;
};
int n;
string a[105][105];
bool vs[105][105];
void update(Matrix A, queue<Matrix>& q0, queue<Matrix>& q1, string& maxi, int i, int j) {
    Matrix tmp;
    if (A.x + i < n && A.y + j < n) {
        tmp.x = A.x + i, tmp.y = A.y + j, tmp.num = A.num + a[tmp.x][tmp.y];
        if (tmp.num > maxi) {
            maxi = tmp.num;
            vs[tmp.x][tmp.y] = 1;
            if (a[tmp.x][tmp.y] == "1") q1.push(tmp);
            else q0.push(tmp);
        } else if (tmp.num == maxi && !vs[tmp.x][tmp.y]) {
            vs[tmp.x][tmp.y] = 1;
            if (a[tmp.x][tmp.y] == "1") q1.push(tmp);
            else q0.push(tmp);
        }
    }
}
string maxBinarynum() {
    queue<Matrix> q;
    Matrix A, rgt, und;
    A.x = 0, A.y = 0, A.num = a[0][0];
    bool c1, c2;
    string ans, maxi;
    q.push(A);
    while (1) {
        queue<Matrix> q0, q1; // queue chứa xâu += "0" và += "1"
        while (!q.empty()) {
            A = q.front(); q.pop();
            update(A, q0, q1, maxi, 0, 1);
            update(A, q0, q1, maxi, 1, 0);
        }
        if (!q1.empty()) q = q1;
        else q = q0;
        A = q.front();
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