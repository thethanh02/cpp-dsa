#include <bits/stdc++.h>
using namespace std;

int n, a[100];
vector<string> res;
void PushBack() {
    string tmp = "";
    for (int i = 1; i <= n; i++) tmp += (a[i] + 'A');
    res.push_back(tmp);
}
void Try(int i) {
    int j;
    for (j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n) PushBack();
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        res.clear();
        cin >> n;
        Try(1);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i];
            if (i < res.size() - 1) cout << ",";
        }
        cout << endl;
    }
}
