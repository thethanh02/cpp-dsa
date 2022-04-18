#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, kt[10] = {0};
        cin >> n;
        char s[100000][20];
        for(int i=0; i<n; i++) cin >> s[i];

        for(int i=0; i<n; i++) {
            for(int j=0; j<strlen(s[i]); j++) {
                kt[s[i][j] - '0']++;
            }
        }
        for(int i=0; i<10; i++)
            if(kt[i] != 0) cout << i << " ";
        cout << endl;
    }
    return 0;
}
