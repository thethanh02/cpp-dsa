#include <bits/stdc++.h>
using namespace std;
int n, k, sum, ans;
vector<int> a;
void Try(int i, int s, int cnt) {
    if (cnt == k && i == n) ans++;
    if (i >= n || cnt >= k) return;
    if (s + a[i] == sum) Try(i + 1, 0, cnt + 1);
    Try(i + 1, s + a[i], cnt);
}
int Solution() {
    if (k == 1) return 1;
    if (n < k) return 0;
    if (sum % k != 0) return 0;
    sum /= k;
    ans = 0;
    Try(0, 0, 0);
    return ans;
}
int main() {
    sum = 0;
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << Solution() << endl;
}

