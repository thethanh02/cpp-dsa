#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
void Solution() {
    string s;
    int x;
    cin >> s;
    if (s == "PUSHFRONT") {
        cin >> x;
        dq.push_front(x);
    } else if (s == "PUSHBACK") {
        cin >> x;
        dq.push_back(x);
    } else if (s == "PRINTFRONT") {
        if (dq.empty()) cout << "NONE\n";
        else cout << dq.front() << endl;
    } else if (s == "PRINTBACK") {
        if (dq.empty()) cout << "NONE\n";
        else cout << dq.back() << endl;
    } else if (s == "POPFRONT") {
        if (!dq.empty()) dq.pop_front();
    } else if (s == "POPBACK")
        if (!dq.empty()) dq.pop_back();
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}