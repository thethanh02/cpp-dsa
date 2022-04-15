#include <bits/stdc++.h>
using namespace std;
string s;
void Solution() {
    cout << s[0];
    int tmp = s[0] - '0';
    for (int i = 1; i < s.size(); i++) {
        tmp ^= (s[i] - '0');
        cout << tmp;
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        Solution();
    }
}
