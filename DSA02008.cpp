#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n][n], b[n];
    vector<vector<int>> ds;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
        b[i] = i;
    }
    do {
        int s = 0;
        vector<int> tmp;
        for (int i = 0; i < n; i++) 
            s += a[i][b[i]];
        if (s == k) {
            for (int i = 0; i < n; i++) tmp.push_back(b[i] + 1);
            ds.push_back(tmp);
        }
    } while (next_permutation(b, b + n));
    cout << ds.size() << endl;
    for (int i = 0; i < ds.size(); i++) {
        for (int j = 0; j < ds[i].size(); j++) cout << ds[i][j] << " ";
        cout << endl;
    }
}