#include <bits/stdc++.h>
using namespace std;
void PostOrderBST(int a[], int st, int en) {
    if (st > en) return;
    int mid = (en + st) / 2;
    PostOrderBST(a, st, mid - 1);
    PostOrderBST(a, mid + 1, en);
    cout << a[mid] << " ";
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
        PostOrderBST(a, 0, n - 1);
        cout << endl;
    }
}