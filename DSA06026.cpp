#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n) {
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
            cout << "Buoc " << k + 1 << ": ";
            for (int i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
        }
    }
}
int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    BubbleSort(a, n);
}