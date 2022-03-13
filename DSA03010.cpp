#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    ll res = 0;
    while (!pq.empty()) {
        ll fst = pq.top(); pq.pop();
        ll snd = pq.top(); pq.pop();
        res += fst + snd;
        if (pq.empty()) break;
        pq.push(fst + snd);
    }
    cout << res << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}
