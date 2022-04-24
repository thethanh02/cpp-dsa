#include <bits/stdc++.h>
using namespace std;

int n = 10, ans = 100;
int leftCW[] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int rightCW[] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
int leftCCW[] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
int rightCCW[] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};
string en = "1238004765", st;

string rotateHex(string u, int pos[]) {
    string s = "";
    for (int i = 0; i < n; i++) s += u[pos[i]];
    return s;
}
void update(map<string, int>& mp, queue<pair<string, int>>& q, string u, int v, int pos[], int k) {
    string tmp = rotateHex(u, pos);
    if (!k && mp[tmp] == 0) mp[tmp] = mp[u] + 1;
    q.push({tmp, v + 1});
}
void Solution(queue<pair<string, int>> q, map<string, int>& mp, string st, int k, int left[], int right[]) {
    string u;
    int v = 0;
    q.push({st, 0});
    while (!q.empty()) {
        u = q.front().first;
        v = q.front().second;
        q.pop();

        if (k && mp[u] > 0) ans = min(ans, mp[u] + v);
        update(mp, q, u, v, left, k);
        update(mp, q, u, v, right, k);
        if (v >= 13) break;
    }
}
int Result() {
    map<string, int> mp;
    queue<pair<string, int>> qCW, qCCW;
    Solution(qCW, mp, st, 0, leftCW, rightCW);
    Solution(qCCW, mp, en, 1, leftCCW, rightCCW);
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ans = 100;
        st = "";
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            st += to_string(x);
        }
        cout << Result() << endl;
    }
}