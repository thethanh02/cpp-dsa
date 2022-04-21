#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
void print() {
    for (int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << endl;
}
void Try(int i) {
    for (int j = n - k + i; j >= a[i - 1] + 1; j--) {
        a[i] = j;
        if (i == k) print();
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        Try(1);
    }
}