#include<bits/stdc++.h>
using namespace std;

string loop(int j, string a) {
    string x = "";
    for (int i = 0; i < j; i++) x += a;
    return x;
}
void Solution(string s) {
    stack<char> st;
    string a;
    for (auto i : s) {
        if (i != ']') st.push(i);
        else {
            string num = "", alp = "";
            while (!st.empty() && st.top() != '[') {
                alp += st.top();
                st.pop();
            }
            st.pop();
            while (!st.empty() && isdigit(st.top())) {
                num += st.top();
                st.pop();
            }
            if (num.empty()) num = "1";
            else reverse(num.begin(), num.end());
            a = loop(stoi(num), alp);
            for (int j = a.size() - 1; j >= 0; j--) st.push(a[j]);
        }
    }
    a = "";
    while (!st.empty()) {
        a += st.top(); st.pop();
    }
    reverse(a.begin(), a.end());
    cout << a << endl;
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