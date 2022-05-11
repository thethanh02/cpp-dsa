#include <bits/stdc++.h>
using namespace std;

int Solution(string s) {
    int br[1001] = {0}, cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ']') cnt++;
        br[i] = cnt;
    }
    int ans = 0;
    stack<int> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[') st.push(i);
        else {
            if (!st.empty() && ((s[st.top()] == '(' && s[i] == ')') || (s[st.top()] == '[' && s[i] == ']'))) {
                st.pop();
                if (st.size()) {
                    ans = max(ans, br[i] - br[st.top()]);
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
