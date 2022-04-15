#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> D;

void process(vector<int> v, int index, string temp, int sum) {
    for (int i = index; i < n; i++) {
        int x = sum + v[i];
        if (x <= n) {
            string tmp = temp;
            tmp += " " + to_string(v[i]);
            if (x == n) {
                tmp += ")";
                D.push_back(tmp);
            } else process(v, i, tmp, x);
        }
    }
}

void Solution() {
    D.clear();
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) v[i] = n - i;

    for (int i = 0; i < n; i++) {
        string tmp = "(" + to_string(v[i]);
        if (i == 0) {
            tmp += ")";
            D.push_back(tmp);
        } else process(v, i, tmp, v[i]);
    }

    cout << D.size() << endl;
    for (auto i : D) cout << i << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}