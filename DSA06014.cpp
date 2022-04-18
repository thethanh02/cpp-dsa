#include <bits/stdc++.h>
using namespace std;

const int oo = 1000000;
vector<int> check(oo, 1);
void eratos() {
    for (int i = 2; i <= sqrt(oo); i++)
        if (check[i])
            for (int j = i * i; j <= oo; j += i) check[j] = 0;
}
int main() {
    eratos();
    int t;
    cin >> t;
    while (t--) {
        int n, c = 1, m = 2;
        cin >> n;
        while (m <= n / 2) {
            if (check[m] && check[n - m]) {
                cout << m << " " << n - m << endl;
                c = -1;
                break;
            }
            m++;
        }
        if (c == 1) cout << "-1" << endl;
    }
}
