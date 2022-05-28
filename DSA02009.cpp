#include <bits/stdc++.h>
using namespace std;
int n, k, sum;
vector<int> a, vs;
bool Try(int index, int s, int cnt) {
    if (s == sum) {
        if (cnt == k - 2) return 1;
        return Try(0, 0, cnt + 1);
    }
    for (int i = index; i < n; i++) {
        if (!vs[i] && s + a[i] <= sum) {
            vs[i] = 1;
            if (Try(i + 1, s + a[i], cnt)) return 1;
            vs[i] = 0;
        }
    }
    return 0;
}
int Solution() {
    if (k == 1) return 1;
    if (n < k) return 0;
    if (sum % k != 0) return 0;
    sum /= k;
    vs[0] = 1;
    if (Try(0, a[0], 0)) return 1;
    return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n >> k;
        a.resize(n);
        vs.assign(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        cout << Solution() << endl;
    }
}

