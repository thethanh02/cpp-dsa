#include <bits/stdc++.h>
using namespace std;
int number_ofSwaps(int a[], int n) { // Selection sort
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[m]) m = j;
        if(m != i) ans++;
        swap(a[m], a[i]);
        
        // for (int i = 0; i < n; i++) cout << a[i] << " ";
        // cout << endl;
    }
    return ans;
}
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << number_ofSwaps(a, n) << endl;
    }
}