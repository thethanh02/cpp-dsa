#include<bits/stdc++.h>
using namespace std;
int f[10001];
void dp() {
    for (int i = 1; i <= 10000; i++) {
        f[i] = i;
        for (int j = 1; j * j <= i; j++) 
            f[i] = min(f[i], f[i - j * j] + 1);
    }
}
int main() {
    dp();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << f[n] << endl;
    }
}