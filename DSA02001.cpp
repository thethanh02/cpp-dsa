#include <bits/stdc++.h>
using namespace std;
int n, a[100];
void print() {
    cout << "[";
    for (int i = 0; i < n - 1; i++) cout << a[i] << " ";
    cout << a[n - 1] << "]\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        print();
        while (n--) {
            for (int i = 0; i < n; i++) 
                a[i] += a[i + 1];
            if(n > 0) print();
        }
    }
}
