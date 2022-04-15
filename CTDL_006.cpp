#include <bits/stdc++.h>
using namespace std;
int tim(vector<int> a, int x) {
    for (int i = 0; i < a.size(); i++) if(a[i] == x) return 1;
    return 0;
}
int main() {
    int n, x;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        int t = tim(a, x);
        if (!t) a.push_back(x);
    }
    for (auto i : a) cout << i << " ";
}