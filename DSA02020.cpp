#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll res;
int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void Try(int i, ll tmp, ll uoc) {
    if (uoc > n) return;
    if (uoc == n) res = min(res, tmp);
    for (int j = 1; ; j++) {
        if (tmp * p[i] > res) break;
        tmp *= p[i];
        Try(i + 1, tmp, uoc * (j + 1));
    }
}
void Solution() {
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        res = 1e18;
        cin >> n;
        Try(0, 1, 1);
        cout << res << endl;
    }
}
