#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
vector<int> ds;
int s;

int tim() {
    int N = ds.size();
    for (int i = 0; i < N; i++) 
        if (ds[i] == s) return 1;
    return 0;
}
void in() {
    for (int i = 1; i <= k; i++) 
        cout << ds[a[i] - 1] << " ";
    cout << endl;
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
