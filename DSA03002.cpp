#include <bits/stdc++.h>
using namespace std;
int to_int(string s) {
    stringstream tmp(s);
    int res = 0;
    tmp >> res;
    return res;
}
void Solution(string a, string& a5, string& a6) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != '5' && a[i] != '6') {
            a5.push_back(a[i]);
            a6.push_back(a[i]);
        }
        else {
            a5.push_back('5');
            a6.push_back('6');
        }
    }

}
int main() {
    string a, b;
    cin >> a >> b;
    string a5, b5, a6, b6;
    Solution(a, a5, a6);
    Solution(b, b5, b6);
    cout << to_int(a5) + to_int(b5) << " " << to_int(a6) + to_int(b6);
    return 0;
}
