#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, min1, min2;
        min1 = min2 = 10000001;
        vector<int> v;
        cin >> n;
        while (n--) {
            cin >> x;
            v.push_back(x);
            if (min1 > x) min1 = x;
        }
        for (int i = 0; i < v.size(); i++) {
            if (min2 > v[i] && v[i] != min1) min2 = v[i];
        }
        if (min2 == 10000001)
            cout << "-1\n";
        else
            cout << min1 << " " << min2 << endl;
    }
    return 0;
}
