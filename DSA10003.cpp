#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii; // X: dau, Y.X: cuoi, Y.Y: trong so
#define X first
#define Y second
int n, m;
vector<ii> edge; // X: dau, Y: cuoi
vector<int> par;

void make_set() {
    par.resize(n + 1);
    for (int i = 1; i <= n; i++) par[i] = i;
}
int Find(int u) {
    if (par[u] == u) return u;
    return par[u] = Find(par[u]);
}
void Union(int u, int v) { 
    par[Find(u)] = Find(v); 
}
string ChuTrinh() {
    int st, en;
    make_set();
    for (int i = 0; i < edge.size(); i++) {
        st = Find(edge[i].X);
        en = Find(edge[i].Y);
        if (st == en) return "YES";
        Union(st, en);
    }
    return "NO";
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
        cout << ChuTrinh() << endl;
    }
}