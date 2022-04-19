#include<bits/stdc++.h>
using namespace std;

string Result(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
        else {
            if (st.empty()) return "NO";
            if (s[i] == ')' && st.top() != '(') return "NO";
            else if (s[i] == ']' && st.top() != '[') return "NO";
            else if (s[i] == '}' && st.top() != '{') return "NO";
            st.pop();
        }
    }
    return "YES";
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << Result(s) << endl;
    } 
}