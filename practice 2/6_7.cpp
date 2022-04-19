#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        queue<string> q;
        q.push("6");
        q.push("8");
        while (n--) {
            string tmp = q.front(), tmp1 = q.front();
            q.pop();
            q.push(tmp + "6");
            q.push(tmp + "8");
            reverse(tmp1.begin(), tmp1.end());
            cout << tmp << tmp1 << " ";
        }
        cout << endl;
    }
}