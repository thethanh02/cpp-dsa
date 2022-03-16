#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution(int pos[], int n) {
    int cnt = 1, m = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] > pos[i - 1]) cnt++;
        else cnt = 1;
        m = max(cnt, m);
    }
    cout << n - m;
}
int main() {
    int n;
    cin >> n;
    int a[n], pos[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }   
    Solution(pos, n);
}
