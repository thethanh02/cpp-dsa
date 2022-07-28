#include <bits/stdc++.h>
using namespace std;
int n, a[100][100], d[100][100], e[100][100];
void Floyd() {
    int i, j, k;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            d[i][j] = a[i][j];
            e[i][j] = i;
        }
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (d[i][j] > d[i][k] + d[k][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                    e[i][j] = k;
                }
}

int main() {
    int t;
    cin >> t;
}