#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii; // X: dau, Y.X: cuoi, Y.Y: trong so
#define X first
#define Y second
int n, m;
vector<ii> edge; // X: dau, Y: cuoi
vector<int> par, num;

void make_set() {
    par.resize(n + 1);
    for (int i = 1; i <= n; i++) par[i] = i;
    num.assign(n + 1, 0);
}
int Find(int u) {
    if (par[u] == u) return u;
    return par[u] = Find(par[u]);
}
void Union(int u, int v) { 
    par[Find(u)] = Find(v); 
}
int Solution() {
    int st, en;
    make_set();
    for (int i = 0; i < edge.size(); i++) {
        st = Find(edge[i].X);
        en = Find(edge[i].Y);
        if (st != en) Union(st, en);
    }
    for (int i = 1; i <= n; i++) {
        st = Find(par[i]);
        num[st]++;
    }
    return *max_element(num.begin(), num.end());
}

int main() {
    int t, u, v;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        edge.clear();
        while (m--) {
            cin >> u >> v;
            edge.push_back(ii(u, v));
        }
        cout << Solution() << endl;
    }
}