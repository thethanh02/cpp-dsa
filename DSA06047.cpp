#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int Pytago(vector<ll> a, int n) {
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++) {
            long long sum = a[i] + a[j];
            if (binary_search(a.begin() + j + 1, a.end(), sum) != 0) return 1;
        }
    return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i] * a[i];
        }
        sort(b.begin(), b.end());
        if (Pytago(b, n) == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}