#include <bits/stdc++.h>
using namespace std;
void Solution() {
    int n, sum = 0;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 1) {
        cout << "NO\n";
        return;
    }
    sum /= 2;
    int dp[sum + 1];

    dp[0] = 1;
    for (int i = 0; i < n; i++) 
        for (int j = sum; j >= v[i]; j--) 
            if (dp[j - v[i]] == 1) dp[j] = 1;
    
    cout << (dp[sum] == 1 ? "YES\n" : "NO\n");
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}
