#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> canh;
#define ts first
#define dau second.first
#define cuoi second.second
int n, m, a[100][100], par[100];
void make_set() {
    for (int i = 1; i <= n; i++) par[i] = i;
}
int Find(int u) {
    if (par[u] == u) return u;
    return par[u] = Find(par[u]);
}
void Union(int u, int v) { 
    par[Find(u)] = Find(v); 
}
bool ChuTrinh(vector<canh> STree) {
    make_set();
    for (int i = 0; i < STree.size(); i++) {
        int d = Find(STree[i].dau), c = Find(STree[i].cuoi);
        if (d == c) return 1;
        Union(d, c);
    }
    return 0;
}
void KRUSKAL() {
    vector<canh> edge, STree;
    for (int i = 1; i <= n - 1; i++) 
        for (int j = i + 1; j <= n; j++) 
            if (a[i][j] != 1e9) edge.push_back({a[i][j], {i, j}});
    sort(edge.begin(), edge.end());
    make_set();
    int i, ans = edge[0].ts, m = edge.size();
    STree.push_back(edge[0]);
    for (i = 1; i < m; i++) {
        STree.push_back(edge[i]);
        if (!ChuTrinh(STree)) ans += edge[i].ts;
        else {
            STree.pop_back();
            continue;
        }
        if (STree.size() > n - 1) break;
    }
    cout << ans << endl;
    for (auto i : STree) cout << i.dau << " " << i.cuoi << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= n; j++) cin >> a[i][j];
        KRUSKAL();
        cout << endl;
    }
}
// 3
// 3
// 0 5 1
// 5 0 3
// 1 3 0
// 2
// 0 5
// 5 0
// 10
// 0 4 8 8 2 9 1000000000 5 4 7
// 4 0 2 1000000000 9 7 5 1000000000 6 1000000000
// 8 2 0 4 1000000000 6 6 9 9 9
// 8 1000000000 4 0 7 7 1000000000 6 1000000000 1000000000
// 2 9 1000000000 7 0 3 4 3 1 2
// 9 7 6 7 3 0 3 1 1 5
// 1000000000 5 6 1000000000 4 3 0 4 5 1000000000
// 5 1000000000 9 6 3 1 4 0 4 2
// 4 6 9 1000000000 1 1 5 4 0 4
// 7 1000000000 9 1000000000 2 5 1000000000 2 4 0

// out:
// 1 3
// 2 3

// 5
// 1 2

// 20
// 5 9
// 6 8
// 6 9
// 1 5
// 2 3
// 5 10
// 6 7
// 1 2
// 3 4