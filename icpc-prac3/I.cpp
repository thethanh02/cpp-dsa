#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

bool compare(ii a, ii b) {
    if (a.first > b.first)
        return 1;
    else if (a.first < b.first)
        return 0;
    if (a.second > b.second) return 1;
    return 0;
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<ii> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end(), compare);
    vector<ll> markTime(t + 1, 0);

    for (int i = 0; i < a.size(); i++) {
        for (int j = a[i].second; j >= 0; j--) {
            if (markTime[j] == 0) {
                markTime[j] = a[i].first;
                break;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i <= t; i++)
        ans += markTime[i];

    cout << ans;
}