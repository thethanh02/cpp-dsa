    #include <bits/stdc++.h>
    using namespace std;
    int n, s, a[50], ans = INT_MAX;
    void Try(int i, int cnt, int sum) {
        if (sum == s) {
            ans = min(ans, cnt);
            return;
        }
        for (int j = i; j < n; j++) 
            if (sum + a[j] <= s) 
                Try(j + 1, cnt + 1, sum + a[j]);
    }
    int main() {
        int t;
        cin >> t;
        while (t--) {
            ans = INT_MAX;
            cin >> n >> s;
            for (int i = 0; i < n; i++) cin >> a[i];
            Try(0, 0, 0);
            cout << (ans == INT_MAX ? -1 : ans) << endl;
        }
    }