#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> left(n, 0), right(n, 0);
        for(int i = 0; i < n; i++) {
            left[i] = a[i];
            for(int j = 0; j < i; j++)
                if(a[i] > a[j]) left[i] = max(left[i], left[j] + a[i]);
        }
        for(int i = n - 1; i >= 0; i--) {
            right[i] = a[i];
            for(int j = n - 1; j > i; j--)
                if(a[i] > a[j]) right[i] = max(right[i], right[j] + a[i]);
        }
        int res = 0;
        for(int i = 0; i < n; i++)
            res = max(res, left[i] + right[i] - a[i]);
        cout << res << endl;
    }
}