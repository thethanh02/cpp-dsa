#include <bits/stdc++.h>
using namespace std;

void Solution(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            if (s[i - 1] == '-' || s[i - 1] == '+') st.push(s[i - 1]);

        if (!st.empty() && st.top() == '-') {
            if (s[i] == '+') s[i] = '-';
            else if (s[i] == '-') s[i] = '+';
        }
        if (s[i] == ')' && !st.empty()) st.pop();
    }
    for (int i = 0; i < s.size(); i++) 
        if (s[i] != '(' && s[i] != ')') cout << s[i];
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution(s);
    }
}