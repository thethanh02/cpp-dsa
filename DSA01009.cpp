#include <bits/stdc++.h>
using namespace std;
int n, k, a[200];
vector<string> res;
int check() {
    int d = 0, s = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) d++;
        else d = 0;
        if(d > k) return 0;
        if(d == k) s++;
    }
    return s == 1;
}
void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n) {
            if (check()) {
                string tmp = "";
                for (int i = 1; i <= n; i++) tmp += a[i] + 'A';
                res.push_back(tmp);
            }
        } else Try(i + 1);
    }
}
int main() {
    cin >> n >> k;
    Try(1);
    cout << res.size();
    for (auto i : res) cout << endl << i;
}
