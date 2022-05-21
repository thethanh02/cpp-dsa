#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> ds;
string a[100];
void Try(int i, int sum, int pos) {
    if (sum == n) {
        string tmp = "(";
        for (int h = 0; h < i; h++) {
            tmp += a[h];
            if (h != i - 1) tmp += " ";
            else tmp += ")";
        }
        ds.push_back(tmp);
    }
    for (int j = pos; j >= 1; j--) {
        if (sum + j <= n) {
            a[i] = to_string(j);
            Try(i + 1, sum + j, j);
        }
    }
}

void Solution() {
    ds.clear();
    cin >> n;
    Try(0, 0, n);
    cout << ds.size() << endl;
    for (auto i : ds) cout << i << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}