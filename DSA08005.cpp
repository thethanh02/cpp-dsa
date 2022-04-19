#include<bits/stdc++.h>
using namespace std;

vector<string> v;
void Preparation() {
    int n = 10000;
    queue<string> q;
    q.push("1");
    v.push_back("1");
    while (n -= 2) {
        string tmp = q.front();
        q.push(tmp + "0");
        v.push_back(tmp + "0");
        q.push(tmp + "1");
        v.push_back(tmp + "1");
        q.pop();
    }
}
int main() {
    Preparation();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
}