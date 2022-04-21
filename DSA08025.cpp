#include<bits/stdc++.h>
using namespace std;

int lft[] = {1, -1, 2, 2, 1, -1, -2, -2};
int rght[] = {2, 2, 1, -1, -2, -2, 1, -1};
map<string, int> mp;
string st, en;

int Test(char x, char y) {
    if (x <= 'h' && x >= 'a' && y <= '8' && y >= '1') return 1;
    return 0;
}
string rotateRect(string u, int i) {
    char x = u[0] + lft[i], y = u[1] + rght[i];
    string s = "";
    if (Test(x, y)) s = s + x + y;
    return s;
}
void Solution() {
    map<string, int> mp;
    queue<string> q;
    q.push(st);
    mp[st] = 1;
    while (!q.empty()) {
        string u = q.front(); q.pop();
        if (u == en) {
            cout << mp[en] - 1 << endl;
            return;
        }
        for (int i = 0; i < 8; i++) {
            string tmp = rotateRect(u, i);
            if (mp.find(tmp) == mp.end() && tmp != "") {
                mp[tmp] = mp[u] + 1;
                q.push(tmp);
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> st >> en;
        Solution();
    }
}