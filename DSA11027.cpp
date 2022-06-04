#include <bits/stdc++.h>
using namespace std;
int cnt;
void PreOrderBST(int a[], int st, int en) {
    if (st > en) return;
    int mid = (en + st) / 2;
    if (st == en) cnt++;
    PreOrderBST(a, st, mid - 1);
    PreOrderBST(a, mid + 1, en);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int &i : a) cin >> i;
        sort(a, a + n);
        cnt = 0;
        PreOrderBST(a, 0, n - 1);
        cout << cnt << endl;
    }
}