#include <bits/stdc++.h>
using namespace std;
void in(vector<int> v, int n) {
    for (int i = 0; i < n; i++) cout << v[i];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; int cnt = 0;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < s.size(); i++) {
            v.push_back(s[i] - '0');
            if(v[i] == 1) cnt++;
        }
        int n = v.size();
        if(cnt == n) for (int i = 0; i < n; i++) cout << 0;
        else {
            for (int i = n - 1; i >= 0; i--) {
                if (v[i] == 0) {
                    v[i] = 1;
                    for (int j = n - 1; j > i; j--) v[j] = 0;
                    break;
                }
            }
            in(v, n);
        }
        cout << endl;
    }
}
