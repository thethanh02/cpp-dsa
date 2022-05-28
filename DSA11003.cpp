#include <bits/stdc++.h>
using namespace std;
int Search(int a[], int x, int n) {
    for (int i = 0; i < n; i++) 
        if (a[i] == x) return i;
    return -1;
}
void printPostOrder(int in[], int pre[], int n) {
    int x = Search(in, pre[0], n);
    if (x != 0) printPostOrder(in, pre + 1, x);
    if (x != n - 1) printPostOrder(in + x + 1, pre + x + 1, n - x - 1);
    cout << pre[0] << " ";
}
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], pre[n];
        for (int& i : in) cin >> i;
        for (int& i : pre) cin >> i;
        printPostOrder(in, pre, n);
        cout << endl;
    }
}