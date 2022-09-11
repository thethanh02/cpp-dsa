#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& i : v) cin >> i;
    sort(v.begin(), v.end());

    vector <ll> sqr = v;
    for (auto& i : sqr) i = i * i;

    ll tu = 0, vuong = 0, nhon = 0;

    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            ll x = v[i] + v[j];
            ll vuong_tmp = 0;
            ll end = lower_bound(v.begin() + j + 1, v.end(), x) - v.begin();

            auto mid = lower_bound(sqr.begin() + j + 1, sqr.begin() + end, v[i] * v[i] + v[j] * v[j]);

            if (*mid == v[i] * v[i] + v[j] * v[j]) {
                vuong++;
                vuong_tmp = 1;
            }

            ll tu_tmp = (sqr.begin() + end) - mid - vuong_tmp;
            tu += tu_tmp;
            nhon += end - j - 1 - tu_tmp - vuong_tmp;

        }
    }

    cout << nhon << " " << vuong << " " << tu;
}