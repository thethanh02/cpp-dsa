#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;
int Solution() {
    int ans = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int tmp = a[i] + a[j];
            int pos = lower_bound(a.begin() + j + 1, a.end(), m - tmp) - a.begin();
            if (tmp + a[pos] == m) return tmp + a[pos];
            else if (tmp + a[pos] < m) ans = max(ans, tmp + a[pos]);
            else if (pos > j + 1) ans = max(ans, tmp + a[pos - 1]);
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        a.resize(n);
        for (auto& i : a) cin >> i;
        cout << Solution() << endl;
    }
}