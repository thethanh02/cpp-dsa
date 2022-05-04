#include<bits/stdc++.h>
using namespace std;
int n, v, val_max = 0;
vector<int> res, a, b, c;
void update() {
    int vol = 0, val = 0;
    for (int i = 0; i < n; i++) {
        if (b[i]) {
            vol += a[i];
            val += c[i];
            if (vol > v) return;
        }
    }
    if (val > val_max) {
        val_max = val;
        res = b;
    }
}
void Try(int i) {
    int j;
    for (j = 0; j <= 1; j++) {
        b[i] = j;
        if (i == n - 1) {
            update();
        }
        else Try(i + 1);
    }
}
int main() {
    cin >> n >> v;
    a.resize(n);
    b.resize(n);
    c.resize(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> a[i];
    Try(0);
    cout << val_max << endl;
    for (auto i : res) cout << i << " ";
}