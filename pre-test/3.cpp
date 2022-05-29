#include <bits/stdc++.h>
using namespace std;
int Solution(string s) {
    stack<pair<char, int>> st;
    int m = 0, ans = 0;
    st.push({' ', 0});
    for (char i : s) {
        if (i == '(') {
            int tmp = st.top().second;
            ans = max(ans, m - tmp);
            st.push({i, tmp + 1});
        } else if (i == ')') {
            if (!st.empty() && st.top().first == '(') {
                m = max(m, st.top().second);
                st.pop();
            }
        }
    }
    if (st.size() == 1) return max(ans, m);
    return -1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << Solution(s) << endl;
    }
}