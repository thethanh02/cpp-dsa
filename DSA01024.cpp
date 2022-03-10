#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
vector<string> ds, res;
string s;

int tim() {
    int N = ds.size();
    for (int i = 0; i < N; i++) 
        if (ds[i] == s) return 1;
    return 0;
}
void in() {
    int tmp = a[1] - 1;
    res.push_back(ds[tmp]);
    for (int i = 2; i <= k; i++) {
        tmp = a[i] - 1;
        res[res.size() - 1] += " " + ds[tmp];
    }
    cout << res[res.size() - 1] << endl;
}
void Try(int i) {
    int j;
    for (j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) in();
        else Try(i + 1);
    }
}
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> s;
        int t = tim();
        if (!t) ds.push_back(s);
    }
    sort(ds.begin(), ds.end());
    n = ds.size();
    Try(1);
}
