#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Result(string s) {
    ll f[15], ans = 0;
    f[0] = s[0] - '0';
    ans = f[0];

    for (int i = 1; i < s.size(); i++) {
        int t = s[i] - '0';
        f[i] = f[i - 1] * 10 + t * (i + 1);
        ans += f[i];
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << Result(s) << endl;
    }
}