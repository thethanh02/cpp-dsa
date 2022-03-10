#include <bits/stdc++.h>
using namespace std;

int check(vector<int> v, vector<int> res) {
    for(int i = 0; i < v.size(); i++) 
        if(v[i] != res[i]) return 0;
    return 1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 1;
        cin >> n;
        vector<int> v(n), res(n);
        for (int i = 0; i < n; i++) cin >> res[i];
        for (int i = 0; i < n; i++) v[i] = i + 1;
        int c = check(v, res);
        while (!c) {
            next_permutation(v.begin(), v.end());
            c = check(v, res);
            ans++;
        }
        cout << ans << endl;
    }
}
