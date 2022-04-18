#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum, m = 1e6;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (m > abs(a[i] + a[j])) {
                    m = abs(a[i] + a[j]);
                    sum = a[i] + a[j];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
