#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
string Result(vector<ll> v) {
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            ll tmp = v[i] + v[j];
            if (tmp > m) break;
            ll idx = binary_search(v.begin() + j + 1, v.end(), m - tmp);
            if (idx) return "YES";
        }
    }
    return "NO";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        cout << Result(v) << endl;
    }
}