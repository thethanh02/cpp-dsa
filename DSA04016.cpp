#include <bits/stdc++.h>
using namespace std;
int n, m, k, x;
deque<int> d1, d2;
vector<int> res;
void Init() {
    cin >> n >> m >> k;
    d1.clear(), d2.clear();
    res.clear();
    for (int i = 0; i < n; i++) {
        cin >> x;
        d1.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        d2.push_back(x);
    }
}
void Solution() {
    while (!d1.empty() && !d2.empty()) {
        int tmp1 = d1.front(), tmp2 = d2.front();
        if (tmp1 < tmp2) {
            res.push_back(tmp1);
            d1.pop_front();
        } else {
            res.push_back(tmp2);
            d2.pop_front();
        } 
    }
    while (!d1.empty()) {
        res.push_back(d1.front());
        d1.pop_front();
    }
    while (!d2.empty()) {
        res.push_back(d2.front());
        d2.pop_front();
    }
    cout << res[k - 1] << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        Solution();
    }
}
