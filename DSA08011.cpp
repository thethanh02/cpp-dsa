#include <bits/stdc++.h>
using namespace std;
int tim(vector<char> ds, char x) {
    for (int i = 0; i < ds.size(); i++)
        if (ds[i] == x) return 1;
    return 0;
}
int Solution(string st, string en, vector<char> ds, map<string, bool> check) {
    if (st == en) return 0;
    map<string, int> res;
    res[st] = 1;
    queue<string> q;
    q.push(st);
    while (res[en] == 0) {
        string u = q.front();
        q.pop();
        for (int i = 0; i < u.size(); i++) {
            string tmp = u;
            for (int j = 0; j < ds.size(); j++) {
                tmp[i] = ds[j];
                if (check.find(tmp) != check.end() && res[tmp] == 0) {
                    q.push(tmp);
                    res[tmp] = res[u] + 1;
                }
            }
        }
    }
    return res[en];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        map<string, bool> check;
        vector<char> ds;
        int n, i, j;
        string st, en, s;
        cin >> n >> st >> en;
        for (i = 0; i < n; i++) {
            cin >> s;
            check[s] = 1;
            for (j = 0; j < s.size(); j++)
                if (!tim(ds, s[j])) ds.push_back(s[j]);
        }
        cout << Solution(st, en, ds, check) << endl;
    }
    return 0;
}