#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i] && a[i] != b[n - i - 1]) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
    return 0;
}
