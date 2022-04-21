#include<bits/stdc++.h>
using namespace std;

int n = 10;
int leftCW[] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int rightCW[] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
int leftCCW[] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
int rightCCW[] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};
string en = "1238004765";

string rotateHex(string u, int pos[]) {
    string s = "";
    for (int i = 0; i < n; i++) s += u[pos[i]];
    return s;
}
void update(map<string, int>& mp, queue<pair<string, int>> &q, string u, int v, int pos[], int k) {
    string tmp = rotateHex(u, pos);
    if (!k && mp[tmp] == 0) mp[tmp] = mp[u] + 1;
    q.push({tmp, v + 1});
}
int Solution(int leftCW[], int rightCW[], string st) {
    map<string, int> mp;
    queue<pair<string, int>> qCW, qCCW;
    string u;
    int v = 0, ans = 100;

    qCW.push({st, 0});
    while (!qCW.empty()) {
        u = qCW.front().first; 
        v = qCW.front().second;
        qCW.pop();

        update(mp, qCW, u, v, leftCW, 0);
        update(mp, qCW, u, v, rightCW, 0);
        if (v >= 14) break;
    }
    qCCW.push({en, 0});
    while (!qCCW.empty()) {
        u = qCCW.front().first; 
        v = qCCW.front().second;
        qCCW.pop();

        if (mp[u] > 0) ans = min(ans, mp[u] + v);
        update(mp, qCCW, u, v, leftCCW, 1);
        update(mp, qCCW, u, v, rightCCW, 1);
        if (v >= 14) break;
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string st = "";
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            st += to_string(x);
        }
        cout << Solution(leftCW, rightCW, st) << endl;
    }
}