#include <bits/stdc++.h>
using namespace std;
void print(stack<int> st) {
    if (st.empty()) {
        cout << "empty\n";
        return;
    }
    stack<int> tmp;
    while (!st.empty()) {
        tmp.push(st.top());
        st.pop();
    }
    while (!tmp.empty()) {
        cout << tmp.top() << " ";
        tmp.pop();
    }
    cout << endl;
}
int main() {
    int x;
    string s;
    stack<int> st;
    while (cin >> s) {
        if (s == "push") {
            cin >> x;
            st.push(x);
        }
        else if (s == "pop" && !st.empty()) st.pop();
        else if (s == "show") print(st);
    }
}