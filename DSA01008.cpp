#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
int kBit() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
        if (a[i] == 1) cnt++;
    if (cnt == k) return 1;
    return 0;
}
void in() {
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}
void Try(int i) {
    int j;
    for (j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n) {
            if (kBit()) in();
        }
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        Try(1);
    }
}
