#include <bits/stdc++.h>
using namespace std;
char c;
string s;
vector<string> ds;

int check(string s) {
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] == 'A' && s[i - 1] != 'E' && s[i + 1] != 'E') {
            return 0;
        }
        if (s[i] == 'E' && s[i - 1] != 'A' && s[i + 1] != 'A') {
            return 0;
        }
    }
    return 1;
}
int main() {
    cin >> c;
    for (char i = 'A'; i <= c; i++) s.push_back(i);
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    while (tmp != s) {
        if (check(s)) ds.push_back(s);
        next_permutation(s.begin(), s.end());
    }
    if (check(tmp)) ds.push_back(tmp);
    for (auto i : ds) cout << i << endl;
}