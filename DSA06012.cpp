#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        vector<int> v;
        cin >> n >> k;
        while (n--) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int l = v.size() - 1;
        for (int i = l; i > l - k; i--) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
