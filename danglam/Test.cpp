#include <bits/stdc++.h>
using namespace std;
void lap(int i) {
    if (i == 10) return;
    lap(i + 1);
    cout << i << " ";
}
int main() {
    int n;
    cin >> n;
    lap(0);
}