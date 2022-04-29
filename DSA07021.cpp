#include <bits/stdc++.h>
using namespace std;

int Solution(string s) {
    int ans = 0;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') st.push(i);
        else {
            st.pop();
            if (st.size()) ans = max(ans, i - st.top());
            else st.push(i);
        }
    }
    return ans;
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