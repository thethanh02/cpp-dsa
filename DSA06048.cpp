#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, m = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int mini = *min_element(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (mini == a[i]) {
                cout << i << endl;
                break;
            }
        }
    }
}