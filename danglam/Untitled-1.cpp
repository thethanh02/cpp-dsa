#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    queue<long long> q;
    q.push(4);
    q.push(7);
    vector<long long> v;
    while (1) {
        long long x = q.front();
        v.push_back(x);
        if (x > b) break;
        q.pop();
        q.push(x * 10 + 4);
        q.push(x * 10 + 7);
    }
    long long kq = 0, pos = 0;
    while (v[pos] < a) pos++;
    kq += (v[pos] - a + 1) * v[pos];
    for (int i = pos + 1; i < v.size(); i++) 
        kq += (v[i] - v[i - 1]) * v[i];
    // kq -= (v[v.size() - 1] - b) * v[v.size() - 1];
    cout << kq << endl;
}