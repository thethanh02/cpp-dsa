#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a, a + n);
        int ans = -1, m = a[0].first, pos = a[0].second;
        for (int i = 1; i < n; i++) {
            if (a[i].first > m) ans = max(ans, a[i].second - pos);
            if (pos > a[i].second) {
                pos = a[i].second;
                m = a[i].first;
            }
        }
        cout << ans << endl;
    }
}