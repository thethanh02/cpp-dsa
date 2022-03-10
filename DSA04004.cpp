#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <ll> fb(100);

void Pre() {
    fb[1] = 1;
    for (ll i = 2; i < 52; i++) fb[i] = fb[i - 1] * 2 + 1;
}

ll kth_character(ll n, ll k) {
    if (k == 1) return 1;

    ll p = fb[n - 1] + 1;
    if(k == p) return n;
    if (k > p) return kth_character(n - 1, k - p);
    return kth_character(n - 1, k);
}

int main() {
    int t;
    cin >> t;
    Pre();
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << kth_character(n, k) << endl;
    }
}