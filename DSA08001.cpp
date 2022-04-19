#include <bits/stdc++.h>
using namespace std;

void Solution() {
    int n, x, test;
    queue<int> q;
    cin >> test;
    while (test--) {
        cin >> n;
        switch (n) {
            case 1:
                cout << q.size() << endl;
                break;
            case 2:
                cout << (q.empty() ? "YES\n" : "NO\n");
                break;
            case 3:
                cin >> x;
                q.push(x);
                break;
            case 4: 
                if (!q.empty()) q.pop();
                break;
            case 5:
                cout << (q.empty() ? -1 : q.front()) << endl;
                break;
            case 6:
                cout << (q.empty() ? -1 : q.back()) << endl;
                break;
            default:
                break;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) Solution();
}