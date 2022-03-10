#include <bits/stdc++.h>
using namespace std;
int n, a[100];
int check() {
    if (a[1] != 1 || a[n] != 0) return 0;
    for (int i = 1; i < n; i++) 
        if (a[i] == 1 && a[i + 1] == 1) return 0;
    for (int i = 1; i < n - 2; i++) 
        if (a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0 && a[i + 3] == 0) return 0;
    return 1;
}
void in() {
    for (int i = 1; i <= n; i++) {
        cout << (a[i] + 3) * 2;
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
        } else Try(i + 1);
    }
}
int main() {
    cin >> n;
    Try(1);
}
