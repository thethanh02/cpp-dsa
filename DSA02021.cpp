#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
vector<ll> a;
ll Try(int n, ll k) {
    if (k <= s.size()) return k - 1;

    if (k > a[n] + 1) return Try(n - 1, k - a[n] - 1);
    else if (k == a[n] + 1) return Try(n - 1, a[n]);
    return Try(n - 1, k);
}
int main() {
    ll t, k;
    cin >> t;
    while (t--) {
        a.clear();
        cin >> s >> k;
        int i = 0;
        a.push_back((int) s.size());
        while (a[i] < k) a.push_back(2 * a[i++]);
        a.pop_back();
        cout << s[Try(a.size() - 1, k)] << endl;
    }
}