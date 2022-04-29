#include<bits/stdc++.h>
using namespace std;

int Solution(string s) {
    int ans = 0;
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') st.push(s[i]);
        else {
            if (st.empty()) continue;
            ans++;
            st.pop();
        }
    }
    return ans * 2;
}
int main(){
    int t; string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << Solution(s) << endl;
    } 
}