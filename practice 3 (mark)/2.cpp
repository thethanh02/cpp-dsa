#include <bits/stdc++.h>
using namespace std;
// void print(stack<int> st) {
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
// }
int Solution(string s) {
    s = " " + s;
    int close_brk[1001] = {0}, cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ']') cnt++;
        close_brk[i] = cnt;
    }
    int ans = 0;
    stack<int> st;
    st.push(0);
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[') st.push(i);
        else {
            if (!st.empty() && ((s[st.top()] == '(' && s[i] == ')') || (s[st.top()] == '[' && s[i] == ']'))) {
                st.pop();
                if (st.size()) {
                    ans = max(ans, close_brk[i] - close_brk[st.top()]);
                } else st.push(i);
            } else st.push(i);
        }
    }
    return ans;
}
int main() {
    string s;
    cin >> s;
    cout << Solution(s) << endl;
}