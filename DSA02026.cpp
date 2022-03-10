#include <bits/stdc++.h>
using namespace std;
int n, cnt;

int check(vector<int> a) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
        if (abs(a[i] - a[j]) == j - i) return 0;
    }
    return 1;
}
void Solution(vector<int> a) {
    vector<int> tmp = a;
    reverse(tmp.begin(), tmp.end());
    while (tmp != a) {
        if (check(a)) cnt++;
        next_permutation(a.begin(), a.end());
    }
    if (check(tmp)) cnt++;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n;
        vector<int> a;
        for (int i = 1; i <= n; i++) a.push_back(i);
        Solution(a);
        cout << cnt << endl;
    }
}