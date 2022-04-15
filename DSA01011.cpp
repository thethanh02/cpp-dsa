#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, tmp; int n;
        cin >> n >> s;
        tmp = s;
        next_permutation(s.begin(), s.end());
        sort(tmp.begin(), tmp.end());
        cout << n << " ";
        cout << (s == tmp ? "BIGGEST" : s) << endl;
    }
    return 0;
}