#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans = 0;
int m, n;
void createLeft(int a[], int l[]) {
    stack<int> st;
    st.push(0);
    for (int i = 1; i <= n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) l[i] = st.top();
        else l[i] = 0;
        st.push(i);
    }
}
void createRight(int a[], int r[]) {
    stack<int> st;
    st.push(n + 1);
    for (int i = n; i >= 1; i--) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) r[i] = st.top();
        else r[i] = n + 1;
        st.push(i);
    }
}
void Solution(int a[], int l[], int r[]) {
    createLeft(a, l);
    createRight(a, r);
    for (int i = 1; i <= n; i++) {
        ll dientich = (ll)a[i] * (r[i] - l[i] - 1);
        ans = max(ans, dientich);
    }
}
int main() {
    ans = 0;
    cin >> m >> n;
    int a[n + 1], b[n + 1], l[n + 1], r[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = m - a[i];
    }
    Solution(a, l, r);
    Solution(b, l, r);
    cout << ans << endl;
}