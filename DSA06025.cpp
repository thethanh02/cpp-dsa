#include <bits/stdc++.h>
using namespace std;
void InsertSort(int a[], int n) {
    int t, j;
    for (int i = 1; i <= n; i++) {
        cout << "Buoc " << i - 1 << ": ";
        for (int k = 0; k <= i - 1; k++) cout << a[k] << " "; 

        j = i - 1;
        t = a[i];
        while (j >= 0 && t < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
        cout << endl;
    }
    // cout << "Buoc " << n - 1 << ": ";
    // for (int k = 0; k < n; k++) cout << a[k] << " "; 
}

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    InsertSort(a, n);
}