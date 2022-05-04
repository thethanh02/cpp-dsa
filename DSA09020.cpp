#include <bits/stdc++.h>
using namespace std;

// void reinit() {
//     ls.clear();
//     memset(color, 0, sizeof(color));
//     ls.resize(v + 5);
// }
int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<int>> v(n, vector<int> (n, 0));
    for (int i = 0; i < n; i++) {
        string s; int token;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> token) {
            v[i][token - 1] = 1;
        }
    }
    for (auto i : v) {
        for (auto j : i) cout << j << " ";
        cout << endl;
    }
}