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
        vector<int> left(n, 1), right(n, 1);
        for(int i = 1; i < n; i++) 
            if(a[i] > a[i - 1]) left[i] = left[i - 1] + 1;

        for(int i = n - 2; i >= 0; i--) 
            if(a[i] > a[i + 1]) right[i] = right[i + 1] + 1;
        int res = 0;
        for(int i = 0; i < n; i++)
            res = max(res, left[i] + right[i] - 1);
        cout << res << endl;
    }
}