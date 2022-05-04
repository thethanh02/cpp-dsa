#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<vector<int>> res;
vector<int> tmp;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        tmp.clear();
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (x) tmp.push_back(j + 1);
        }
        res.push_back(tmp);
    }
    for(auto i : res) {
        for (auto j : i) cout << j << " ";
        cout << endl;
    }
}
// 0.22s