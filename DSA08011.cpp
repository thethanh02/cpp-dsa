#include <bits/stdc++.h>
using namespace std;
int tim(vector<char> ds, char x) {
    for (int i = 0; i < ds.size(); i++) if (ds[i] == x) return 1;
    return 0;
}
int Solution(string st, string en, vector<char> ds, map<string, bool> check) {
    if (st == en) return 0;
    int a;
    // map<string, int> mp;
    // mp[st] = 1;
    queue <pair<string, int>> q;
    q.push({st, 1});
    while (q.size()) {
        string u = q.front().first;
        int v = q.front().second; 
        q.pop();
        for (int i = 0; i < u.size(); i++) {
            string tmp = u;
            for (int j = 0; j < ds.size(); j++) {
                tmp[i] = ds[j];
                
                if (check.find(tmp) != check.end()) {
                    q.push({tmp, v + 1});
                    check.erase(tmp);
                    //mp[tmp] = 1;
                    a = v + 1;
                    if (tmp == en) return v + 1;
                }
            }
        }
    }
    return a;
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