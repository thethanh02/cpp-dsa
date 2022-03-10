#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int ans = upper_bound(a, a + n, x) - a - 1;
        if (ans >= 0) ans++;
        cout << ans << endl;
    }
}
    