#include <bits/stdc++.h>
using namespace std;
int n, k, a[50], stt[50];
void thkt() {
    int i = k, cnt = 0;
    while (i > 0 && a[i] >= n - k + i) i--;
    if (i == 0) {
        cout << k << endl;
        return;
    }
    a[i] += 1;
    for (int j = i + 1; j <= k; j++)
        a[j] = a[i] + j - i;
    for (int i = 1; i <= k; i++) {
        stt[a[i]]++;
        if (stt[a[i]] >= 1) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) stt[i] = 0;
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
            stt[a[i]]--;
        }
        thkt();
    }
    return 0;
}
