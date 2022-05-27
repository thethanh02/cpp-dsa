#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[505][505], l[505], r[505];
void createLeft(int b[]) {
    stack<int> st;
    for (int i = 1; i <= m; i++) {
        while (!st.empty() && b[st.top()] >= b[i]) st.pop();
        if (!st.empty()) l[i] = st.top();
        else l[i] = 0;
        st.push(i);
    }
}
void createRight(int b[]) {
    stack<int> st;
    for (int i = m; i >= 1; i--) {
        while (!st.empty() && b[st.top()] >= b[i]) st.pop();
        if (!st.empty()) r[i] = st.top();
        else r[i] = m + 1;
        st.push(i);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) cin >> a[i][j];
        for (int i = 2; i <= n; i++) 
            for (int j = 1; j <= m; j++)
                if (a[i][j]) a[i][j] += a[i - 1][j];
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            createLeft(a[i]);
            createRight(a[i]);
            for (int j = 1; j <= m; j++) {
                long long dientich = a[i][j] * (long long)(r[j] - l[j] - 1);
                ans = max(ans, dientich);
            }
        }
        cout << ans << endl;
    }
}