#include <bits/stdc++.h>
using namespace std;
int n, a[100]; bool vis[100];
void in() {
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << " ";
}
void Try(int i) {
    int j;
    for (j = n; j >= 1; j--) {
        if (!vis[j]) {
            a[i] = j; vis[j] = 1;
            if (i == n) in();
            else Try(i + 1);
            vis[j] = 0;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) vis[i] = 0;
        Try(1);
        cout << endl;
    }
}
