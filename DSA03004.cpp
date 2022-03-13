#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    int n;
    cin >> n;
    ll a[n], s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) s1 = s1 * 10 + a[i];
        else s2 = s2 * 10 +  a[i];
    }
    cout << s1 + s2 << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}
