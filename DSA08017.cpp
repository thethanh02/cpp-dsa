#include <bits/stdc++.h>
using namespace std;

vector<string> v;
int a[16];
void Preparation() {
    int qsize = 0, cnt = 1;
    queue<string> q;
    q.push("6");
    q.push("8");
    while (1) {
        string tmp = q.front();
        if (tmp.size() > cnt) a[cnt++] = qsize;
        if (tmp.size() > 15) return;
        qsize++;
        v.push_back(tmp);
        q.pop();
        
        q.push(tmp + "6");
        q.push(tmp + "8");
    }
}
int main() {
    Preparation();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        // cout << a[n] << endl;
        for (int i = a[n] - 1; i >= 0; i--) 
            cout << v[i] << " ";
        cout << endl;
    }
}