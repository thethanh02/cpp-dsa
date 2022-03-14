#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solution() {
    string s;
    cin >> s;
    int a[26] = {0}, sum = 0;
    for (int i = 0; i < s.size(); i++) 
        a[s[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        sum += a[i];
    }
    int m = *max_element(a, a + 26);
    cout << (sum - m >= m - 1 ? 1 : -1) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}
