#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    int n, k;
    cin >> n >> k;
    ll a[n], s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    k = min(k, n - k);
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (i < k) s1 += a[i];
        s2 += a[i];
    }
    cout << s2 - 2 * s1 << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}
