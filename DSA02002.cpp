#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a, b;
vector<vector<int>> res;
void print() {
    for (int i = res.size() - 1; i >= 0; i--) {
        int m = res[i].size() - 1;
        cout << "[";
        for (int j = 0; j < m; j++) cout << res[i][j] << " ";
        cout << res[i][m] << "] ";
    }
}
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        res.clear(); a.clear();
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;   
            a.push_back(x);
        }
        res.push_back(a);
        while (n--) {
            for (int i = 0; i < n; i++) 
                a[i] += a[i + 1];
            if(n > 0) {
                b.clear();
                for (int i = 0; i < n; i++) b.push_back(a[i]);
                res.push_back(b);
            }
        }
        print();
        cout << endl;
    }
}
