#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], sum = 0, check = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int vt, tongtrc = 0, tongsau;
        for (int i = 0; i < n - 1; i++) {
            tongtrc += a[i];
            tongsau = sum - tongtrc + a[i];
            if (tongtrc == tongsau) {
                cout << i + 1 << endl;
                check = -1;
                break;
            }
        }
        if (check == 1) cout << "-1\n";
    }
    return 0;
}
