#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, j = 0, k = 0;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i += 2) b[j++] = a[i];
    sort(b, b + j);
    j = 0;
    for (int i = 0; i < n; i += 2) a[i] = b[j++];
    for (int i = 1; i < n; i += 2) c[k++] = a[i];
    sort(c, c + k); k--;
    for (int i = 1; i < n; i += 2) a[i] = c[k--];
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
