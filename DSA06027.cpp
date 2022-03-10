#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], b[n-1][n], k = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] >= a[j]) swap(a[i], a[j]);
            }
            for (int i = 0; i < n; i++) b[k][i] = a[i];
            k++;
        }
        for(int i = k - 1; i >= 0; i--) {
            cout << "Buoc " << i + 1 << ": ";
            for(int j = 0; j < n; j++) cout << b[i][j] << " ";
            cout << endl;
        }
    }
}