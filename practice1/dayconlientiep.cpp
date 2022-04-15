#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int maxi = -1, cnt = 0;
    vector <int> v(n);
    for (auto& i : v) {
        cin >> i;
        maxi = max(maxi, i);
    }
    for (auto& i : v) {
        if (i == maxi) {
            cnt++;
            ans = max(cnt, ans);
        }
        else cnt = 0;
    }
    cout << ans;
}