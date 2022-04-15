#include <bits/stdc++.h>
using namespace std;
int x, n;
bool cmp(int i, int j) {
    return abs(x - i) < abs(x - j);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int a[n + 1];
        for (int i = 0; i < n; i++) cin >> a[i];
        stable_sort(a, a + n, cmp);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}
