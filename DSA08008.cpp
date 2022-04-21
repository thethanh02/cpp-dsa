#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Result(ll n) {
    queue<ll> q;
    q.push(1);
    while (1) {
        ll tmp = q.front(); q.pop();
        if (tmp % n == 0) return tmp;
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << Result(n) << endl;
    }
}