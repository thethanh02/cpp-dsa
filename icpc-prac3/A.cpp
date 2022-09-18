#include <bits/stdc++.h>
using namespace std;

void Solution(int n, vector<int> a) {
    for (int i = 0; i < n - 1; ) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] % a[i] == 0) {
                cout << a[j] << endl;
                i = j + 1;
                break;
            }
            if (j == n - 1) return;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;

    Solution(n, a);
}