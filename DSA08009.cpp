#include<bits/stdc++.h>
using namespace std;

int a, b;
int Solution(int a, int b) {
    vector <int> v(20005, INT_MAX);
    v[a] = 0;
    queue <int> q;
    q.push(a);
    while (v[b] == INT_MAX) {
        int u = q.front(); 
        q.pop();
        if (u - 1 > 0 && v[u - 1] == INT_MAX) {
            v[u - 1] = v[u] + 1;
            q.push(u - 1);
        }
        if (u * 2 < 20000) {
            v[u * 2] = v[u] + 1;
            q.push(u * 2);
        }
    }
    return v[b];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << Solution(a, b) << endl;
    }
}