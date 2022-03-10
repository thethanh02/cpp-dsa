#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], v[100];
vector<vector<string>> res;
int Test() {
    for (int i = 1; i < k; i++) 
        if (v[a[i]] > v[a[i + 1]]) return 0;
    return 1;
}
void Try(int i) {
    int j;
    for (j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            if (Test()) {
                vector<string> tmp;
                for (int i = 1; i <= k; i++) tmp.push_back(to_string(v[a[i]]));
                res.push_back(tmp);
            }
        }
        else Try(i + 1);
    }
}
void print() {
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) cout << res[i][j] << " ";
        cout << endl;
    }
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (k = 2; k <= n; k++) {
        Try(1);
    }
    print();
}
