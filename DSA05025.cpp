#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f[60];
void Preparation() {
    f[1] = 1; f[2] = 2; f[3] = 4;
    for (int i = 4; i <= 50; i++)
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
}
int main() {
    Preparation();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}
