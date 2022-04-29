#include <bits/stdc++.h>
using namespace std;

void Solution(string s) {
    stack<string> st;
    for (int i = 0; i < s.size(); i++) {
        string tmp;
        tmp = s[i];
        if (isalpha(s[i])) st.push(tmp);
        else {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string z = "(" + y + s[i] + x + ")";
            st.push(z);
        }
    }
    cout << st.top() << endl;
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