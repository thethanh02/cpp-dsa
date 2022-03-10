#include <bits/stdc++.h>
using namespace std;
void InsertSort(int a[], int n) {
    vector<int> v[100];
    int t, j;
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k <= i - 1; k++) v[i-1].push_back(a[k]); 

        j = i - 1;
        t = a[i];
        while (j >= 0 && t < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < v[i].size(); j++) cout << v[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    InsertSort(a, n);
}