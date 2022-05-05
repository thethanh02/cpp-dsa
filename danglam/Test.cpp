#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int t = 0; t < n; t++) {
        vector<int> a(100);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++)
            for (int j = i * 2; j < 100; j += n) a[j] = a[i];
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
        for (int j = i + n; j < 100; j += n) v.push_back(v[i]);
    for (auto i : v) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
}