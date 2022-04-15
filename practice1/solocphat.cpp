#include <bits/stdc++.h>
using namespace std;
int n, k;
char a[100], s[] = "68";
vector<string> ds;
void Try(int i) {
    for (int j = 0; j < 2; j++) {
        a[i] = s[j];
        if (i == n - 1) {
            string tmp = "";
            for (int h = 0; h < n; h++) tmp += a[h];
            ds.push_back(tmp);
        }
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ds.clear();
        cin >> n;
        Try(0);
        cout << ds.size() << endl;
        for (int i = 0; i < ds.size(); i++) cout << ds[i] << " ";
        cout << endl;
    }
}