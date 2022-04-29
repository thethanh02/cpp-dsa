#include<bits/stdc++.h>
using namespace std;

int newVal(int a, int b, char c) {
    if (c == '+') return a + b;
    if (c == '-') return a - b;
    if (c == '*') return a * b;
    return a / b;
}
int Solution(string s) {
    int x, y, z = 0;
    stack<int> st;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (isdigit(s[i])) st.push(s[i] - '0');
        else {
            x = st.top(); st.pop();
            y = st.top(); st.pop();
            z = newVal(x, y, s[i]);
            st.push(z);
        }
    }
    return st.top();
}
int main(){
    int t; string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << Solution(s) << endl;
    } 
}
