#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        next_permutation(v.begin(), v.end());
        for (auto i : v) cout << i << " ";
        cout << endl;
    }
}
