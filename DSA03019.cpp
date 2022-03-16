#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution(ll tu, ll mau) {
    ll kq;
    while (1) {
        if (mau % tu == 0) {
            cout << "1/" << mau / tu << endl;
            break;
        }
        else {
            kq = mau / tu + 1;
            cout << "1/" << kq << " + ";
            tu = tu * kq - mau;
            mau *= kq;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll tu, mau;
        cin >> tu >> mau;
        Solution(tu, mau);
    }
}
