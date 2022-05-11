#include <bits/stdc++.h>
using namespace std;
struct Matrix {
    int x, y;
    string num;
};
int n;
string a[105][105];
vector<vector<bool>> vs;
const string Hex = "0123456789ABCDEF";

void update(Matrix A, queue<Matrix>& q0, queue<Matrix>& q1, string& maxi, int i, int j) {
    Matrix tmp;
    if (A.x + i < n && A.y + j < n) {
        tmp.x = A.x + i, tmp.y = A.y + j, tmp.num = A.num + a[tmp.x][tmp.y];
        if (tmp.num > maxi) {
            vs[tmp.x][tmp.y] = 1;
            maxi = tmp.num;
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
    Matrix A;
    A.x = A.y = 0, A.num = a[0][0];
    string ans, maxi;
    queue<Matrix> Q;
    Q.push(A);
    while (1) {
        queue<Matrix> q0, q1; // queue += "0" va += "1"
        while (!Q.empty()) {
            A = Q.front(); Q.pop();
            update(A, q0, q1, maxi, 0, 1);
            update(A, q0, q1, maxi, 1, 0);
        }
        if (!q1.empty()) Q = q1;
        else Q = q0;
        A = Q.front();
        if (A.x == n - 1 && A.y == n - 1) break;
    }
    return maxi;
}
int Bin4bits_to_Dec(string s) {
    reverse(s.begin(), s.end());
    int res = 0;
    for (int i = 0; i < 4; i++) 
        if (s[i] == '1') res += pow(2, i);
    return res;
}
void Bin_to_Hex(string s) {
    queue<char> ans;
    while (s.size() % 4 != 0) s = "0" + s;
    for (int i = 0; i < s.size(); i += 4) {
        string tmp = s.substr(i, 4);
        ans.push(Hex[Bin4bits_to_Dec(tmp)]);
    }
    while (ans.size() > 1 && ans.front() == '0') ans.pop();
    while (!ans.empty()) {
        cout << ans.front();
        ans.pop();
    }
}
int main() {
    cin >> n;
    vs.assign(n + 5, vector<bool> (n + 5, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];
    string Bnum = maxBinarynum();
    Bin_to_Hex(Bnum);
    cout << endl;
}