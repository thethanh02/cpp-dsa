#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, vt = -1;
        cin >> n >> x;
        int a[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (x == a[i]) vt = 1;
        }
        cout << vt << endl;
    }
    return 0;
}
