#include <bits/stdc++.h>
using namespace std;

bool check(queue<int> q[]) {
    for (int i = 0; i < 3; i++) 
        if (!q[i].empty()) return 1;
    return 0;
}
void Solution(queue<int> q[], int sum) {
    vector<int> res;
    if (sum % 3 != 0) {
        if (sum % 3 == 1) {
            if (!q[1].empty()) q[1].pop();
            else {
                q[2].pop();
                q[2].pop();
            }
        }
        if (sum % 3 == 2) {
            if (!q[2].empty()) q[2].pop();
            else {
                q[1].pop();
                q[1].pop();
            }
        }
    }
    if (check(q)) {
        for (int i = 0; i < 3; i++) {
            while (!q[i].empty()) {
                res.push_back(q[i].front());
                q[i].pop();
            }
        }
        sort(res.begin(), res.end(), greater <int>());
        for (auto i : res) cout << i;
    } else cout << -1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        queue<int> q[3];
        vector<int> a(n);
        for (auto& i : a) cin >> i;
        sort(a.begin(), a.end());
        
        for (auto i : a) {
            q[i % 3].push(i);
            if (i % 3 != 0) sum += i;
        }
        Solution(q, sum);
        cout << endl;
    }
}