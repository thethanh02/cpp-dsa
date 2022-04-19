#include <bits/stdc++.h>
using namespace std;
queue<int> q;
void Solution() {
    string s;
    int x;
    
    cin >> s;
    if (s == "PUSH") {
        cin >> x;
        q.push(x);
    } else if (s == "PRINTFRONT") {
        if (q.empty()) cout << "NONE\n";
        else cout << q.front() << endl;
    } else if (s == "POP")
        if (!q.empty()) q.pop();
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}