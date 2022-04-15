#include <bits/stdc++.h>
using namespace std;

int n, ans, sum, a[10][10];
int row[21], col[21], xuoi[21], nguoc[21];
void Try(int i, int sum) {
    int j;
    for (j = 1; j <= 8; j++) {
        if (!row[j] && !col[j] && !xuoi[i - j + 8] && !nguoc[i + j - 1]) {
            sum += a[i][j];
            row[j] = col[j] = xuoi [i - j + 8] = nguoc[i + j - 1] = 1;
            if (i == 8) ans = max(ans, sum);
            else Try(i + 1, sum);
            sum -= a[i][j];
            row[j] = col[j] = xuoi[i - j + 8] = nguoc[i + j - 1] = 0;
        }
    }
}
int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        ans = 0;
        for (int i = 1; i <= 8; i++) 
            for (int j = 1; j <= 8; j++) cin >> a[i][j];
        Try(1, 0);
        cout << "Test " << k << ": " << ans << endl;
    }
}
