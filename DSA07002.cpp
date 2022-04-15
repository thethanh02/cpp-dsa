#include <bits/stdc++.h>
using namespace std;
void print(stack<int>& st) {
    if (st.empty()) cout << "NONE" << endl;
    else cout << st.top() << endl;
}
int main() {
    int t;
    string s;
    stack<int> st;
    cin >> t;
    while (t--) {
        cin >> s;
        if (s == "PUSH") {
            int x; cin >> x;
            st.push(x);
        }
        else if (s == "POP" && !st.empty()) st.pop();
        else if (s == "PRINT") print(st);
    }
}