#include <bits/stdc++.h>
using namespace std;

int n, x, a[50];
vector<vector<int>> res;
void Try(int i, int sum, vector<int> b) {
    if (sum == x) { 
        res.push_back(b);
        return;
    }
    for (int j = i; j < n; j++) {
        if (sum + a[j] <= x) {
            b.push_back(a[j]);
            sum += a[j];
            Try(j, sum, b);
            sum -= a[j];
            b.pop_back();
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> b;
        res.clear();
        cin >> n >> x;
        for (int i = 0; i < n; i++) cin >> a[i];
        Try(0, 0, b);
        if (res.size() == 0) cout << -1;
        else {
            cout << res.size();
            for (int i = 0; i < res.size(); i++) {
                cout << " {";
                for (int j = 0; j < res[i].size(); j++) {
                    cout << res[i][j];
                    if (j == res[i].size() - 1) cout << "}";
                    else cout << " ";
                }
            }
        }
        cout << endl;
    }
}
