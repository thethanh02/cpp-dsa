#include<bits/stdc++.h>
using namespace std;
int dp(int a[], int n, int s) {
    int f[s + 1] = {1};
    for (int i = 0; i < n; i++) {
        for (int j = s; j >= a[i]; j--) {
            if (f[j] == 0 && f[j - a[i]] == 1) f[j] = 1; 
        }
    }
    return f[s];
}
int main() {
    int t, a[201], n, s, i;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << (dp(a, n, s) ? "YES\n" : "NO\n");
    }
}