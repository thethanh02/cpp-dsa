#include <bits/stdc++.h>
using namespace std;

void Solution(string s) {
    int idx = 0;
    deque<char> dq;
    for (auto i : s) {
        if (i == '<') {
            if (idx > 0) idx--;
        } else if (i == '>') {
            if (idx < dq.size()) idx++;
        } else if (i == '-') {
            if (idx > 0) {
                idx--;
                dq.erase(dq.begin() + idx);
            }
        } else {
            dq.insert(dq.begin() + idx, i);
            idx++;
        }
    }
    for (auto i : dq) cout << i;
}

int main() {
    string s;
    cin >> s;
    Solution(s);
}