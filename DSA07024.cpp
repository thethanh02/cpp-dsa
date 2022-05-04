#include <bits/stdc++.h>
using namespace std;
const int infi = 1e9;
int n;
int a[100005], l[100005], r[100005];
void createLeft() {
    stack<int> st;
    a[0] = infi;
    st.push(0);
    for (int i = 1; i <= n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) l[i] = st.top();
        else l[i] = 0;
        st.push(i);
    }
}
void createRight() {
    stack<int> st;
    a[n + 1] = infi;
    st.push(n + 1);
    for (int i = n; i >= 1; i--) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) r[i] = st.top();
        else r[i] = n + 1;
        st.push(i);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];

        int ans = 0;
        createLeft();
        createRight();
        for (int i = 1; i <= n; i++) 
            if (a[i] <= r[i] - l[i] - 1) ans = max(ans, a[i]);
        cout << ans << endl;
    }
}