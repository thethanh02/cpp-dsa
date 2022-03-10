#include <bits/stdc++.h>
using namespace std;

void thkt(int a[], int stt[], int n, int k) {
    if (n - k + 1 == a[1])
        for (int i = 1; i <= k; i++) cout << stt[i] << " ";
    else {
        int i = k;
        while (i > 0 && a[i] >= n - k + i) i--;
        if (i == 0) return;
        a[i] += 1;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[i] + j - i;
        for (int i = 1; i <= k; i++) cout << a[i] << " ";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[k + 1], stt[k + 1];
        for (int i = 1; i <= k; i++) stt[i] = i;
        for (int i = 1; i <= k; i++) cin >> a[i];
        thkt(a, stt, n, k);
        cout << endl;
    }
    return 0;
}
