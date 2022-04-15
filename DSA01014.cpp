#include <bits/stdc++.h>
using namespace std;
int n, k, s, a[100], cnt;
void Test() {
    int tmp = 0;
    for (int i = 1; i <= k; i++) tmp += a[i];
    if (tmp == s) cnt++;
}
void Try(int i) {
    int j;
    for (j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) Test();
        else Try(i + 1);
    }
}
int main() {
    while (1) {
        cin >> n >> k >> s;
        if (!n && !k && !s) break;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
    return 0;
}
