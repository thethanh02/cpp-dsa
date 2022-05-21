#include <bits/stdc++.h>
using namespace std;
int n, k, a[101];
string b;
vector<string> res;
void update() {
    string tmp;
    for (int i = 1; i <= k; i++) 
        tmp.push_back(b[a[i]]);
    res.push_back(tmp);
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
        cin >> b;
        b = " " + b;
        for (k = 1; k <= n; k++) Try(1);
        sort(res.begin(), res.end());
        for (string i : res) cout << i << " ";
        cout << endl;
    }
}
