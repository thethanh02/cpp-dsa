#include <bits/stdc++.h>
using namespace std;

int Solution(int n, int k, int a[]) {
    int couple[100001] = {0}, cnt = 0;
    
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
    return cnt;
}   
int main() {
    int n, k;
    string s;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> s;
        a[i] = s.size();
    }
    
    cout << Solution(n, k, a);
}