#include <bits/stdc++.h>
using namespace std;
int n, k, ok, c[2000];
void in() {
    for (int i = 1; i <= k; i++) cout << c[i] << " ";
    cout << endl;
}
void sinh() {
    int i = k, j;
    while (i > 0 && c[i] - c[i - 1] == 1) i--;
    if (i != 0) c[i]--;
    for (j = i + 1; j <= k; j++) c[j] = n - k + j;
    in();
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ok = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++) {
            cin >> c[i];
            if (i != c[i]) ok = 1;
        }
        if (ok) sinh();
        else {
            for (int i = n - k + 1; i <= n; i++) cout << i << " ";
            cout << endl;
        }
    }
}