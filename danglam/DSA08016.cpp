#include<bits/stdc++.h>
using namespace std;

int n = 10;
int lft[] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int rght[] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
const string en = "1238004765";

string rotateHex(string u, int pos[]) {
    string s = "";
    for (int i = 0; i < n; i++) s += u[pos[i]];
    return s;
}
void update(map<string, int>& mp, queue<pair<string, int>> &q, string u, int v, int pos[]) {
    string tmp = rotateHex(u, pos);
    if (mp.find(tmp) == mp.end()) {
        mp[tmp] = mp[u] + 1;
        q.push({tmp, v + 1});
    }
}
int Solution(int lft[], int rght[], string st) {
    map<string, int> mp;
    queue<pair<string, int>> q;
    int v = 0;
    q.push({st, 0});
    while (!q.empty()) {
        string u = q.front().first; 
        v = q.front().second;
        q.pop();
        if (u == en) return mp[en];
        if (v >= 15) break;
        update(mp, q, u, v, lft);
        update(mp, q, u, v, rght);
    }
    return v;
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
        cout << Solution(lft, rght, st) << endl;
    }
}