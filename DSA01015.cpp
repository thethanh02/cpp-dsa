#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll c, n;
void Try(ll i) {
    if (i > c) return;
    if (i % n == 0) c = min(c, i);
    Try(i * 10);
    Try(i * 10 + 9);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        c = 1e18;
        cin >> n;
        Try(9);
        cout << c << endl;
    }
    return 0;
}
