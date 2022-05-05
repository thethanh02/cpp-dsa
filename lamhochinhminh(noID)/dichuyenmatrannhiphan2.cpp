#include<bits/stdc++.h>
using namespace std;
struct Matrix {
    int x, y; string num;
};
int n;
const string Hex = "123456789ABCDEF";
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
int Pow(string s) {
    reverse(s.begin(), s.end());
    int res = 0;
    for (int i = 0; i < 4; i++) {
        if (s[i] == '1') res += pow(2, i);
    }
    return res;
}
string bin_to_hex(string s) {
    string ans;
    while (s.size() % 4 != 0) s.insert(s.begin(), '0');
    for (int i = 0; i < s.size(); i += 4) {
        string tmp = s.substr(i, 4);
        ans += Hex[Pow(tmp) - 1];
    }
    return ans;
}
int main() {
	// freopen("test.inp", "r", stdin);
	// freopen("test.out", "w", stdout);
    double start = (double)clock();
    cin >> n;
    memset(vs, 0, sizeof(vs));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) cin >> a[i][j];
    string A = maxBinarynum();
    cout << bin_to_hex(A);
    double end = (double)clock();
    cout << endl << (end - start)/CLOCKS_PER_SEC << "s";
}