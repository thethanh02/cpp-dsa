#include <bits/stdc++.h>
using namespace std;

string Solution(string s) {
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
    string res = "";
    for (int i = 0; i < s.size(); i++) 
        if (s[i] != '(' && s[i] != ')') res += s[i];
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << (Solution(s1) == Solution(s2) ? "YES\n" : "NO\n");
    }
}