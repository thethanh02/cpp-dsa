#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        int a[n], res[n];
        for (auto& i : a) cin >> i;
        stack<int> st;
        st.push(0);
        res[0] = 1;
        for (int i = 1; i < n; i++) {
            while (!st.empty() && a[st.top()] <= a[i]) st.pop();
            res[i] = (st.empty()) ? (i + 1) : (i - st.top());
            st.push(i);
        }
        for (auto i : res) cout << i << " ";
        cout << endl;
    }
}