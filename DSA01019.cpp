#include <bits/stdc++.h>
using namespace std;
int n, a[100];
int check() {
    if (a[1] != 1 || a[n] != 0) return 0;
    for (int i = 1; i < n; i++) 
        if(a[i] == 1 && a[i + 1] == 1) return 0;
    return 1;
}
void in() {
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) cout << 'H';
        else cout << 'A';
    }
    cout << endl;
}
void Try(int i) {
    int j;
    for (j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n) {
            int c = check();
            if (c) in();
        }
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        Try(1);
    }
}
