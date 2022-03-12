#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 +7;
#define ll long long

void Solution() {
    int n;
    cin >> n;
    ll a[n], sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++) 
        sum = (sum + a[i] * i % mod) % mod;
    cout << sum << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}
