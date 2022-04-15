#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], v[100], cnt;
int Test() {
    for (int i = 1; i < k; i++) 
        if (v[a[i]] > v[a[i + 1]]) return 0;
    return 1;
}
void Try(int i) {
    int j;
    for (j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            if (Test()) cnt++;
        }
        else Try(i + 1);
    }
}
int main() {
    cnt = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> v[i];
    Try(1);
    cout << cnt;
}
