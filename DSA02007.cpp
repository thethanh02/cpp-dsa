#include <bits/stdc++.h>
using namespace std;

int k; string s, m;
void Try(int x) {
    if (x == k) return;
    for (int i = 0; i < s.size() - 1; i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[j] > s[i]) {
                swap(s[i], s[j]);
                if (s > m) m = s;
                Try(x + 1);
                swap(s[i], s[j]);
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> k >> s;
        m = s;
        Try(0);
        cout << m << endl;
    }
}
