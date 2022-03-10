#include <bits/stdc++.h>
using namespace std;
void in(vector<int> v, int n, int le) {
    if(le) {
        for (int i = 0; i < n; i++) cout << v[i] << " ";
        cout << "0 ";
        for (int i = n - 1; i >= 0; i--) cout << v[i] << " ";
        cout << endl;
        for (int i = 0; i < n; i++) cout << v[i] << " ";
        cout << "1 ";
        for (int i = n - 1; i >= 0; i--) cout << v[i] << " ";
        cout << endl;
    }
    else {
        for (int i = 0; i < n; i++) cout << v[i] << " ";
        for (int i = n - 1; i >= 0; i--) cout << v[i] << " ";
        cout << endl;
    }
}
int main() {
    int n, le = 0;
    cin >> n;
    if (n % 2 == 1) le = 1;
    n /= 2;
    vector<int> v(n, 0);
    int m = pow(2, n), d = 0;
    while (d < m) {
        in(v, n, le);
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == 0) {
                v[i] = 1;
                for (int j = n - 1; j > i; j--) v[j] = 0;
                break;
            }
        }
        d++;
    }
}
