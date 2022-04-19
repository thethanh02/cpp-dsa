#include <bits/stdc++.h>
using namespace std;

vector<string> data;
void Preparation() {
    queue<pair<string, int>> Q;
    Q.push({"", 0});
    while (1) {
        string s = Q.front().first;
        int cnt = Q.front().second;
        if (s[0] != '0' && cnt > s.size() / 2) 
            data.push_back(s);
        if (data.size() > 1000) return;
        Q.pop();

        Q.push({s + "0", cnt});
        Q.push({s + "1", cnt});
        Q.push({s + "2", cnt + 1});
    }
}

int main() {
    Preparation();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cout << data[i] << " ";
        cout << endl;
    }
}