#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v;
void Preparation() {
    queue<string> q;
    q.push("1");
    v.push_back(1);
    while (1) {
        string tmp = q.front(); q.pop();
        if (tmp.size() >= 18) return;
        string fst = tmp + "0", snd = tmp + "1";
        q.push(fst);
        q.push(snd);
        v.push_back(stoll(fst));
        v.push_back(stoll(snd));
    }
}
int main() {
    Preparation();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int ans = upper_bound(v.begin(), v.end(), n) - v.begin();
        cout << ans << endl;
    }
}