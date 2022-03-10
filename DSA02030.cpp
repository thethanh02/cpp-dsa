#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
char s;
void in() {
    for (int i = 1; i <= k; i++) cout << (char)(a[i] + 'A' - 1);
    cout << endl;
}
void Try(int i) {
    int j;
    for (j = a[i - 1]; j <= n; j++) {
        a[i] = j;
        if (i == k) in();
        else Try(i + 1);
    }
}
int main() {
    cin >> s >> k;
    n = s - 'A' + 1;
    a[0] = 1;
    Try(1);
    cout << endl;
}
