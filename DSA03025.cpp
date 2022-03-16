#include <bits/stdc++.h>
using namespace std;
#define ll long long

int cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
void Solution(pair<int, int> a[], int n) {
    sort(a, a + n, cmp);
    int j = 0, cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i].first >= a[j].second) {
            cnt++;
            j = i;
        }
    }
    cout << cnt << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
        Solution(a, n);
    }
}
