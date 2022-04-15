#include <bits/stdc++.h>
using namespace std;

int n, a[100005], l[100005], r[100005];
void createLeft() {
    stack<int> st;
    for (int i = 1; i <= n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) l[i] = st.top();
        else l[i] = 0;
        st.push(i);
    }
}
void createRight() {
    stack<int> st;
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

        long long ans = 0;
        createLeft();
        createRight();
        for (int i = 1; i <= n; i++) {
            long long dientich = (long long)(a[i] * (r[i] - l[i] - 1));
            ans = max(ans, dientich);
        }
        cout << ans << endl;
    }
}
