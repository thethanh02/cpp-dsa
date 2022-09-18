#include <bits/stdc++.h>
using namespace std;

string Solution(string a) {
    if (a.size() == 0)
        return "";
    if (a.size() <= 2) {
        return a;
    }
    for (int i = 1; i < a.size(); i++) {
        if ((a[i] <= a[i - 1] && a[i - 1] >= a[i - 2] && a[i] < a[i - 2]) ||
            (a[i] < a[i - 1] && a[i - 1] > a[i - 2])) {
            while (a[i] <= a[i - 1] && i < a.size())
                i++;

            if (i > a.size()) {
                i--;
                while (a[i] == '0') i--;
            }

            for (int j = i; j < a.size(); j++)
                a[j] = a[i - 1];
            break;
        }
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;

        cout << Solution(a);
        cout << endl;
    }
}