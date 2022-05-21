#include <bits/stdc++.h>
using namespace std;
int n, k, a[101], b[101];
vector<vector<int>> res;
void update() {
    int sum = 0;
    vector<int> tmp;
    for (int i = 1; i <= k; i++) {
        sum += b[a[i]];
        tmp.push_back(b[a[i]]);
    }
    if (sum % 2 == 1) res.push_back(tmp);
}
void Try(int i) {
    int j;
    for (j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) update();
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        res.clear();
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> b[i];
        sort(b + 1, b + n + 1, greater <int> ());
        for (k = 1; k <= n; k++) Try(1);
        sort(res.begin(), res.end());
        for (auto i : res) {
            for (int j : i) cout << j << " ";
            cout << endl;
        }
    }
}
