#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n], res[n];
        vector<int> mrk(1e6 + 1, 0);
        for (auto& i : a) {
            cin >> i;
            mrk[i]++;
        }
        for (int i = 0; i < n; i++) b[i] = mrk[a[i]];

        stack<int> st;
        res[n - 1] = -1;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && b[st.top()] <= b[i]) st.pop();
            res[i] = (st.empty()) ? (-1) : (a[st.top()]);
            st.push(i);
        }
        for (auto i : res) cout << i << " ";
        cout << endl;
    }
}