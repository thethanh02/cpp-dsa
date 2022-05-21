#include <bits/stdc++.h>
using namespace std;

const int oo = 200;
vector<int> check(oo, 1), prime;
vector<vector<int>> res;
int k, p, s, a[100], n;
void eratos() {
    for (int i = 2; i <= sqrt(oo); i++)
        if (check[i]) 
            for (int j = i * i; j <= oo; j += i) check[j] = 0;
}
void update() {
    vector<int> tmp;
    int sum = 0;
    for (int i = 1; i <= k; i++) {
        if (prime[a[i] - 1] <= p) return;
        sum += prime[a[i] - 1];
        tmp.push_back(prime[a[i] - 1]);
    }
    if (sum == s) res.push_back(tmp);
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
    eratos();
    int t;
    cin >> t;
    while (t--) {
        cin >> k >> p >> s;
        prime.clear();
        res.clear();
        for (int i = p + 1; i <= s; i++) if (check[i]) prime.push_back(i);
        n = prime.size();
        Try(1);
        cout << res.size() << endl;
        for (auto i : res) {
            for (int j : i) cout << j << " ";
            cout << endl;
        }
    }
}
