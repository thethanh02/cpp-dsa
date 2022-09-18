#include <bits/stdc++.h>
using namespace std;

void Solution(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            cnt++;
    }
    cout << pow(2, cnt);
}

int main() {
    string a, b;
    cin >> a >> b;

    Solution(a, b);
}