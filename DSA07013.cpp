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
    for (auto i : s) {
        if (isdigit(i)) st.push(i - '0');
        else {
            x = st.top(); st.pop();
            y = st.top(); st.pop();
            z = newVal(y, x, i);
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
