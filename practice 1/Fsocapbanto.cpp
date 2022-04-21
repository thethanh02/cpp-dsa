#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, cnt = 0; 
    string s;
    cin >> n >> k;
    int a[n], couple[100001]= {0};
    for (int i = 0; i < n; i++) {
        cin >> s;
        a[i] = s.size();
    }

    for (int i = 0; i < 100001; i++) couple[i] = 0;

    for (int i = 0; i <= k; i++) couple[a[i]]++;
    cnt += (couple[a[0]] - 1);
    
    for (int i = 1, j = k + 1; i < n - 1; i++) {
        couple[a[i - 1]]--;
        if (j < n) {
            couple[a[j]]++;
            j++;
        } 
        cnt += (couple[a[i]] - 1);
    }

    cout << cnt;
}
