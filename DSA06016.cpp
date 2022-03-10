#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        int *m1, *m2;
        m1 = max_element(a, a + n);
        m2 = min_element(b, b + m);
        cout << (long long)*m1 * *m2 << endl;
    }
    return 0;
}
