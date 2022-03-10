#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <ll> fb(100);

void Pre() {
    fb[1] = 1;
    fb[2] = 1;
    for (ll i = 3; i < 92; i++) fb[i] = fb[i - 1] + fb[i - 2];
}

char kth_character(ll n, ll k) {
    if (n == 1 && k == 1) return '0';
    if (n == 2 && k == 1) return '1';
    if (n == 3 && k == 1) return '0';
    if (n == 3 && k == 2) return '1';

    if (k > fb[n - 2]) {
        return kth_character(n - 1, k - fb[n - 2]);
    }
    return kth_character(n - 2, k);
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