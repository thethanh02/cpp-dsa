#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, cnt = 1;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) 
        if (a[i + 1] - a[i] > k) cnt++;
    cout << cnt;
}
