#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int k; string s;
        cin >> k >> s;
        int d[128] = {0};
        priority_queue<int, vector<int>> pq;
        for(int i = 0; i < s.size(); i++) d[s[i]]++;
        for(int i = 0; i < s.size(); i++) {
            if(d[s[i]] > 0) {
                pq.push(d[s[i]]);
                d[s[i]] = 0;
            }
        }
        while(k > 0 && !pq.empty()) {
            k--;
            int top = pq.top(); pq.pop();
            top--; pq.push(top);
        }
        long long res = 0;
        while(!pq.empty()) {
            int top = pq.top(); pq.pop();
            res += top * top;
        }
        cout << res << endl;
    }    
}
