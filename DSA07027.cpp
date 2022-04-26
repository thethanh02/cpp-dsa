#include <bits/stdc++.h>
using namespace std;

void Solution(vector<int> a, int n) {
    stack<int> st, res;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= a[i]) 
            st.pop();
        if (st.empty()) res.push(-1);
        else res.push(st.top());
        st.push(a[i]);
    }
    while (!res.empty()) {
        cout << res.top() << " ";
        res.pop();
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        stack<int> st;
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution(a, n);
        cout << endl;
    }
}