#include <bits/stdc++.h>
using namespace std;
int n, a[1001];
void Solution() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = lower_bound(a, a + n, 1) - a;
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution();
    }
}
