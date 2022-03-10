#include <bits/stdc++.h>
using namespace std;
int n, k, a[100001];
void Solution() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    int pos = lower_bound(a, a + n, k) - a;
    if (a[pos] == k) cout << pos + 1 << endl;
    else cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution();
    }
}
