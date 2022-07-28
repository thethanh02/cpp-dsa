#include <bits/stdc++.h>
using namespace std;
int a[10];
vector<int> v(100000, 0);
int AtoInt(vector<int> a) {
    int x = 0;
    for (int i:a)
        x = x * 10 + i;
    return x;
}
void update() {
    vector<int> tmp;
    for (int i = 0; i <= 5; i++)
        if (a[i] == 1) tmp.push_back(i);
    do {
        int n = AtoInt(tmp);
        if (n <= 100000) v[n] = 1;
    } while (next_permutation(tmp.begin(), tmp.end()));
}
void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == 5) update();
        else Try(i + 1);
    }
}
int main() {
    Try(0);
    for (int i = 2; i <= 100000; i++)
        v[i] += v[i - 1];
    int t, l, r;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        cout << v[r] - v[l - 1] << endl;
    }
}
