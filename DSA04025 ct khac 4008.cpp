#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
const int mod = 1e9 + 7;
map<ll, ll> fb;
ll Fibo(int i) {
    if (i < 2) return 1;
    if (fb[i] == 0) 
        fb[i] = (Fibo((i + 1) / 2) * Fibo(i / 2) % mod + Fibo((i - 1) / 2) * Fibo((i - 2) / 2) % mod) % mod;
    return fb[i];
}
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << Fibo(x - 1) << endl;
    }
}   
