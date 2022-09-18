#include <bits/stdc++.h>
using namespace std;

void Solution(int n, int p, vector<int> a) {
    int pos = 0;
    for (int i = 0; i < a.size() - 1; i++) 
        if (a[i] <= a[i + 1] && a[i] != 0) {
            pos = i;
            break;
        }

    vector<int> res1(n), res2;
    int j = n - 1;
    while (a[j] == 0 && j >= 0) 
        res1[j--] = 0;

    if (j < 0) {
        for (int i : res1) cout << i << endl;
        return;
    } 
    res1[j--] = 1;

    for (int i = j; i >= 0; i--) {
        if (a[i] > a[i + 1])
            res1[i] = res1[i + 1] + 1;
        else
            res1[i] = res1[i + 1];
    }

    res2 = res1;
    res2[pos] = res2[pos] + 1;
    for (int i = pos - 1; i >= 0; i--) {
        if (a[i] > a[i + 1])
            res2[i] = res2[i + 1] + 1;
        else
            res2[i] = res2[i + 1];
    }

    if (res1[0] != p || res2[0] <= p) 
        cout << "ambiguous";
    else 
        for (int i : res1) cout << i << endl;

}

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (int& i : a) cin >> i;

    Solution(n, p, a);
}