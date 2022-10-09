#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<vector<int>> v;
vector<int> x;


int BFS(int st, int en) {
    queue<pair<int, int>> q;
    q.push({st, 0});
    while (!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        for (int i : v[a]) {
            if (b + 1 > 3) return 4;
            if (i == en) return b + 1;        
            q.push({i, b + 1});
        }
    }
    return 4;
}

bool Solution() {
    for (int i = 0; i < n - 1; i++) 
        if (BFS(x[i], x[i + 1]) > 3)
            return 0;

    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        v.clear();
        v.resize(n + 1);
        x.resize(n);

        for (int i = 0, a, b; i < n - 1; i++) {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        for (int i = 0; i < n; i++) 
            cin >> x[i];
        
        cout << Solution() << endl;
    }
}