#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        int a[n], pos[n], res[n];
        for (auto& i : a) cin >> i;
        stack<int> st1, st2;
        st1.push(n - 1); st2.push(n - 1);
        res[n - 1] = -1; pos[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            while (!st1.empty() && a[st1.top()] <= a[i]) st1.pop();
            pos[i] = (st1.empty()) ? (n - 1) : (st1.top());
            st1.push(i);

            while (!st2.empty() && a[st2.top()] >= a[i]) st2.pop();
            res[i] = (st2.empty()) ? (-1) : (a[st2.top()]);
            st2.push(i);
        }
        for (auto i : pos) cout << res[i] << " ";
        cout << endl;
    }
}