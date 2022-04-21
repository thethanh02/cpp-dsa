#include<bits/stdc++.h>
using namespace std;

int a[20], b[20], n = 6;
int rght[] = {1, 5, 2, 4, 6, 3};
int lft[] = {4, 1, 3, 5, 2, 6};

string rotateRect(string u, int rotate[]) {
    string s = "";
    for (int i = 0; i < n; i++) s += u[rotate[i] - 1];
    return s;
}
void update(queue<string>& q, map<string, int>& mp, string u, int rotate[]) {
    string tmp = rotateRect(u, rotate);
    if (mp.find(tmp) == mp.end()) {
        mp[tmp] = mp[u] + 1;
        q.push(tmp);
    }
}
void Solution(int lft[], int rght[]) {
    map<string, int> mp;
    queue<string> q;
    string st = "", en = "";
    for (int i = 0; i < n; i++) st += (char)(a[i] + '0');
    for (int i = 0; i < n; i++) en += (char)(b[i] + '0');
    q.push(st);
    while (!q.empty()) {
        string u = q.front(); q.pop();
        if (u == en) {
            cout << mp[en] << endl;
            return;
        }
        update(q, mp, u, lft);
        update(q, mp, u, rght);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        Solution(lft, rght);
    }
}