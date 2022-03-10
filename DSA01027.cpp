#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factorial(ll n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    cin >> n;
    ll x = factorial(n);
    vector<int> v(n), pos(n);
    for (int i = 0; i < n; i++) {
        pos[i] = i;
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (x--) {
        for (auto i : pos) cout << v[i] << " ";
        cout << endl;
        next_permutation(pos.begin(), pos.end());
    }
}