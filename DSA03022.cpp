#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int s1 = a[0] * a[1] * a[n - 1], s2 = a[n - 1] * a[n - 2];
    cout << max(s1, max(s2, s2 * a[n - 3])) << endl;
}
int main() {
    Solution();
}
