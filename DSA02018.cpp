#include <bits/stdc++.h>
using namespace std;
vector<int> a(5);
int Try(int i, int val) {
    if (i == 5) {
        if (val == 23) return 1;
        return 0;
    }
    for (int j = 0; j < 3; j++) {
        int new_val;
        if (j == 0) new_val = val + a[i];
        else if (j == 1) new_val = val - a[i];
        else new_val = val * a[i];
        if (Try(i + 1, new_val)) return 1;
    }
    return 0;
}
string Solution() {
    sort(a.begin(), a.end());
    do {
        if (Try(1, a[0])) return "YES";
    } while (next_permutation(a.begin(), a.end()));
    return "NO";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 5; i++) cin >> a[i];
        cout << Solution() << endl;
    }
}