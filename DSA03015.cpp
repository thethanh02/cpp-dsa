#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    int n, m, s;
    cin >> n >> s >> m;
    if (n < m || (s >= 7 && 6 * n < 7 * m)) {
        cout << -1 << endl;
        return;
    }
    int tmp = m * s / n;
    cout << (tmp * n >= m * s ? tmp : tmp + 1) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}
