#include <bits/stdc++.h>
using namespace std;
int n, k, vis[100], a[100], cnt = 0;
void Try(int i) {
    int j;
    for (j = 0; j <= 1; j++) {
        vis[i] = j;
        if (i == n) {
            int s = 0;
            for (int h = 1; h <= n; h++)
                if (vis[h]) s += a[h];
            if (s == k) {
                cnt++;
                for (int h = 1; h <= n; h++)
                    if (vis[h]) cout << a[h] << " ";
                cout << endl;
            }
        } else
            Try(i + 1);
    }
}
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a, a + n);
    Try(1);
    cout << cnt;
}
