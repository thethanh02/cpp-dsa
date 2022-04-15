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

    for (auto i : ds) cout << i << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}
/*
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
vector<string> ds;

void Try(int index, string temp, int sum) {
    for (int i = index; i < n; i++) {
        int x = sum + v[i];
        if (x <= n) {
            string tmp = temp;
            tmp += " " + to_string(v[i]);
            if (x == n) {
                tmp += ")";
                ds.push_back(tmp);
            } else Try(i, tmp, x);
        }
    }
}

void Solution() {
    ds.clear();
    v.clear();
    cin >> n;
    for (int i = 0; i < n; i++) v.push_back(n - i);

    string tmp = "(" + to_string(v[0]) + ")";
    ds.push_back(tmp);
    for (int i = 1; i < n; i++) {
        string tmp = "(" + to_string(v[i]);
        Try(i, tmp, v[i]);
    }

    for (auto i : ds) cout << i << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}
*/