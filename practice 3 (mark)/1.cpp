#include <bits/stdc++.h>
using namespace std;

void print(stack<char> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
string Solution(string s) {
    stack<char> st;
    for (auto i : s) {
        if (i == '[' || i == '(') st.push(i);
        else if (i == ')' || i == ']') {
            if (st.empty()) return "NO";
            if (i == ']' && st.top() == '[') st.pop();
            else if (i == ')' && st.top() == '(') st.pop();
            else return "NO";
        }
    }
    if (!st.empty()) return "NO";
    return "YES";
}
int main() {
    int t; string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        cout << Solution(s) << endl;
    }
}