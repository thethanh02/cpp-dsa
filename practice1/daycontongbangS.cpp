#include <bits/stdc++.h>
using namespace std;

int n, k, a[200], v[200];
long long s, ans = -1;
void Try(int i) {
    int j;
    for (j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            long long sum = 0, cnt = 0;
            for (int h = 1; h <= k; h++) {
                if (a[h] > 0) {
                    sum += v[a[h]];
                    cnt++;
                }
            }
            if (sum == s) {
                ans = cnt;
                return;
            }
        } else Try(i + 1);
    }
}
int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (k = 1; k <= n; k++) {
        Try(1);
        if (ans != -1) break;
    }
    cout << ans;
}