#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n + 1];
        for (int i = 0; i < n; i++) cin >> a[i];
        long long ans = -1e9, sum = 0;
        for (int i = 0; i < n; i++) {
            sum = max(a[i], sum + a[i]);
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
}
