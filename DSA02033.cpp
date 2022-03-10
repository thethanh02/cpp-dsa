#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> v;

int check(vector<int> a) {
    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) == 1) return 0;
    }
    return 1;
}
void Solution(vector<int> a) {
    vector<int> tmp = a;
    reverse(tmp.begin(), tmp.end());
    while (tmp != a) {
        if (check(a)) v.push_back(a);
        next_permutation(a.begin(), a.end());
    }
    if (check(tmp)) v.push_back(tmp);
}
void print() {
    for (auto i : v) {
        for (auto j : i) cout << j;
        cout << endl;
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        v.clear();
        cin >> n;
        vector<int> a;
        for (int i = 1; i <= n; i++) a.push_back(i);
        Solution(a);
        print();
    }
}