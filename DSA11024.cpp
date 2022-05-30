#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int &i : a) cin >> i;
        sort(a, a + n);
        cout << a[(n - 1) / 2] << endl;
    }
}