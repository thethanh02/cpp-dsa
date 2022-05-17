#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii; // X: trog so, Y.X: dau, Y.Y: cuoi
#define X first
#define Y second

int n, m;
vector<iii> edge;
vector<int> par;

void make_set() {
    par.assign(n + 1, - 1);
}
int Find(int u) {
    if (par[u] == -1) return u;
    return par[u] = Find(par[u]);
}
void Union(int u, int v) { 
    par[Find(u)] = Find(v); 
}
int Kruskal() {
    int ans = 0;
    for (auto i : edge) {
        if (Find(i.Y.X) != Find(i.Y.Y)) {
            Union(i.Y.X, i.Y.Y);
            ans += i.X;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        edge.clear();
        make_set();
        while (m--) {
            int u, v, w;
            cin >> u >> v >> w;
            edge.push_back(iii(w, ii(u, v)));
        }
        sort(edge.begin(), edge.end());
        cout << Kruskal() << endl;
    }
}