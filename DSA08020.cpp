#include <bits/stdc++.h>
using namespace std;
const int oo = 10000;
vector<int> check(oo, 1);
void Prime() {
    check[0] = check[1] = 0;
    for (int i = 2; i <= sqrt(oo); i++)
        if (check[i])
            for (int j = i * i; j <= oo; j += i) check[j] = 0;
}
int Solution(string st, int en) {
    vector <int> v(10000, INT_MAX);
    v[stoi(st)] = 0;
    queue <string> q;
    q.push(st);
    while (v[en] == INT_MAX) {
        string u = q.front(); 
        q.pop();
        for (int i = 0; i < u.size(); i++) {
            string tmp = u;
            int j = 0;
            if (i == 0) j++;
            for (; j <= 9; j++) {
                tmp[i] = j + '0';
                int n = stoi(tmp);
                if (check[n] && v[n] == INT_MAX) {
                    v[n] = v[stoi(u)] + 1;   
                    q.push(tmp);
                }
            }
        }
    }
    return v[en];
}
int main() {
    Prime();
    int t;
    cin >> t;
    while (t--) {
        string st; int en;
        cin >> st >> en;
        cout << Solution(st, en) << endl;
    }
    return 0;
}