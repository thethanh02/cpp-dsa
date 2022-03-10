#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n) {
    int b[n][n], c = 0;
    for (int k = 0; k < n; k++) {
        int d = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                d++;
                a[i] = a[i] + a[i + 1];
                a[i + 1] = a[i] - a[i + 1];
                a[i] = a[i] - a[i + 1];
            }
        }
        if (d > 0) {
            for (int i = 0; i < n; i++) b[c][i] = a[i];
            c++;
        }
    }
    for (int i = c - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++) cout << b[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int n, a[100], t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        BubbleSort(a, n);
    }
}