#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s, token;
        stack<string> st;
        getline(cin, s);
        stringstream tmp(s);
        while (tmp >> token) 
            st.push(token);
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}