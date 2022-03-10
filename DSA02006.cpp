#include <bits/stdc++.h>
using namespace std;
int n, k, vis[100], a[100], check;
vector<int> tmp;
void Try(int i) {
    int j;
    for (j = 0; j <= 1; j++) {
        vis[i] = j;
        if (i == n) {
            int s = 0;
            for (int h = 1; h <= n; h++)
                if (!vis[h]) s += a[h];
            if (s == k) {
                tmp.clear();
                for (int h = 1; h <= n; h++)
                    if (!vis[h]) tmp.push_back(a[h]);
                cout << "[";
                for (int h = 0; h < tmp.size() - 1; h++)
                    cout << tmp[h] << " ";
                cout << tmp[tmp.size() - 1] << "] ";
                check = 1;
            }
        } else
            Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        check = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a, a + n + 1);
        Try(1);
        if (!check) cout << -1;
        cout << endl;
    }
}
