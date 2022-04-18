#include <bits/stdc++.h>
using namespace std;
struct mang {
    int dem, nd;
};
int tim(int x, mang ds[], int n) {
    for (int i = 0; i < n; i++)
        if (x == ds[i].nd) return i;
    return -1;
}
int cmp(mang s1, mang s2) {
    if (s1.dem > s2.dem) return 1;
    if (s1.dem == s2.dem) {
        if (s1.nd < s2.nd) return 1;
    }
    return 0;
}
int main() {
    int time;
    cin >> time;
    while (time--) {
        int d, x;
        cin >> d;
        struct mang ds[1000];
        int n = 0;
        while (d--) {
            cin >> x;
            int t = tim(x, ds, n);
            if (t == -1) {
                ds[n].nd = x;
                ds[n].dem = 1;
                n++;
            } else
                ds[t].dem++;
        }
        sort(ds, ds + n, cmp);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < ds[i].dem; j++)
                cout << ds[i].nd << " ";
        }
        cout << endl;
    }
}
