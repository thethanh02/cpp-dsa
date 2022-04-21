#include <bits/stdc++.h>
using namespace std;
int n, a[105];
char c, c1;
vector<string> v;
void PushBack() {
    int demc = 0, demc1 = 0, max_demc = 0, max_demc1 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            demc1 = 0;
            demc++;
            max_demc = max(max_demc, demc);
        } else {
            demc = 0;
            demc1++;
            max_demc1 = max(max_demc1, demc1);
        }
    }
    if (max_demc > max_demc1 && max_demc > 4) {
        string tmp = "";
        for (int i = 0; i < n; i++) {
            if (a[i]) tmp += c;
            else tmp += c1;
        }
        v.push_back(tmp);
    }
}
void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n - 1) PushBack();
        else Try(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        v.clear();
        cin >> n >> c;
        if (c == 'X') c1 = 'O';
        else c1 = 'X';

        Try(0);
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) 
            cout << v[i] << endl;
    }
}