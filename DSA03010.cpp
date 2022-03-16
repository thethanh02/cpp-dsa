#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    priority_queue<int, vector<int>, greater<int>> pq(a, a + n);
    ll res = 0;
    while (pq.size() > 1) {
        ll fst = pq.top(); pq.pop();
        ll snd = pq.top(); pq.pop();
        res += fst + snd;
        pq.push(fst + snd);
    }
    cout << res << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}
