#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    string s;
    ll x, a[200] = {0};
    cin >> x >> s;
    for (int i = 0; i < s.size(); i++) a[s[i]]++;
    
    priority_queue<ll, vector<ll>> pq;
    for (int i = 'A'; i < 200; i++) 
        if (a[i] > 0) pq.push(a[i]);
    ll res = 0;
    while (x--) {
        if (pq.top() >= 1) {
            pq.push(pq.top() - 1);
            pq.pop();
        }
    }
    while (!pq.empty()) {
        res += pq.top() * pq.top();
        pq.pop();
    }
    cout << res << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}