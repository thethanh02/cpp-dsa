#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cmp(char a) {
    if (a == '+' || a == '-') return 1;
    if (a == '*' || a == '/') return 2;
    return -1;
}
vector<string> TrungTo_HauTo(string s) {
    vector<string> res;
    stack<char> st;
    string num;
    s.push_back(')');
    for (auto i : s) {
        if (isdigit(i)) num.push_back(i);
        else {
            if (!num.empty()) {
                res.push_back(num); 
                num.clear();
            }
            if (i == '(') st.push(i);
            else if (i == ')') {
                while (!st.empty()) {
                    char tmp = st.top(); st.pop();
                    if (tmp == '(') break;
                    res.push_back(string(1, tmp));
                }
            } else {
                while (!st.empty() && cmp(i) <= cmp(st.top())) {
                    res.push_back(string(1, st.top()));
                    st.pop();
                }
                st.push(i);
            }
        }
    }
    while (!st.empty()) {
        if (st.top() != '(') res.push_back(string(1, st.top()));
        st.pop();
    }
    return res;
}
ll newVal(ll a, ll b, string c) {
    if (c == "+") return a + b;
    if (c == "-") return a - b;
    if (c == "*") return a * b;
    return a / b;
}
ll Solution(vector<string> s) {
    ll x, y, z = 0;
    stack<ll> st;
    for (auto i : s) {
        if (i != "*" && i != "/" && i != "+" && i != "-") st.push(stoll(i));
        else {
            x = st.top(); st.pop();
            y = st.top(); st.pop();
            z = newVal(y, x, i);
            st.push(z);
        }
    }
    return st.top();
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        vector<string> a;
        cin >> s;
        a = TrungTo_HauTo(s);
        cout << Solution(a) << endl;
    }
}