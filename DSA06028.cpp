#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int a[], int n) {
    int k = 0, b[n - 1][n];
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[m]) m = j;
        swap(a[m], a[i]);

        for (int i = 0; i < n; i++) b[k][i] = a[i];
        k++;
    }
    for (int i = k - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++) cout << b[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int a[101], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    SelectionSort(a, n);
}