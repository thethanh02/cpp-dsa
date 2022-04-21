#include <bits/stdc++.h>
using namespace std;
int main() {
    int s1, s2, f1, f2;
    cin >> s1 >> s2 >> f1 >> f2;
    cout << max(abs(f1 - s1), abs(f2 - s2));
}