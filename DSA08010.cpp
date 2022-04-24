#include<bits/stdc++.h>
using namespace std;

int Solution(int a) {
    if (a == 1) return 0;
    map <int, int> mp;
    mp[a] = 0;
    queue <int> q;
    q.push(a);
    while (mp[1] == 0) {
        int u = q.front(); 
        q.pop();
        if (u - 1 > 0) {
            if (mp[u - 1] == 0) {
                mp[u - 1] = mp[u] + 1;
                q.push(u - 1);
            }
            for (int i = sqrt(u); i >= 2; i--) {
                if (u % i == 0 && mp[u / i] == 0) {
                    mp[u / i] = mp[u] + 1;
                    q.push(u / i);
                }
            }
        }
    }
    return mp[1];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        cout << Solution(a) << endl;
    }
}