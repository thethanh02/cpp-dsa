#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "Buoc " << i + 1 << ": ";
        
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[m]) m = j;
        swap(a[m], a[i]);
        
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}
int main() {
    int a[101], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    SelectionSort(a, n);
}