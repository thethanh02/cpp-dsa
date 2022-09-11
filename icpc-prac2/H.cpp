#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef pair<ii, ii> iiii;
typedef pair<iiii, ll> iiiii;
#define X first
#define Y second
#define distance Y

ll n, r, x, y;
vector<iiiii> edge;
map<ii, ii> par;
vector<ii> v;

map<ii, int> m;

void make_set() {
    for (ii i : v) par[i] = i;
}
ii Find(ii u) {
    if (par[u] == u) return u;
    return par[u] = Find(par[u]);
}
void Union(ii u, ii v) { 
    par[Find(u)] = Find(v);
}
void Solution() {
    ii st, en;
    make_set();
    for (iiiii i : edge) {
        st = Find(i.X.X);
        en = Find(i.X.Y);
        if (st != en && i.distance <= r * r) 
            Union(st, en);
    }

    
    
    int cnt = 0;
    for (ii i : v) {
        ii temp = Find(i);
        if (m[temp] == 0) {
            m[temp] = 1;
            cnt++;
        }
    }
    cout << cnt;
}

int main() {
    cin >> n >> r;
    for (ll i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll dY = v[j].Y - v[i].Y, dX = v[j].X - v[i].X;
            ll d = dX * dX + dY * dY;
            edge.push_back({{v[i], v[j]}, d});
        }
    }
    Solution();
}