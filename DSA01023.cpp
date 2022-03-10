#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], res[100], ans;

int check() {
    for(int i = 1; i <= k; i++) 
        if(a[i] != res[i]) return 0;
    return 1;
}
void Try(int i) {
    int j;
    for (j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            int c = check();
            if (c) cout << ans << endl;
            else ans++;
        }
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ans = 1;
        cin >> n >> k;
        for (int i = 1; i <= k; i++) cin >> res[i];
        Try(1);
    }
}
