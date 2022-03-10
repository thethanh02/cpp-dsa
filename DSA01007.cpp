#include <bits/stdc++.h>
using namespace std;
int n, a[100];
void in() {
    for (int i = 1; i <= n; i++) cout << (char)(a[i] + 'A');
    cout << " ";
}
void Try(int i) {
    int j;
    for (j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n) in();
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        Try(1);
        cout << endl;
    }
}
