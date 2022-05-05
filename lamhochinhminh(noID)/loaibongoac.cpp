#include <bits/stdc++.h>
using namespace std;

void Solution(string s) {
    int a[1000] = {0}, cnt = 0;
    while (s[cnt] == '(') a[cnt++] = -1;
    stack<pair<int, int>> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ')') {
            if (s[i] == '(' && s[i - 1] == '+') a[i] = -1;
            st.push({i, a[i]});
        } else {
            cnt = 0;
            while (!st.empty() && s[st.top().first] != '(') {
                st.pop();
                cnt++;
            }
            if (cnt < 2) a[i] = a[st.top().first] = -1;
            if (st.top().second == -1) a[i] = -1;
            st.pop();
        }
    }
    for (int i = 0; i < s.size(); i++) 
        if (a[i] != -1) cout << s[i];
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s, token, s_nospace = "";
        getline(cin, s);
        stringstream ss(s);
        while (ss >> token) {
            s_nospace += token;
        }
        Solution(s_nospace);
        cout << endl;
    }
}