#include <bits/stdc++.h>
using namespace std;
vector<string> check = { "+-", "*/%", "^" };
int cmp(char a) {
    for (int i = 0; i < check.size(); i++) {
        if (check[i].find(a) != -1) return i;
    }
    return -1;
}
void Solution(string s) {
    stack<char> st;
    for (auto i : s) {
        if (isalpha(i)) cout << i;
        else {
            if (i == '(') st.push(i);
            else if (i == ')') {
                while (!st.empty()) {
                    char tmp = st.top(); st.pop();
                    if (tmp == '(') break;
                    cout << tmp;
                }
            } else {
                while (!st.empty() && cmp(i) <= cmp(st.top())) {
                    cout << st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
    }
    while (!st.empty()) {
        if (st.top() != '(') cout << st.top();
        st.pop();
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution(s);
        cout << endl;
    }
}