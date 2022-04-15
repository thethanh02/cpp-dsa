#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, m = 0;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x]++;
            m = max(m , mp[x]);
        }
        if (m > n / 2) {
            map<int, int>::iterator tmp;
            for (tmp = mp.begin(); tmp != mp.end(); tmp++) {
                int idx = tmp->second;
                if (idx == m) {
                    cout << tmp->first << endl;
                    break;
                }
            }
        } else cout << "NO\n";
    }
}