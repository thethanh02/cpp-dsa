#include <bits/stdc++.h>
using namespace std;
string s, p = "+-*/";
vector<int> pos;
int Caculator() {
    string tmp1 = s.substr(0, 2), tmp2 = s.substr(5, 2), tmp3 = s.substr(10, 2);
    int n1 = stoi(tmp1), n2 = stoi(tmp2), n3 = stoi(tmp3);
    if (s[3] == '+') {
        if (n1 + n2 == n3) return 1;
    } else if (s[3] == '-') {
        if (n1 - n2 == n3) return 1;
    } else if (s[3] == '*') {
        if (n1 * n2 == n3) return 1;
    } else if (n1 % n2 == 0 && n1 / n2 == n3) return 1;
    return 0;
}
int Try(int index) {
    if (index == pos.size()) {
        // cout << s << endl;
        if (Caculator()) return 1;
    }
    for (int i = index; i < pos.size(); i++) {
        if (pos[i] == 3) {
            for (auto h : p) {
                s[pos[i]] = h;
                if (Try(i + 1)) return 1;
            }
        } else {
            int h = '0';
            if (pos[i] == 0 || pos[i] == 5 || pos[i] == 10) h++;
            for (int j = h; j <= '9'; j++) {
                s[pos[i]] = j;
                if (Try(i + 1)) return 1;
            }
        }
    }
    return 0;
}
string Solution() {
    if (Try(0)) return s;
    return "WRONG PROBLEM!";
}
int main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        pos.clear();
        getline(cin, s);
        for (int i = 0; i < s.size(); i++) 
            if (s[i] == '?') pos.push_back(i);
        cout << Solution() << endl;
    }
}