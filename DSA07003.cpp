#include <bits/stdc++.h>
using namespace std;

string Solution(string s) {
    stack<char> st;
    for (auto i : s) {
        if (i != ')') st.push(i);
        else {
            int cnt = 0; // counter char in bracket
            while (!st.empty() && st.top() != '(') {
                st.pop();
                cnt++;
            }
            if (cnt < 2) return "Yes";
            if (!st.empty()) st.pop();
        }
    }
    return "No";
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