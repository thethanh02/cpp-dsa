#include<bits/stdc++.h>
using namespace std;
int n = 1, k, a[205];
vector<vector<int>> check;
void Try(int i) {
    int j;
    for (j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            vector<int> tmp(n + 1, 1);
            for (int h = 1; h <= k; h++) tmp[a[h]] = 0;
            check.push_back(tmp);
        }
        else Try(i + 1);
    }
}
int main() {
    string s;
    cin >> s;
    vector<int> brkt(s.size(), 0);
    stack<int> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            brkt[i] = n;
            st.push(n++);
        } else if (s[i] == ')') {
            brkt[i] = st.top();
            st.pop();
        }
    }
    n--;
    for (k = 1; k <= n; k++) Try(1);
    set<string> res;
    for (int i = 0; i < check.size(); i++) {
        string tmp = "";
        for (int j = 0; j < brkt.size(); j++) 
            if (check[i][brkt[j]]) tmp += s[j];
        res.insert(tmp);
    }
    for (auto i : res) cout << i << endl;
}