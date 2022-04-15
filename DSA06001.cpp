#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v, v_sorted;
        int n, x;
        cin >> n;
        while (n--) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int l = v.size();
        for (int i = 0; i <= l / 2; i++) {
            v_sorted.push_back(v[l - i - 1]);
            v_sorted.push_back(v[i]);
        }
        for (int i = 0; i < v.size(); i++) cout << v_sorted[i] << " ";
        cout << endl;
    }
    return 0;
}
