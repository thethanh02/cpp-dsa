#include <bits/stdc++.h>
using namespace std;

int Solution(string s) {
    int ans = 0;
    stack<char> st;
    for (auto i : s) {
        if (!st.empty() && st.top() == '(' && i == ')') st.pop();
        else st.push(i);
    }
    while (!st.empty()) {
        char a = st.top(); st.pop();
        char b = st.top(); st.pop();
        if (a == '(') ans++;
        if (b == ')') ans++;
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