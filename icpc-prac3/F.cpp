#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct pipe {
    int pos, l, h;
};

struct streakpipe {
    pipe en;
    int low, high;
};

int main() {
    int n, end, H;
    cin >> n >> end >> H;

    vector<pipe> v;
    v.push_back({0, 0, H - 1});

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back({a, b, H - c - 1});
    }

    int cnt = 0;

    int low = 0, high = H - 1;

    vector<streakpipe> x;
    x.push_back({v[0], v[0].l, v[0].h});

    for (int i = 1; i < v.size(); i++) {
        int a, b;
        a = max(low, v[i].l);
        b = min(high, v[i].h);
        if (a <= b) {
            x.back().en = v[i];
            x.back().low = a;
            x.back().high = b;
            low = a;
            high = b;
        } else {
            x.push_back({v[i], v[i].l, v[i].h});
            low = v[i].l;
            high = v[i].h;
        }
    }

    ll ans = end;

    int prv = x[0].low;
    if (x[1].low > x[0].high) 
        prv = x[0].high;
    
    else if (x[1].high < x[0].low) 
        prv = x[0].low;
    
    for (int i = 1; i < x.size(); i++) {
        if (prv > x[i].high) {
            ans += prv - x[i].high;
            prv = x[i].high;
        } else if (prv < x[i].low) {
            ans += x[i].low - prv;
            prv = x[i].low;
        }
    }

    cout << ans;
}