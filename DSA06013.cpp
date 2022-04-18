#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, count = 0;
        cin >> n >> x;
        int a[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == x) count++;
        }
        if (count == 0) count = -1;
        cout << count << endl;
    }
    return 0;
}
